/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:20:45 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 14:00:43 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_strsize(char const *str)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (str[i++])
		size++;
	return (size);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	a;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strsize(s1) + ft_strsize(s2);
	if (!(str = (char *)malloc((a + 1) * sizeof(char))))
		return (NULL);
	a = 0;
	i = 0;
	while (s1[a])
	{
		str[i] = s1[a++];
		i++;
	}
	a = 0;
	while (s2[a])
	{
		str[i] = s2[a++];
		i++;
	}
	str[i] = '\0';
	return (str);
}
