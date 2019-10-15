/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:40:50 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:19:19 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_itoa_str(char *str, int i, int n, int dec)
{
	int tmp;

	if (n < 0)
	{
		str[i++] = '-';
		n = n * -1;
	}
	tmp = 1;
	while (--dec)
		tmp = tmp * 10;
	dec = tmp;
	while (dec >= 1)
	{
		tmp = n;
		str[i] = tmp / dec + 48;
		n = n - (dec * (str[i] - 48));
		dec = dec / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*ft_min_int(int n)
{
	int		i;
	char	*str;

	str = (char*)malloc(12 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	i = 2;
	n = 147483648;
	return (ft_itoa_str(str, i, n, 9));
}

char		*ft_itoa(int n)
{
	int		i;
	int		dec;
	char	*str;

	if (n == -2147483648)
		return (ft_min_int(n));
	i = n;
	if (n < 0)
		i = -1 * i;
	dec = 1;
	while ((i = i / 10) >= 1)
		dec++;
	i = dec;
	if (n < 0)
		i++;
	str = (char*)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	return (ft_itoa_str(str, i, n, dec));
}
