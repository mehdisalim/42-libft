/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:13:22 by esalim            #+#    #+#             */
/*   Updated: 2022/10/10 16:00:43 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		list = list->next;
		ft_lstdelone(*lst, del);
		*lst = list;
	}
}
