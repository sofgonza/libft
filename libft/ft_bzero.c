/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:24:27 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/13 12:27:51 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	char			*dst;
	unsigned int	x;

	dst = s;
	x = 0;
	while (x < n)
	{
		dst[x] = '\0';
		++x;
	}
}
/*
#include <stdio.h>

int main(void)
{
	char	src[] = "3422224";
    ft_bzero(src, 3);
	printf("%s", src);
	return (0);
}
*/
