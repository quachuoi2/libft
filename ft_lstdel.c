/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 02:18:07 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/14 18:39:15 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (del == NULL)
		return ;
	while (*alst != NULL)
	{
		del((**alst).content, (**alst).content_size);
		free(*alst);
		*alst = (**alst).next;
	}
}
