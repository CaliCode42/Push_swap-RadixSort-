/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:34:13 by tcali             #+#    #+#             */
/*   Updated: 2024/11/25 12:41:37 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	size_t	*p;

	p = malloc (elementSize * elementCount);
	if (p == NULL)
		return (0);
	ft_bzero(p, elementCount * elementSize);
	return (p);
}
