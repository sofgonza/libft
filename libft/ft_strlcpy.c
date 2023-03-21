/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:25:14 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/16 13:00:20 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	x;
	unsigned int	src_size;

	x = 0;
	src_size = ft_strlen(src);
	if (size != 0)
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			++x;
		}
		dest[x] = '\0';
	}
	return (src_size);
}
