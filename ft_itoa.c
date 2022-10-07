/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:38:59 by esalim            #+#    #+#             */
/*   Updated: 2022/10/06 22:30:26 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrlength(int nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
		length++;
	while (nbr)
	{
		nbr = nbr / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char		*dest;
	int			len;
	long int	nbr;

	nbr = n;
	len = nbrlength(nbr);
	dest = malloc(len + 1);
	if (!dest)
		return (0);
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr *= -1;
	}
	dest[len] = 0;
	if (nbr == 0)
		dest[0] = '0';
	while (nbr)
	{
		dest[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (dest);
}
