/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:16:55 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/27 15:22:22 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	x;
	size_t	slen;

	if (!s)
		return (NULL);
	sub = NULL;
	x = 0;
	slen = ft_strlen(s);
	if (len == 0 || slen == 0 || start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (x < len && (start + x) < slen)
	{
		sub[x] = s[start + x];
		++x;
	}
	sub[x] = '\0';
	return (sub);
}
