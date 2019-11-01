/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:20:50 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/10 12:02:10 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			tmp = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		tmp = (char *)s + i;
	return (tmp);
}
