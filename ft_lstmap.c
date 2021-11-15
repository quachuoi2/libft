/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 02:27:06 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/14 21:12:15 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map;
	t_list	*new;

	if (f == NULL)
		return (NULL);
	map = NULL;
	while (lst != NULL)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (new == NULL)
			return (NULL);
		(*new).content = (void *)malloc(sizeof((*lst).content));
		ft_strcpy((char *)(*new).content, (const char *)(*lst).content);
		(*new).content_size = (*lst).content_size;
		ft_lstadd_back(&map, f(new));
		lst = (*lst).next;
	}
	return (map);
}
