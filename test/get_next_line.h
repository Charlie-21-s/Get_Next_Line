/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:20:48 by talexia           #+#    #+#             */
/*   Updated: 2019/10/23 19:05:19 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include "libft/includes/libft.h"
# define BUFF_SIZE 1

typedef struct			s_log
{
	char				*remain;
	int					fd;
	struct s_log		*next;
}						t_log;

int						get_next_line(const int fd, char **line);
#endif
