/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 07:40:07 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/07 02:01:25 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	b;

	b = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n == -2147483648)
	{
		b = 1;
		ft_putnbr_fd(214748364, fd);
		ft_putchar_fd('8', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (b != 1)
		ft_putchar_fd(n % 10 + '0', fd);
}
