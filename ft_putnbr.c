/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 05:48:03 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/07 02:01:28 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int				b;

	b = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n == -2147483648)
	{
		b = 1;
		ft_putnbr(214748364);
		ft_putchar('8');
	}
	if (n > 9)
		ft_putnbr(n / 10);
	if (b != 1)
		ft_putchar(n % 10 + '0');
}