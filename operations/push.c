/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:43:39 by tcali             #+#    #+#             */
/*   Updated: 2025/03/26 00:03:49 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

void	update_index(t_list *list)
{
	int	index;

	index = 1;
	while (list)
	{
		list->content.index = index;
		list = list->next;
		index++;
	}
}

static void	push_first_node(t_list **src, t_list **dst, char src_stack)
{
	t_list	*first_node_src;
	char	dst_stack;

	if (!src || !*src)
		return ;
	dst_stack = 'a';
	if (src_stack == 'a')
		dst_stack = 'b';
	first_node_src = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	first_node_src->next = *dst;
	first_node_src->stack = dst_stack;
	if (*dst)
	{
		(*dst)->prev = first_node_src;
	}
	*dst = first_node_src;
	update_index(*src);
	update_index(*dst);
	if (dst_stack == 'a')
		write(1, "pa\n", 3);
	if (dst_stack == 'b')
		write(1, "pb\n", 3);
}

//Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.
void	push_a(t_list **src, t_list **dst)
{
	if (!src || !*src)
		return ;
	push_first_node(src, dst, (*src)->stack);
}

//Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	push_b(t_list **src, t_list **dst)
{
	if (!src || !*src)
		return ;
	push_first_node(src, dst, (*src)->stack);
}

//fct to call push even if I don't know on which stack I am.
void	push(t_list **src, t_list **dst)
{
	if (!src || !*src)
		return ;
	if ((*src)->stack == 'a')
		push_b(src, dst);
	else if ((*src)->stack == 'b')
		push_a(src, dst);
}
