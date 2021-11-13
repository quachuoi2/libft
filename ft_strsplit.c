/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:13:47 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/13 17:35:45 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
			words++;
		i++;
	}
	if (s[0] != c)
		words++;
	return (words);
}

typedef struct s_index
{
	int	i;
	int	j;
	int	k;
}				t_index;

char	**ft_strsplit(const char *s, char c)
{
	char	**arr;
	char	*buf;
	t_index	index;

	arr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	buf = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (arr == NULL || buf == NULL)
		return (NULL);
	index.i = 0;
	index.k = 0;
	while (index.i <= (int)ft_strlen(s))
	{
		index.j = 0;
		while ((s[index.i] != c) && s[index.i] != '\0')
			buf[index.j++] = s[index.i++];
		buf[index.j] = '\0';
		if (buf[0] != '\0')
			arr[index.k++] = ft_strdup(buf);
		index.i++;
	}
	free(buf);
	arr[index.k] = NULL;
	return (arr);
}
