/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:19:43 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:58:05 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 2;
	while (src[++i])
		size++;
	str = (char *)malloc((size) * sizeof(char));
	if (str)
	{
		i = -1;
		while (src[++i])
			str[i] = src[i];
		str[i] = '\0';
	}
	return (str);
}
