/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:22:18 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:20:04 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *str, const char *s)
{
	size_t	a;
	size_t	b;

	if (s[0] == '\0')
		return ((char*)str);
	a = 0;
	while (str[a])
	{
		b = 0;
		while (s[b] != '\0' && s[b] == str[a])
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
