/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:52:58 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:59:31 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *u))
{
	unsigned int	i;
	char			*a;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		a = &s[i];
		f(i, a);
		i++;
	}
}
