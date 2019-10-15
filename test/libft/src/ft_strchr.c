/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:46:54 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:17:37 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *str, int a)
{
	char	b;
	size_t	i;

	i = 0;
	b = (char)a;
	while (str[i])
	{
		if (str[i] == b)
			return ((char*)&str[i]);
		i++;
	}
	if (b == '\0')
		return ((char*)&str[i]);
	else
		return (NULL);
}
