/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:45:52 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/15 15:11:00 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		len;
	int		x;

	len = ft_strlen(s1);
	p = malloc (sizeof (const char) * (len + 1));
	x = 0;
	if (p != NULL)
	{
		while (x <= len)
		{
			p[x] = s1[x];
			++x;
		}
		return (p);
	}
	return (NULL);
}
