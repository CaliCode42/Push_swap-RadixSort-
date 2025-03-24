/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:43:33 by tcali             #+#    #+#             */
/*   Updated: 2024/11/28 14:18:42 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int ft_lstsize(t_list *lst);
lst: The beginning of the list.


Counts the number of nodes in a list.
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
