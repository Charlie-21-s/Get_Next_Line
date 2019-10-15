/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:50:44 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:14:47 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str2[i] != '\0') && (i < n))
	{
		str1[i] = str2[i];
		i++;
	}
	while (i < n)
	{
		str1[i] = '\0';
		i++;
	}
	return (str1);
}
