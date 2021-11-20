/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecora <ecora@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:17:11 by ecora             #+#    #+#             */
/*   Updated: 2021/11/11 18:32:38 by ecora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long	num;
	int				flag;
	char			*s;

	num = 0;
	flag = 0;
	s = (char *)str;
	
	while (*s == ' ' || *s == '\n' || *s == '\t' || \
	      *s == '\v' || *s == '\f' || *s == '\r')
		s++;
	if (*s == '-')
		flag = 1;
	if (*s == '-' || *s == '+')
		s++;
	while ((*s >= '0') && (*s <= '9'))
	{
		num = 10 * num + *s - '0';
		s++;
	}
	if (num - flag > 2147483647)
		return (0);
	if (flag == 1)
		return (-num);
	return (num);
}


   