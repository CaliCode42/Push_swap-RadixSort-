/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:59:40 by tcali             #+#    #+#             */
/*   Updated: 2025/03/26 18:45:48 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//Fct which returns the quantity of nb in the **split (stack) str.
int	get_stack_size(char **stack)
{
	int	size;

	size = 0;
	while (stack[size])
	{
		size++;
	}
	return (size);
}

//fct to fetch std input to a linked list of nb.
char	**parse_input(int ac, char **av)
{
	char	*input;
	char	**stack;

	if (ac < 2)
		stack = NULL;
	if (ac == 2)
	{
		stack = ft_split(av[1], ' ');
	}
	if (ac > 2)
	{
		input = stdin_to_str(ac, av);
		stack = ft_split(input, ' ');
	}
	return (stack);
}

//fct to initialize a list to NULL.
void	init_list(t_list *list, char c)
{
	if (!list)
		return ;
	list->stack = c;
	list->content.nb = 0;
	list->content.index = 0;
	list->next = NULL;
	list->prev = NULL;
	printf("init went good\n");
}

//fct to sort stack a.
void	ft_sort_stack(t_list **a)
{
	t_list	*b;

	b = NULL;
	if (!*a || !a)
		return ;
	if (!is_sorted(*a))
	{
		if (ft_lstsize(*a) <= 5)
			mini_sort(a, &b);
		else
			radix_sort(a, &b);
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	char	**stack;
	int		i;
	int		stack_size;

	stack = parse_input(ac, av);
	if (stack == NULL)
		return (ft_printf("Error\n"), 1);
	stack_size = get_stack_size(stack);
	if (!stack || check_stack_errors(stack, stack_size) == 0)
		return (ft_printf("Error\n"), 1);
	a = NULL;
	i = 0;
	split_to_nodes(&a, stack);
	identify_order(&a);
	while (stack[i])
		free(stack[i++]);
	free(stack);
	ft_sort_stack(&a);
	return (0);
}
