/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:27:53 by qnguyen           #+#    #+#             */
/*   Updated: 2022/01/29 14:42:53 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	hex_digit(long long v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('a' + v - 10);
}

void	ft_d2h(long long n)
{
	if (n == 0)
		return ;
	ft_d2h(n / 16);
	ft_putchar(hex_digit(n % 16));
}

/* void	ft_hexprint(void *pointer)
{
	char		bool;
	int			dig_amnt;
	intptr_t	p;

	p = (intptr_t)pointer;
	dig_amnt = (sizeof(p) << 3) - 4;
	bool = 0;
	write(1, "0x", 2);
	while (dig_amnt >= 0)
	{
		if (!bool && hex_digit((p >> dig_amnt) & 0b1111) != '0')
			bool = 1;
		if (bool)
			ft_putchar(hex_digit((p >> dig_amnt) & 0b1111));
		dig_amnt -= 4;
	}
}

void	ft_hexprint(void *pointer)
{
	char		bool;
	int			dig_amnt;
	intptr_t	p;

	p = (intptr_t)pointer;
	dig_amnt = 15;
	bool = 0;
	write(1, "0x", 2);
	while (dig_amnt >= 0)
	{
		if (!bool && hex_digit((p / ft_pow(16, dig_amnt)) % 16) != '0')
			bool = 1;
		if (bool)
			ft_putchar(hex_digit(p / ft_pow(16, dig_amnt) % 16));
		dig_amnt--;
	}
} */
