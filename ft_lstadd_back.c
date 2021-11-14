/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qnguyen <qnguyen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 01:43:55 by qnguyen           #+#    #+#             */
/*   Updated: 2021/11/14 20:30:52 by qnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		temp = *alst;
		while ((*temp).next != NULL)
			temp = (*temp).next;
		(*temp).next = new;
	}
	(*new).next = NULL;
}
