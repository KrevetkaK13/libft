/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecora <ecora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:09:14 by ecora             #+#    #+#             */
/*   Updated: 2021/11/10 16:38:40 by ecora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < len)
	{
		if (d < s)
			*(d + i) = *(s + i);
		else
			*(d + len - 1 - i) = *(s + len - 1 - i);
		i++;
	}
	return (dest);
}
