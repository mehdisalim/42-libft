/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:32:16 by esalim            #+#    #+#             */
/*   Updated: 2022/10/04 15:05:19 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	char	*ends;
	char	*endd;

	if (dest == src || !len)
		return (dest);
	ends = (char *)src + (len - 1);
	endd = (char *)dest + (len - 1);
	if ((char *)dest < (char *)src)
		return (ft_memcpy(dest, src, len));
	else
	{
		while (len--)
			*endd-- = *ends--;
	}
	return (dest);
}
