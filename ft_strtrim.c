/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:07:06 by esalim            #+#    #+#             */
/*   Updated: 2022/10/11 23:27:33 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
{
	char *dest;

	size_t i = 0;
	if (!s)
		return (0);
	while (ft_strchr((char *)set, *s))
		s++;
	size_t len = ft_strlen(s) - 1;
	while (ft_strchr((char *)set, s[len]))
		len--;
	dest = malloc (len + 1);
	if (!dest)
		return (0);
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}










































/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
*/