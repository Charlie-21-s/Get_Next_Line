/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:55:13 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:14:23 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_print_n_fd(long int l, long int tmp, int fd)
{
	char	s;
	int		t;

	while (tmp >= 10)
	{
		tmp = tmp / 10;
		t = l / tmp;
		s = t + 48;
		ft_putchar_fd(s, fd);
		l = l - ((s - 48) * tmp);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	long int	tmp;
	long int	l;

	l = n;
	if (l == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (l < 0)
		{
			ft_putchar_fd('-', fd);
			l = -1 * l;
		}
		tmp = 1;
		while (tmp <= l)
			tmp = tmp * 10;
		ft_print_n_fd(l, tmp, fd);
	}
}
