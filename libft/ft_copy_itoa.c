/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofgonza <sofgonza@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:45:58 by sofgonza          #+#    #+#             */
/*   Updated: 2023/03/21 12:46:00 by sofgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

int	digit_c(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while(n && ++len)
		n = n / 10;
//	if (n == -2147483648)
//		len = 11;
//	if (n <= 0)
//	{
//		n = n * -1;
//		len++;
//	}
//	while (n > 0)
//	{
//		n = n / 10;
//		len++;
//	}
//	printf("%d\n", len);
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		t;

	len = digit_c(n);
	t = 0;
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
		len = 11;
//	if (n < 0)
//	{
//		if (n == -2147483648)
//		{
//			n = n / -10;
//			str[--len] = '8';
//		}
//		else
//			n *= -1;
//		t = 1;
//		str[0] = '-';
//	}
	while (n)
	{
		if (n > 0)
			str[--len] = (n % 10) + 48;
		else
			str[--len] = (n % 10 * -1) + 48;
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	i;

	i = -2147483648;
	printf("%s\n", ft_itoa(i));
	return (0);
}*/
