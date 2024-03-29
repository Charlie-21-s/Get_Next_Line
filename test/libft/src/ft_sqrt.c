/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:02:32 by talexia           #+#    #+#             */
/*   Updated: 2019/09/10 19:03:59 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (b < nb)
	{
		a++;
		b = a * a;
	}
	if (nb == 1)
		return (1);
	else if (b == nb)
		return (a);
	else
		return (0);
}
