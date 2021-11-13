/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:29:40 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/13 19:11:25 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s_n;
	int		i;

	i = 0;
	s_n = (char *)malloc(ft_strlen((char *)s));
	if (s_n == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		s_n[i] = f(s[i]);
		i++;
	}
	s_n[i] = '\0';
	return (s_n);
}
