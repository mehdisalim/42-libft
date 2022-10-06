/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:28:49 by esalim            #+#    #+#             */
/*   Updated: 2022/10/06 15:45:27 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**dest;
	char	*a;
	int		nsplit;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	s = ft_strtrim(s, &c);
	a = (char *)s;
	nsplit = 1;
	while (*a && (a = ft_strchr(a, c)))
	{
		a++;
		nsplit++;
	}

	dest = (char **)malloc(sizeof(char *) * (nsplit + 1));
	if (!dest)
		return (0);
	char *splited;
	int	p;

	p = 0;
	while ((splited = ft_strchr(s, c)))
	{
		dest[p++] = ft_substr(s,0 ,splited - s);
		s = ft_strchr(s, c);
		s++;
	}
	dest[p] = 0;
	return (dest);
}
