/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:25:53 by talexia           #+#    #+#             */
/*   Updated: 2019/10/22 16:56:42 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int				i;
	char			buf[BUFF_SIZE + 1];
	char			*end;
	int				flag;
	static char		*log;

	if (fd < 0)
		return (-1);
	flag = 1;
	if (log)
		*line = ft_strdup(log);
	else
		*line = ft_strnew(1);
	while (flag && (i = read(fd, buf, BUFF_SIZE)))
	{
	!(end = ft_strchr(buf, '\n')))
		buf[i] = '\0';
		*line = ft_strjoin(*line, buf);
	}
	*end = '\0';
	*line = ft_strjoin(*line, buf);
	log = ft_strdup(++end);
	return (0);
}
