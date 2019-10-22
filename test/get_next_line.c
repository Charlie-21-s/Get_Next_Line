/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:25:53 by talexia           #+#    #+#             */
/*   Updated: 2019/10/22 13:15:30 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_check_log(int fd, t_list **log)
{
	t_list	*tmp;
	int		id;

	if (!log)
		return (NULL);
	tmp = *log;
	while (log)
	{
		id = (int)tmp->content_size == fd;
		if (id = fd)
			return (tmp);
		tmp = tmp->next;
	}
	tmp = ft_lstnew("", fd);
	ft_lstadd(
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*log;
	t_list			*tmp;

	if (fd < 0 || !line)
		return (-1);
	tmp = ft_check_log(fd, &log);
	if (!tmp)
		return (-1);
	return (1);
}
