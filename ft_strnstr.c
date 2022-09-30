/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:40:56 by esalim            #+#    #+#             */
/*   Updated: 2022/09/30 16:02:06 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
//		if (haystack[i] == )
		i++;
	}

}
int main () {
   const char haystack[40] = "TutorialsPoint fgshd sghfjg";
   const char needle[10] = "Point";
   char *ret;

   ret = strnstr(haystack, needle, 30);

   printf("The substring is: %s\n", ret);

   return(0);
}
