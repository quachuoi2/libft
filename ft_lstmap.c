/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 02:27:06 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/14 20:44:13 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *map;

	if (f == NULL)
		return (NULL);
	map = NULL;
	while (lst != NULL)
	{
		ft_lstadd_back(&map, f(lst));
		lst = (*lst).next;
	}
	return (map);
}
