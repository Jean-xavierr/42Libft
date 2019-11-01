/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:27:46 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/09 14:19:42 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	char		*dst;

	dst = (char *)malloc(size * count);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
