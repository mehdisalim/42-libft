/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:32:16 by esalim            #+#    #+#             */
/*   Updated: 2022/09/30 19:48:06 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	size_t	i;

	i = -1;
	while (((char *)src)[i] && ++i < len)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
