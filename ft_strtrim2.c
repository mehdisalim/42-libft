/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:07:06 by esalim            #+#    #+#             */
/*   Updated: 2022/10/05 12:41:05 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	setlen;
	size_t	i;

	s1len = ft_strlen(s1);
	setlen = ft_strlen(set);
	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[s1len - 1]))
		s1len--;
	if (i >= s1len)
		return (ft_strdup(""));
	return (ft_substr(&s1[i], 0, s1len + 1));
}
