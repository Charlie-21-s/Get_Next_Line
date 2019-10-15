/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 20:02:41 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:18:53 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_sum_line(char *str, char c)
{
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	while (str[i])
		if (str[i] != c)
		{
			sum++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	return (sum);
}

static size_t	ft_len_line(char *str, char c, size_t i)
{
	size_t	len;

	len = 2;
	while (str[++i] && str[i] != c)
		len++;
	return (len);
}

static char		**ft_fill_split(char **split, char *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = 0;
	while (str[i])
		if (str[i] != c)
		{
			split[l] = (char*)malloc(ft_len_line(str, c, i) * sizeof(char));
			if (!split[l])
				return (NULL);
			j = 0;
			while (str[i] != c && str[i])
			{
				split[l][j] = str[i++];
				j++;
			}
			split[l][j] = '\0';
			l++;
		}
		else
			i++;
	split[l] = NULL;
	return (split);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	*str;
	char	**split;

	if (!s)
		return (NULL);
	str = (char*)s;
	i = ft_sum_line(str, c);
	split = (char**)malloc((i + 1) * sizeof(char*));
	if (!split)
		return (NULL);
	return (ft_fill_split(split, str, c));
}
