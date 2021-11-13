/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:22:05 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/13 20:05:27 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t	i;
	char	*buf;

	buf = (char *)malloc(sizeof(((char *)src)[0]) * len);
	if (buf == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buf[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = buf[i];
		i++;
	}
	free(buf);
	return (dst);
}
