/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:57:33 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/16 13:05:23 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*str;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = (char *) malloc (sizeof(char) * (lens1 + lens2 + 1));
	if (str != NULL)
	{
		ft_strlcpy(str, s1, (lens1 + 1));
		ft_strlcat(str, s2, (lens1 + lens2 + 1));
		return (str);
	}
	return (NULL);
}
