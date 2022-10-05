/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:08 by esalim            #+#    #+#             */
/*   Updated: 2022/10/05 13:43:12 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	j = 0;
	i = 0;
	srclen = ft_strlen((char *)src);
	if ((dst || src) && !n)
		return (srclen);
	destlen = ft_strlen((char *)dst);
	if (destlen >= n || !n)
		return (n + srclen);
	while (dst[j])
		j++;
	while (src[i] && j + 1 < n)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (srclen + destlen);
}
