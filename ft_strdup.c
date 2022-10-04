/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:38:08 by esalim            #+#    #+#             */
/*   Updated: 2022/10/03 16:31:37 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen((char *)s1) + 1;
	dest = (char *)malloc(len);
	if (!dest)
		return (0);
	ft_strlcpy(dest, (char *)s1, len);
	return (dest);
}
