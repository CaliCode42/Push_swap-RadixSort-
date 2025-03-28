/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:49:47 by tcali             #+#    #+#             */
/*   Updated: 2025/03/26 00:04:08 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

void	radix_sort(t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	size;
	int	bit_max;

	bit_max = find_max_bits(*a);
	i = 0;
	while (i < bit_max)
	{
		size = ft_lstsize(*a);
		j = 0;
		while (j < size)
		{
			if (((*a)->content.order >> i) & 1)
				rotate(a);
			else
				push_b(a, b);
			j++;
		}
		while (*b)
			push_a(b, a);
		i++;
	}
}
