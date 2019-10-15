/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:57:07 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:10:08 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char				*str;
	unsigned long int	i;
	unsigned long int	size;

	if (!s || !f)
		return (NULL);
	i = -1;
	size = 1;
	while (s[++i])
		size++;
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}
