/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:38:08 by esalim            #+#    #+#             */
/*   Updated: 2022/09/30 17:45:49 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen((char *)s1) + 1;
	dest = (char *)malloc(len);
	ft_strlcpy(dest, (char *)s1, len);
	return (dest);
}

int main(void)
{
	char d[200] = "mehdi\tsadfl[;vvnmnewrcr4bcewnewdsgsfsaliam salan nehdgt";
	printf("####	$%s$	####\n", ft_strdup(d));
	printf("####	$%s$	####\n", strdup(d));
}
