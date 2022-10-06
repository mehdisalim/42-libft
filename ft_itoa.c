/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:38:59 by esalim            #+#    #+#             */
/*   Updated: 2022/10/06 19:45:43 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	nbrlength(int nbr, int *size)
{
	int	length;

	length = 1;
	while (nbr)
	{
		nbr = nbr / 10;
		*size = *size + 1;
		length *= 10;
	}
	return (length / 10);
}

char	*ft_itoa(int	nbr)
{
	char	*dest;
	int		size;
	int		len;
	int		sign;

	sign = 1;
	size = 0;
	if (nbr < 0)
	{
		sign *= -1;
		nbr *= -1;
	}
	len = nbrlength(nbr, &size);
	printf("%d  -----  %d#\n", len, size);
	dest = malloc(size + 1);
	while (size--)
	{
		*dest = (nbr / len) + '0';
		printf("%c#\n", *dest);
		nbr %= len;
		len /= 10;
		dest++;
	}
	*dest = 0;
	return (dest);
}
