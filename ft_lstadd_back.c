/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:43:55 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/13 18:57:12 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (*alst == NULL)
	{
		*alst = new;
		(*new).next = NULL;
		return ;
	}
	while ((**alst).next != NULL)
		*alst = (**alst).next;
	(**alst).next = new;
	(*new).next = NULL;
}
