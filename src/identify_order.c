/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:20:42 by tcali             #+#    #+#             */
/*   Updated: 2025/03/25 23:59:52 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//fct which classify my nodes by ascending order of their respective nb.
//list->content.order represents the index of the nb in ascending order.
void	identify_order(t_list **list)
{
	t_list	*tmp;
	t_list	*min;
	int		order;
	int		size;

	order = 0;
	min = find_min_lst(list);
	if (!min)
		return ;
	size = ft_lstsize(*list);
	min->content.order = order++;
	tmp = min;
	while (order < size)
	{
		tmp = find_next_min(list, tmp->content.nb);
		if (!tmp)
			return ;
		tmp->content.order = order++;
	}
}
