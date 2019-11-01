/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:42:49 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/16 13:23:44 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*tmp;
	t_list	*begin;

	if (!lst)
		return (0);
	tmp = ft_lstnew(f(lst->content));
	begin = tmp;
	while (lst->next != NULL)
	{
		lst = lst->next;
		tmp = ft_lstnew(f(lst->content));
		tmp = tmp->next;
	}
	return (begin);
}
