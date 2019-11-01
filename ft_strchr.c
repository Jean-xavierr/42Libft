/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:43:48 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/10 12:01:19 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			tmp = (char *)s + i;
			break ;
		}
		i++;
	}
	if (s[i] == (char)c)
		tmp = (char *)s + i;
	return (tmp);
}
