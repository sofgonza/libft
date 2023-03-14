/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:49:01 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/07 12:49:57 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	unsigned int	x;
	unsigned int	i;

	dl = ft_len(dest);
	sl = ft_len(src);
	i = 0;
	x = 0;
	if (size <= dl)
		return (size + sl);
	if (size > 0)
	{
		while (dest[x])
			++x;
		while (x < (size - 1) && src[i] != '\0')
		{
			dest[x] = src[i];
			++x;
			++i;
		}
		dest[x] = '\0';
	}
	return (sl + dl);
}
