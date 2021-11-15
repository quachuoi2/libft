/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:40 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/15 19:26:39 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_n;
	int		i;

	if (f == NULL)
		return (NULL);
	i = 0;
	s_n = (char *)malloc(ft_strlen((char *)s) + 1);
	if (s_n == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s_n[i] = f(i, s[i]);
		i++;
	}
	s_n[i] = '\0';
	return (s_n);
}
