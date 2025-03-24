/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:17:35 by tcali             #+#    #+#             */
/*   Updated: 2025/03/14 15:21:44 by tcali            ###   ########.fr       */
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
