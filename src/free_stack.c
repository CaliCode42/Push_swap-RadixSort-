/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:01:12 by tcali             #+#    #+#             */
/*   Updated: 2025/03/26 19:03:00 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdlib.h>

void	free_stack(char **stack)
{
	int	i;

	i = 0;
	while (stack[i])
		free(stack[i++]);
	free(stack);
}