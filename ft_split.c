/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:28:49 by esalim            #+#    #+#             */
/*   Updated: 2022/10/05 16:45:12 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**dest;
	char	*a;
	char	*b;
	int		nsplit;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	s = ft_strtrim(s, &c);
	a = (char *)s;
	nsplit = 0;
	while (*a && (a = ft_strchr(a, c)))
	{
		a++;
		nsplit++;
	}

	dest = (char **)malloc(nsplit);
	if (!dest)
		return (0);
	b = (char *)s;
	while (nsplit--)
	{
		*dest = ft_substr(b,0 ,ft_strchr(b, c) - b);
		b = ft_strchr(b, c);
		b++;
	}
	return (dest);
}
