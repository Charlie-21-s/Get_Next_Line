/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:20:47 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:16:52 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (str1[a])
		a++;
	b = 0;
	while (str2[b])
	{
		str1[a] = str2[b];
		a++;
		b++;
	}
	str1[a] = '\0';
	return (str1);
}
