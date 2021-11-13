/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 05:48:16 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/11 04:27:53 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n = -n;
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		c;

	c = count_digit(n);
	s = (char *)malloc(sizeof(char) * (c + 2));
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(s, "-2147483648"));
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
		c++;
	}
	s[c--] = '\0';
	while (n / 10 > 0)
	{
		s[c--] = (n % 10) + '0';
		n = n / 10;
	}
	s[c] = n + '0';
	return (s);
}
