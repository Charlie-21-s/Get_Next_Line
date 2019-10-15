/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:11:00 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:18:07 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *str, int a)
{
	char		b;
	long int	i;

	i = 0;
	b = (char)a;
	while (str[i])
		i++;
	while (i > -1)
	{
		if (str[i] == b)
			return ((char*)&str[i]);
		i--;
	}
	return (NULL);
}
