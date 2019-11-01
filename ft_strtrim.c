/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:05:58 by jereligi          #+#    #+#             */
/*   Updated: 2019/10/16 10:50:05 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_start(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (ft_isset(s1[i], set))
		i++;
	return (i);
}

int		ft_check_end(char const *s1, char const *set)
{
	int i;
	int n;

	n = 0;
	i = ft_strlen(s1);
	i--;
	while (ft_isset(s1[i], set))
	{
		i--;
		n++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		n;
	size_t		size;
	char		*tmp;

	size = ft_strlen(s1);
	if (size == 0)
		return (0);
	n = ft_check_start(s1, set);
	if (n == size)
	{
		tmp = ft_strdup("");
		return (tmp);
	}
	size = size - n - ft_check_end(s1, set);
	if (!(tmp = (char*)malloc(sizeof(char) * size + 1)))
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[i] = s1[n + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
