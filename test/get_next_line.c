/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:25:53 by talexia           #+#    #+#             */
/*   Updated: 2019/10/23 16:26:16 by talexia          ###   ########.fr       */
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

int		get_next_line(const int fd, char **line)
{
	int				i;
	char			buf[BUFF_SIZE + 1];
	char			*end;
	char			*tmp;
	static char		*log;

	if (fd < 0)
		return (-1);
	end = ft_check_log(log, line);
	while (!end && (i = read(fd, buf, BUFF_SIZE)))
	{
		buf[i] = '\0';
		if ((end = ft_strchr(buf, '\n')))
		{
			*end = '\0';
			log = ft_strdup(++end);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buf);
		free(tmp);
	}
	if (i || ft_strlen(*line))
		return (1);
	else
		return (0);
}
