/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:16:53 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/15 15:00:53 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			**mem;

	mem = malloc (count * size);
	if (mem != NULL)
	{
		ft_bzero(mem, (size * count));
		return (mem);
	}
	return (NULL);
}
