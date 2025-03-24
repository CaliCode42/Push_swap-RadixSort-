/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:50:13 by tcali             #+#    #+#             */
/*   Updated: 2024/11/29 17:30:34 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Segmentation fault with null parameter, must give a valid string.*/
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	i;
	char	*copy;

	i = 0;
	copy = malloc (sizeof(char) * (ft_strlen(source) + 1));
	if (!copy)
		return (NULL);
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
