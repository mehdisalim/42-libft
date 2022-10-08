/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:19:02 by esalim            #+#    #+#             */
/*   Updated: 2022/10/07 23:46:46 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	struct s_list *new;

	new = (struct s_list *) malloc(1 * sizeof(struct s_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
/*
#include <stdio.h>

int                main(void)
{
	//char *c = "mehdi salim";
	struct s_list *list = ft_lstnew(0);
    printf("%s\n", list->content); 

}
*/
