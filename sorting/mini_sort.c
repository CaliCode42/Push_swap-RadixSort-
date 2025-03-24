/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:38:46 by tcali             #+#    #+#             */
/*   Updated: 2025/03/24 14:25:47 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//Micro sort if only 2 nodes in stack a (invert if not sorted).
void	micro_sort(t_list **list)
{
	t_list	*min;

	min = find_min_lst(list);
	if (min->content.index == 1)
		return ;
	rotate(list);
}

//Must call this fct only if size of list = 3 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_three(t_list **list)
{
	t_list	*min;
	t_list	*max;

	min = find_min_lst(list);
	max = find_max_lst(list);
	if (max->content.index == 2 && min->content.index == 3)
	{
		reverse_rotate(list);
		return ;
	}
	if (max->content.index == 1 && min->content.index == 2)
	{
		rotate(list);
		return ;
	}
	if (min->content.index == 1 && max->content.index == 2)
		reverse_rotate(list);
	if (max->content.index == 1 && min->content.index == 3)
		rotate(list);
	swap(list);
}

//Mini sort if only 4 nodes in stack a (2 + 2 ou 3 + 1 ??)
//Must call this fct only if size of list = 4 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_four(t_list **src, t_list **dst)
{
	t_list	*min;
	t_list	*max;
	int		is_nb_max_pushed;

	min = find_min_lst(src);
	max = find_max_lst(src);
	is_nb_max_pushed = 0;
	while (min->content.index != 1 && max->content.index != 1)
		rotate(src);
	if (max->content.index == 1)
		is_nb_max_pushed = 1;
	push(src, dst);
	sort_three(src);
	push(dst, src);
	if (is_nb_max_pushed == 1)
		rotate(src);
}

//Mini sort if only 5 nodes in stack a
//Must call this fct only if size of list = 5 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_five(t_list **src, t_list **dst)
{
	t_list	*min;
	t_list	*max;
	int		is_nb_max_pushed;

	min = find_min_lst(src);
	max = find_max_lst(src);
	is_nb_max_pushed = 0;
	while (min->content.index != 1 && max->content.index != 1)
		rotate(src);
	if (max->content.index == 1)
		is_nb_max_pushed = 1;
	push(src, dst);
	sort_four(src, dst);
	push(dst, src);
	if (is_nb_max_pushed == 1)
		rotate(src);
}

//fct to choose which mini sort to do depending on size of list.
void	mini_sort(t_list **src, t_list **dst)
{
	int	list_size;

	printf("mini_sort\n");
	printf("current stack : %c\n", (*src)->stack);
	list_size = ft_lstsize(*src);
	if (list_size < 2)
		return ;
	if (list_size == 2)
		micro_sort(src);
	if (list_size == 3)
		sort_three(src);
	if (list_size == 4)
		sort_four(src, dst);
	if (list_size == 5)
		sort_five(src, dst);
}
