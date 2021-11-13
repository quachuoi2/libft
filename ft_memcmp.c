/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:16:10 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/08 18:51:32 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] > 0)
			return (1);
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i] < 0)
			return (-1);
		i++;
	}
	return (0);
}
