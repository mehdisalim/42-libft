/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esalim <esalim@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:34:18 by esalim            #+#    #+#             */
/*   Updated: 2022/09/29 18:49:21 by esalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	return (c - 32);
}
/*
int	main(void)
{
	for (int i= 0; i < 9; i++)
		printf("######	$ %c $ ----- > $ %c $	######\n", 'a' + i,ft_toupper('a'+i));
}
*/