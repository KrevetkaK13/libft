/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecora <ecora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:08:16 by ecora             #+#    #+#             */
/*   Updated: 2021/11/11 18:05:24 by ecora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	l;

	h = (char *)haystack;
	n = (char *)needle;
	l = ft_strlen(needle);
	if (l == 0)
		return (h);
	while (*h && (len - l + 1 > 0))
	{
		if (ft_memcmp(h, n, l) == 0)
			return (h);
		len--;
		h++;
	}
	return (NULL);
}