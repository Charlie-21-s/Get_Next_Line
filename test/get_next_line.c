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

char	*ft_check_log(char *log, char **line)
{
	char	*end;

	end = NULL;
	if (log)
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
			*remain = ft_strdup(++end);
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
	new->fd = fd;
	new->next = NULL;
	new->remain = NULL;
	return (new);
}

int		get_next_line(const int fd, char **line)
{
	static t_log	*history;
	t_log			*tmp;

	if (fd < 0)
		return (-1);
	if (history == NULL)
		history = ft_create_history(fd);
	tmp = history;
	while (tmp->fd != fd)
		if (tmp->next == NULL)
			tmp->next = ft_create_history(fd);
		else
			tmp = tmp->next;
	return (ft_read_line(fd, line, &tmp->remain));
}
