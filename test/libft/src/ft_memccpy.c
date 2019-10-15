/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:48:14 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:56:29 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int b, size_t num)
{
	char	*str;
	char	*str_copy;
	size_t	i;
	char	a;

	str = (char*)s1;
	str_copy = (char*)s2;
	a = (char)b;
	i = 0;
	while (i < num)
	{
		str[i] = str_copy[i];
		i++;
		if (str_copy[i - 1] == a)
			return (&s1[i]);
	}
	return (NULL);
}
