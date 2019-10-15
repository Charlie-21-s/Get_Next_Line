/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:46:34 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:57:14 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_cutspaces(char const *s)
{
	long int	i;

	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	return (i);
}

static int		ft_cutspend(char const *s)
{
	long int	i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i != 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i--;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	long int	i;
	long int	start;
	long int	a;
	char		*str;

	if (!s)
		return (NULL);
	start = ft_cutspaces(s);
	if (s[start] == '\0')
	{
		str = (char *)malloc(1 * sizeof(char));
		str[0] = '\0';
	}
	else
	{
		i = ft_cutspend(s);
		str = (char *)malloc((i - start + 2) * sizeof(char));
		if (str == NULL)
			return (NULL);
		a = -1;
		while (start <= i)
			str[++a] = s[start++];
		str[++a] = '\0';
	}
	return (str);
}
