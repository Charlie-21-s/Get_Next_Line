/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 16:34:14 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 13:16:25 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if (size + 1 <= size)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	return (str);
}
