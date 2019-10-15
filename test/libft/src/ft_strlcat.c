/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:45:46 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 14:01:30 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *str1, const char *str2, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	size;

	a = 0;
	while (str1[a] && a < n)
		a++;
	size = a + ft_strlen(str2);
	b = 0;
	while (str2[b] && (a + 1 < n))
	{
		str1[a] = str2[b++];
		a++;
	}
	if (a < n)
		str1[a] = '\0';
	return (size);
}
