/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 05:48:03 by qnguyen           #+#    #+#             */
/*   Updated: 2022/02/09 13:11:47 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_putnbr(long long n)
{
	if (n == -9223372036854775807)
	{
		ft_putstr("-9223372036854775807");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
} */

int	ft_putnbr(long long n)
{
	int	i;
	int	i2;

	if (n < 0)
		write(1, "-", 1);
	i = ft_diglen(n);
	i2 = i;
	while (i-- > 0)
		ft_putchar((n / ft_pow(10, i) % 10) * (-(n < 0) | 0x1) + '0');
	return (i2);
}
