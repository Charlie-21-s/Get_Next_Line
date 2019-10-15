/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:49:20 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:57:43 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	size_t	i;
	char	*s;
	char	a;

	a = (char)c;
	s = (char*)str;
	i = 0;
	while (i < num)
	{
		if (s[i] == a)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
