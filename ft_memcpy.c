/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:18:23 by esalim            #+#    #+#             */
/*   Updated: 2022/09/29 16:26:57 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t len)
{
	size_t	i;

	i = -1;
	while (*(char *)src && ++i < len)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
