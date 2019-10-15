/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:55:13 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:13:04 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_print_n(long int l, long int tmp)
{
	char	s;
	int		t;

	while (tmp >= 10)
	{
		tmp = tmp / 10;
		t = l / tmp;
		s = t + 48;
		ft_putchar(s);
		l = l - ((s - 48) * tmp);
	}
}

void		ft_putnbr(int n)
{
	long int	tmp;
	long int	l;

	l = n;
	if (l == 0)
		ft_putchar('0');
	else
	{
		if (l < 0)
		{
			ft_putchar('-');
			l = -1 * l;
		}
		tmp = 1;
		while (tmp <= l)
			tmp = tmp * 10;
		ft_print_n(l, tmp);
	}
}
