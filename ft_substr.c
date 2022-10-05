/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:19:21 by esalim            #+#    #+#             */
/*   Updated: 2022/10/05 14:54:10 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	
	if (!s)
		return (0);
	d = (char *)malloc(len + 1);
	if (!d)
		return (0);
	if (start < ft_strlen(s))
		ft_strlcpy(d, &s[start], len + 1);
	return (d);
}
