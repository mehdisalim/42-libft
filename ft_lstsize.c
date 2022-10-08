/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:09:58 by esalim            #+#    #+#             */
/*   Updated: 2022/10/08 13:12:41 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;
	
	i = 1;
	if (!lst)
		return (0);
	tmp = lst;
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
