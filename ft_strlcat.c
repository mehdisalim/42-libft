/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:08 by esalim            #+#    #+#             */
/*   Updated: 2022/10/02 18:02:33 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	j = 0;
	i = 0;
	srclen = ft_strlen((char *)src);
	destlen = ft_strlen((char *)dst);
	if (destlen >= n)
		return (n + srclen);
	while (dst[j])
		j++;
	while (src[i] && j < n - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (srclen + destlen);
}
