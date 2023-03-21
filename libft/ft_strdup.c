/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:45:52 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/15 18:23:33 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		x;

	len = ft_strlen(s1);
	dup = malloc (sizeof (const char) * (len + 1));
	x = 0;
	if (dup != NULL)
	{
		while (x <= len)
		{
			dup[x] = s1[x];
			++x;
		}
		return (dup);
	}
	return (NULL);
}
