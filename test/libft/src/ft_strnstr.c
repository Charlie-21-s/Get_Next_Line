/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:51:25 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:17:13 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *str, const char *s, size_t n)
{
	size_t	a;
	size_t	b;

	if (s[0] == '\0')
		return ((char*)str);
	a = 0;
	while (str[a] && a < n)
	{
		b = 0;
		while (s[b] != '\0' && s[b] == str[a] && a < n)
		{
			a++;
			b++;
		}
		if (s[b] == '\0')
			return ((char*)&str[a - b]);
		a = a - b + 1;
	}
	return (NULL);
}
