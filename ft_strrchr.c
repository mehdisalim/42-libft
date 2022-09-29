/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:08:26 by esalim            #+#    #+#             */
/*   Updated: 2022/09/29 19:36:18 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	while (*str)
		str++;
	while (*--str)
	{
		if (*str == c)
			return ((char *)str);
	}
	return (0);
}
