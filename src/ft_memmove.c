/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:08:10 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/14 10:42:42 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr_dst;
	unsigned char		*ptr_src;

	i = 0;
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (!ptr_dst && !ptr_src)
		return (NULL);
	if (ptr_dst > ptr_src)
		while (i < len)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	return (ptr_dst);
}
