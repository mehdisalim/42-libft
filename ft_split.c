/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:28:49 by esalim            #+#    #+#             */
/*   Updated: 2022/10/07 18:44:06 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sep_count(char const *s, char c)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (s[i + 1] == c || !s[i + 1])
				j++;
			i++;
		}
	}
	return (j);
}

void	add_words(char **dest, char *s, char c)
{
	int		i;
	int		w;
	int		h;

	i = 0;
	w = 0;
	h = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		w = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > w)
			dest[h++] = ft_substr(s + w, 0, i - w);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		sep;

	if (!s)
		return (0);
	sep = sep_count(s, c);
	dest = ft_calloc(sep + 1, sizeof(char *));
	if (!dest)
		return (0);
	add_words(dest, (char *)s, c);
	return (dest);
}
