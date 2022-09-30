/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:02:23 by esalim            #+#    #+#             */
/*   Updated: 2022/09/30 16:23:54 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	return (malloc(count * size));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p1 = ft_calloc(4, sizeof(int));    // allocate and zero out an array of 4 int
    int *p2 = ft_calloc(1, sizeof(int[4])); // same, naming the array type directly
    int *p3 = ft_calloc(4, sizeof *p3);     // same, without repeating the type name

    if(p2) {
        for(int n=0; n<4; ++n) // print the array
            printf("p2[%d] == %d\n", n, p2[n]);
    }

    free(p1);
    free(p2);
    free(p3);
}
*/
