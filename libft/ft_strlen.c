/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:17:56 by sofgonza          #+#    #+#             */
/*   Updated: 2023/04/03 18:02:47 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_strlen("ihrgab"));
	return (0);
}
*/
