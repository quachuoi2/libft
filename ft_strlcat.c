/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 00:34:15 by qnguyen           #+#    #+#             */
/*   Updated: 2021/10/30 00:34:15 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	int		i;
	int		l_d;
	int		l_s;

	i = 0;
	l_d = ft_strlen(dest);
	l_s = ft_strlen(src);
	if ((int)size <= l_d)
		return (l_s + (int) size);
	while (i < (int)size - l_d - 1 && src[i] != '\0')
	{
		dest[l_d + i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	else
		dest[size] = '\0';
	return (l_d + l_s);
}
