/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:08 by esalim            #+#    #+#             */
/*   Updated: 2022/09/29 18:08:07 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

size_t	ft_strlen(char *str);

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	j;
	size_t	i;
	size_t	length;

	j = 0;
	i = 0;
	length = ft_strlen((char *)src);
	length += ft_strlen((char *)dst);
	while (dst[j])
		j++;
	while (src[i] && j < n - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = 0;
	return (length);
}
/*
int main()
{
	char c[16] = "testtesst",s[16] = "mehdi salim";
	char a[16] = "testtesst",b[16] = "mehdi salim";
	size_t i;
	i = ft_strlcat(c, s, 10);
	printf("#####	#%s#	#####\nlength is : %zu\n", c, i);
	i = strlcat(a, b, 10);
	printf("#####	#%s#	#####\nlength is : %zu", a, i);
}
*/
