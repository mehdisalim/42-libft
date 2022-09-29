/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:09:50 by esalim            #+#    #+#             */
/*   Updated: 2022/09/29 15:41:15 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = -1;
	str = (char *) s;
	while (++i < n)
		str[i] = 0;
}
/*
#include<string.h>
int main(void)
{
	char s[15] = "mehdi salim";
	ft_bzero(s, 5);
	printf("#####	%s	#####\n", s);
	bzero(s, 5);
	printf("#####	%s	#####", s);
}
*/
