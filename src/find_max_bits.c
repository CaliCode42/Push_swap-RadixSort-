/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:48:24 by tcali             #+#    #+#             */
/*   Updated: 2025/03/24 16:59:50 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//fct to find the nb of bits of the index (list->content.order)
//of the biggest nb.
//Because radix sorts the nb by their representation in bits.
int	find_max_bits(t_list *list)
{
	int	max;
	int	bits;

	max = 0;
	while (list)
	{
		if (list->content.index > max)
			max = list->content.index;
		list = list->next;
	}
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
