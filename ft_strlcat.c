/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:08 by esalim            #+#    #+#             */
/*   Updated: 2022/09/30 19:56:09 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	length;

	j = 0;
	i = 0;
	length = ft_strlen((char *)src) + ft_strlen((char *)dst);
	while (dst[j])
		j++;
	while (src[i] && j < n - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (length);
}
