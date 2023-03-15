/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:28:27 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/15 15:45:16 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	n;

	x = 0;
	n = ft_strlen(needle);
	if (n == 0)
		return ((char *)haystack);
	while (x < len && haystack[x] != '\0')
	{
		i = 0;
		while (haystack[x + i] == needle[i] && x + i < len && needle[i] != '\0')
			i++;
		if (i == n)
			return ((char *)haystack + x);
		x++;
	}
	return (NULL);
}
