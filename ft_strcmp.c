/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:04:55 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/08 18:58:19 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	i;

	i = 0;
	while (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i] == 0
		&& ((unsigned char *)str1)[i] != '\0'
			&& ((unsigned char *)str2)[i] != '\0')
		i++;
	if (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i] > 0)
		return (1);
	if (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i] < 0)
		return (-1);
	return (0);
}
