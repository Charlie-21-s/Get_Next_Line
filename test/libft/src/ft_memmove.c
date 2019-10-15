/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:21:37 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 14:00:23 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (!s1 && !s2)
		return (NULL);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	if (str2 > str1)
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	else
		while (++i <= n)
			str1[n - i] = str2[n - i];
	return (str1);
}
