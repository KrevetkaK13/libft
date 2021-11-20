/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecora <ecora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:42:50 by ecora             #+#    #+#             */
/*   Updated: 2021/11/10 19:56:38 by ecora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s) - 1;
	str = (char *)s;
	while (len)
	{
		if (*(str + len) == c)
			return (str + len);
		len--;
	}
	return (NULL);
}
