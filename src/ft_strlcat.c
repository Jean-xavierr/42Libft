/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:56:53 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/17 16:24:04 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t n;
	size_t dest_len;
	size_t src_len;
	size_t size_len;

	i = 0;
	n = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	size_len = dstsize;
	while (dst[n] != '\0' && dstsize)
	{
		n++;
		dstsize--;
	}
	if (dstsize == 0)
		return (src_len + size_len);
	while (src[i] != '\0' && dstsize > 1)
	{
		dst[n++] = src[i++];
		dstsize--;
	}
	dst[n] = '\0';
	return (src_len + dest_len);
}
