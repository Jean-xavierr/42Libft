/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:34:34 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/11 14:31:28 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*swap;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		swap = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = swap;
	}
	*lst = NULL;
}
