/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:43:43 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/20 12:56:53 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		len;

	x = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (ft_strchr(set, s1[x]) != NULL && s1[x])
		++x;
	while (ft_strchr(set, s1[len - 1]) != NULL && (len - 1))
		len--;
	if (len < x)
		len = x;
	else
		len = len - x;
	return (ft_substr(s1, x, len));
}
/*
int	main(void)
{
	printf("%s\n",ft_strtrim("ababababbbaabaholasababbababba", "ab"));
	return (0);
}
*/
