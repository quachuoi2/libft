/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:10:42 by qnguyen           #+#    #+#             */
/*   Updated: 2021/10/31 22:10:42 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	check_negative(char c)
{
	if (c == '-')
		return ('n');
	else if (c == '+')
		return ('p');
	else
		return ('z');
}

int	ft_atoi(char *str)
{
	int				i;
	long long		sum;
	char			np;

	i = 0;
	while (ft_is_space(str[i]) == 1)
		i++;
	np = check_negative(str[i]);
	if (np == 'p' || np == 'n')
		i++;
	sum = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			sum = (sum * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	if (np == 'n')
		return (sum * -1);
	else
		return (sum);
}
