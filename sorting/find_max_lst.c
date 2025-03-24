/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:22:16 by tcali             #+#    #+#             */
/*   Updated: 2025/03/14 15:24:31 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

//Maybe it could be usefull to save min and max directly in struct?
t_list	*find_max_lst(t_list **list)
{
	t_list	*max;
	t_list	*tmp;

	max = *list;
	tmp = *list;
	while (tmp)
	{
		if (tmp->content.nb > max->content.nb)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}
