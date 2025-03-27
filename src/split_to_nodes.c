/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_to_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:09:27 by tcali             #+#    #+#             */
/*   Updated: 2025/03/27 10:09:52 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

//fetch number from split to new nodes in the linked list.
void	split_to_nodes(t_list **list, char **stack)
{
	t_list	*new_node;
	int		i;

	i = 0;
	new_node = NULL;
	while (stack[i])
	{
		new_node = create_add_node(list, stack[i], (i + 1), 'a');
		if (new_node == NULL)
			return ;
		i++;
	}
}
