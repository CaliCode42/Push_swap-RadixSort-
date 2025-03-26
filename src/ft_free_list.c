/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:53:20 by tcali             #+#    #+#             */
/*   Updated: 2025/03/26 19:13:22 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdlib.h>

void	ft_free_list(t_list **list)
{
	t_list	*tmp;

	if (!list || !*list)
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}
