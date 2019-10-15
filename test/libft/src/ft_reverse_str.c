/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:33:34 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 14:04:55 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_reverse_str(char *str)
{
	size_t	i;
	size_t	j;
	char	a;

	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i != j)
	{
		a = str[i];
		str[i] = str[j];
		str[j] = a;
		i++;
		j--;
	}
	return (str);
}
