/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:18:28 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:58:51 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t num)
{
	char	*str;
	char	*str_copy;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	str = (char*)s1;
	str_copy = (char*)s2;
	i = 0;
	while (i < num)
	{
		str[i] = str_copy[i];
		i++;
	}
	return (s1);
}
