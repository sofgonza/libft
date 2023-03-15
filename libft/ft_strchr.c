/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:07:55 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/15 15:39:12 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		++x;
	}
	if ((char)c == '\0')
		return ((char *)&s[x]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strchr("teste", 1024));
	return (0);
}
*/
