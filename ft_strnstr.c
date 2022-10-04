/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:40:56 by esalim            #+#    #+#             */
/*   Updated: 2022/10/04 15:03:21 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	if (!*haystack)
		return (0);
	while (i + nlen <= len)
	{
		if (!ft_strncmp(haystack + i, needle, nlen))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
