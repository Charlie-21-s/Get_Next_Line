/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:16:07 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:12:35 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_atoi_fill(const char *str, size_t i, int a)
{
	unsigned long long	at;

	at = str[i] - 48;
	while (str[++i] >= '0' && str[i] <= '9' && at <= 9223372036854775807)
		at = at * 10 + (str[i] - 48);
	if (at > 9223372036854775807UL && a == 1)
		return (-1);
	else if (at > 9223372036854775808UL && a == -1)
		return (0);
	return ((int)at);
}

int			ft_atoi(const char *str)
{
	size_t		i;
	int			a;

	i = 0;
	a = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		a = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	return (a * ft_atoi_fill(str, i, a));
}
