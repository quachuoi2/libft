/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:39:42 by qnguyen           #+#    #+#             */
/*   Updated: 2022/02/06 23:33:07 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putfloat(double lift, int i)
{
	ft_putnbr((int)lift);
	ft_putchar('.');
	lift -= (int)lift;
	while (i > 0)
	{
		lift *= 10;
		i--;
	}
	ft_putnbr((int)lift);
}
