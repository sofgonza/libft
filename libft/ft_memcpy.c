/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:27:06 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/15 15:37:40 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*s;
	char			*d;
	unsigned int	x;

	s = src;
	d = dest;
	x = 0;
	if (dest == src)
		return (dest);
	while (x < n)
	{
		d[x] = s[x];
		++x;
	}
	return (dest);
}
