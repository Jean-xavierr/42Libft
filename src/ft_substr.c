/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:30:45 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/08 09:55:58 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(sizeof(dst) * (len + 1));
	if (dst == NULL)
		return (NULL);
	if (start > ft_strlen(s) || !s)
	{
		dst[i] = '\0';
		return (dst);
	}
	while (len > 0)
	{
		dst[i++] = s[start++];
		len--;
	}
	dst[i] = '\0';
	return (dst);
}
