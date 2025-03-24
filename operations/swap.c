/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:10:32 by tcali             #+#    #+#             */
/*   Updated: 2025/03/21 16:36:50 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>
/*
typedef struct s_list
{
	t_content		content;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;
*/

static void	switch_index(t_list *list1, t_list *list2)
{
	int	tmp;

	tmp = list1->content.index;
	list1->content.index = list2->content.index;
	list2->content.index = tmp;
}

static void	swap_nodes(t_list **list)
{
	t_list	*first_node;
	t_list	*second_node;

	if (!*list || !list || !(*list)->next)
		return ;
	first_node = *list;
	second_node = (*list)->next;
	first_node->next = second_node->next;
	if (second_node->next)
		second_node->next->prev = first_node;
	second_node->prev = NULL;
	second_node->next = first_node;
	first_node->prev = second_node;
	*list = second_node;
	switch_index(*list, (*list)->next);
}

void	swap(t_list **list)
{
	swap_nodes(list);
	if ((*list)->stack == 'a')
		write(1, "sa\n", 3);
	if ((*list)->stack == 'b')
		write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b)
{
	swap_nodes(a);
	swap_nodes(b);
	write(1, "ss\n", 3);
}

/*
void	swap_a(t_list **a)
{
	swap_nodes(a);
	write(1, "sa\n", 3);
}

void	swap_b(t_list **b)
{
	swap_nodes(b);
	write(1, "sb\n", 3);
}
*/