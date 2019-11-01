/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:25:53 by talexia           #+#    #+#             */
/*   Updated: 2019/10/23 19:06:54 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_clear_history(t_log *history, t_log *tmp)
{
	t_log	*before;

	before = history;
	if (before != tmp)
	{
		while (before->next != tmp)
			before = before->next;
		before->next = tmp->next;
	}
	else
		history = tmp->next;
	free(tmp->remain);
	free(tmp);
}

char	*ft_check_log(char *log, char **line)
{
	char	*end;

	end = NULL;
	if (log && BUFF_SIZE != 1)
		if ((end = ft_strchr(log, '\n')))
		{
			*end = '\0';
			*line = ft_strdup(log);
			ft_strcpy(log, ++end);
		}
		else
		{
			*line = ft_strdup(log);
			ft_strclr(log);
		}
	else
		*line = ft_strnew(1);
	return (end);
}

int		ft_read_line(const int fd, char **line, char **remain)
{
	int				i;
	char			buf[BUFF_SIZE + 1];
	char			*end;
	char			*tmp;

	end = ft_check_log(*remain, line);
	while (!end && (i = read(fd, buf, BUFF_SIZE)))
	{
		buf[i] = '\0';
		if ((end = ft_strchr(buf, '\n')))
		{
			*end = '\0';
			if (BUFF_SIZE != 1)
				*remain = ft_strcpy(*remain, ++end);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)))
			return (-1);
		free(tmp);
	}
	if (i || ft_strlen(*line) || ft_strlen(*remain))
		return (1);
	else
		return (0);
}

t_log	*ft_create_history(int fd)
{
	t_log	*new;

	new = (t_log*)malloc(sizeof(t_log));
	if (!new)
		return (NULL);
	new->remain = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1));
	if (!(new->remain))
	{
		free(new);
		return (NULL);
	}
	new->fd = fd;
	new->next = NULL;
	return (new);
}

int		get_next_line(const int fd, char **line)
{
	static t_log	*history;
	t_log			*tmp;
	char			buf[1];
	int				result;

	if (fd < 0 || !line || (read(fd, buf, 0)) < 0 || BUFF_SIZE < 1)
		return (-1);
	if (history == NULL)
		if (!(history = ft_create_history(fd)))
			return (-1);
	tmp = history;
	while (tmp->fd != fd)
		if (tmp->next == NULL)
			tmp->next = ft_create_history(fd);
		else
			tmp = tmp->next;
	result = ft_read_line(fd, line, &tmp->remain);
	if (result == 0)
		ft_clear_history(history, tmp);
	return (result);
}
