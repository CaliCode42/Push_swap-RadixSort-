/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:51:41 by tcali             #+#    #+#             */
/*   Updated: 2025/03/24 17:07:29 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//fct to print my nodes, using the path of the linked list.
void	print_nodes_linkedlst(t_list *head)
{
	if (!head)
	{
		printf("List is empty.\n");
		return ;
	}
	printf("Forward list:\n");
	while (head)
	{
		printf("node (%d) : [%d] | order: %d ---> ", head->content.index,
			head->content.nb, head->content.order);
		head = head->next;
	}
	printf("NULL\n");
}

//fct to call in my main in order to test my other fcts.
void	ft_testing(t_list **a)
{
	if (!*a || !a)
		return ;
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	ft_sort_stack(a);
	printf("________________\n");
}

//just a check fct, to print my array of int
/*void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size) 
	{
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("]\n");
}*/

//tester for my push fcts
/*
void	ft_testing(t_list **a)
{
	t_list	*b;

	b = NULL;
	init_list(b);
	if (!*a || !a)
		return ;
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);
}
*/