/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:08:11 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/09 01:19:27 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	return (c);
}