/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:28:54 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:59:16 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *u))
{
	int		i;
	char	*a;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		a = &s[i];
		f(a);
		i++;
	}
}
