#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*upper(void *content)
{
	printf("I am in f function !! --> content is %s \n", content);
	return content;
}

void del(void *content)
{
	free(content);
}

int main()
{
	t_list *begin,*l1,*l2,*l3,*l4,*l5,*l6;

	l1 = ft_lstnew(ft_strdup("hello1 "));
	l2 = ft_lstnew(ft_strdup("hello2 "));
	l3 = ft_lstnew(ft_strdup("hello3 "));
	l4 = ft_lstnew(ft_strdup("hello4 "));
	l5 = ft_lstnew(ft_strdup("hello5 "));
	l6 = ft_lstnew(ft_strdup("hello6 "));

	begin = NULL;
	ft_lstadd_front(&begin, l3);
	ft_lstadd_front(&begin, l2);
	ft_lstadd_back(&begin, l4);
	ft_lstadd_front(&begin, l1);
	ft_lstadd_back(&begin, l5);
	ft_lstadd_back(&begin, l6);

	printf("Last Node is : %s\n", ft_lstlast(begin)->content);
	int i = 0;
	t_list *new = ft_lstmap(l1, upper, del);
		printf("\n----------------------------------------------------------------------------\n");
	while (new)
	{
		printf("Node %d is : %s\n", ++i, new->content);
		new = new->next;

		printf("\n----------------------------------------------------------------------------\n");
	}
	/*
	ft_lstclear(&l4, del);
	l3->next = 0;
	i = 0;
	printf("After Clear :\n");
	while (l1)
	{
		printf("Node %d is : %s\n", ++i, (char *)l1->content);
		l1 = l1->next;
	}*/
	printf("Nothing to display !!");
}
