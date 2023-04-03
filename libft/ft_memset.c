/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:20:43 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/27 12:32:08 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*dst;
	unsigned int	x;

	dst = b;
	x = 0;
	while (x < len)
	{
		dst[x] = (unsigned char)c;
		++x;
	}
	return (b);
}
/*
#include <stdio.h>

int main(void)
{
	char	src[] = "3422224";
    ft_memset(src, 38, 3);
	printf("%s", src);
	return (0);
}
*/
