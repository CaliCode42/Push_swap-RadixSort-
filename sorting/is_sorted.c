/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:41:58 by tcali             #+#    #+#             */
/*   Updated: 2025/03/14 15:08:13 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

//check if the list is sorted.
//Run through the list until last node and check if sorted in ascendant order.
int	is_sorted(t_list *list)
{
	while (list && list->next)
	{
		if (list->content.nb > list->next->content.nb)
			return (0);
		list = list->next;
	}
	return (1);
}

int	is_rev_sorted(t_list *list)
{
	while (list && list->next)
	{
		if (list->content.nb < list->next->content.nb)
			return (0);
		list = list->next;
	}
	return (1);
}
