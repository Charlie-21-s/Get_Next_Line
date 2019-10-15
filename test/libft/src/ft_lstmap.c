/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talexia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:30:32 by talexia           #+#    #+#             */
/*   Updated: 2019/10/15 14:04:00 by talexia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	first = (*f)(lst);
	lst = lst->next;
	while (lst)
	{
		new = (*f)(lst);
		ft_lstaddback(first, new);
		lst = lst->next;
	}
	return (first);
}
