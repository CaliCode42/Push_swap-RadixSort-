/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:57:32 by tcali             #+#    #+#             */
/*   Updated: 2025/03/21 17:05:11 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

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

//Convert standard input to str.
char	*stdin_to_str(int arg_nb, char **args)
{
	int		i;
	char	*tmp;
	char	*str;

	i = 1;
	tmp = NULL;
	str = ft_strdup("");
	while (i < arg_nb)
	{
		tmp = ft_strjoin(str, args[i]);
		free(str);
		str = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	return (str);
}
