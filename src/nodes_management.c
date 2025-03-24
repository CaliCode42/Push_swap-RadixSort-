/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:53:10 by tcali             #+#    #+#             */
/*   Updated: 2025/03/21 17:18:41 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//create new node and add it at the end of the linked list.
t_list	*create_add_node(t_list **list, char *number, int index, char c)
{
	t_list		*new_node;
	t_content	current;

	if (!list || !number)
		return (NULL);
	current.nb = ft_atoi(number);
	current.index = index;
	new_node = ft_lstnew(current);
	if (!new_node)
		return (NULL);
	new_node->stack = c;
	ft_lstadd_back(list, new_node);
	return (new_node);
}
