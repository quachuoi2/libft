/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:49:29 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/13 16:18:38 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (buf == NULL)
		return (NULL);
	return (ft_strcpy(buf, src));
}
