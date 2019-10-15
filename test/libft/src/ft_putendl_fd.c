/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:34:15 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:11:45 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putendl_fd(char const *str, int fd)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i])
		ft_putchar_fd(str[i++], fd);
	ft_putchar_fd('\n', fd);
}
