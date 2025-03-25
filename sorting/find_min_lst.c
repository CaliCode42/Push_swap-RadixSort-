/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:17:35 by tcali             #+#    #+#             */
/*   Updated: 2025/03/25 13:37:27 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

t_list	*find_min_lst(t_list **list)
{
	t_list	*min;
	t_list	*tmp;

	min = *list;
	tmp = *list;
	while (tmp)
	{
		if (tmp->content.nb < min->content.nb)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

t_list	*find_next_min(t_list **list, int nb)
{
	t_list	*next_min;
	t_list	*tmp;

	next_min = NULL;
	tmp = *list;
	while (tmp)
	{
		if (tmp->content.nb > nb
			&& (!next_min || tmp->content.nb < next_min->content.nb))
			next_min = tmp;
		tmp = tmp->next;
	}
	return (next_min);
}
