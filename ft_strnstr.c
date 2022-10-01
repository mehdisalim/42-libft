/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:40:56 by esalim            #+#    #+#             */
/*   Updated: 2022/09/30 20:16:56 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] && i < len)
	{
      j = 0;
      while (haystack[i + j] == needle[j])
      {
         if (needle[j + 1])
               return (char *)(haystack + i);
         j++;
      }
		i++;
	}
   return (0);
}
int main () {
   const char haystack[40] = "mehdi sasalim mehdi salim";
   const char needle[10] = "salim";
   char *ret;

   ret = ft_strnstr(haystack, needle, 30);

   printf("The substring is: %s\n", ret);

   return(0);
}
