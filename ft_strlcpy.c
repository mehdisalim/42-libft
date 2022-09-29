/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:08 by esalim            #+#    #+#             */
/*   Updated: 2022/09/29 17:44:01 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *str);

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = ft_strlen((char *)src);
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (length);
}
/*
int main()
{
	char c[16],s[16] = "mehdi salim";
	size_t i;
	i = ft_strlcpy(c, s, 1);
	printf("#####	#%s#	#####\nlength is : %zu\n", c, i);
	i = strlcpy(c, s, 1);
	printf("#####	#%s#	#####\nlength is : %zu", c, i);
}
*/
