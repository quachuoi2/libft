/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:04:55 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/08 19:24:44 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i] == 0
		&& ((unsigned char *)str1)[i] != '\0'
			&& ((unsigned char *)str2)[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	if (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i] > 0)
		return (1);
	if (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i] < 0)
		return (-1);
	return (0);
}
