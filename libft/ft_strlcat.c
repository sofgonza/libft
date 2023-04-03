/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:49:01 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/27 12:34:45 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	j;
	unsigned int	i;

	if (size == 0 && (!src || !dest))
		return (0);
	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	i = 0;
	j = 0;
	if (size <= dl)
		return (size + sl);
	if (size > 0)
	{
		while (dest[j])
			++j;
		while (j + i < (size - 1) && src[i] != '\0')
		{
			dest[j + i] = src[i];
			++i;
		}
		dest[j + i] = '\0';
	}
	return (sl + dl);
}
