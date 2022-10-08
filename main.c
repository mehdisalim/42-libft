#include <stdio.h>
#include "libft.h"

int                main(void)
{
	char *c = "mehdi salim";
	t_list	*list = ft_lstnew(c);
	t_list	*node;
	node->content = c;
	ft_lstadd_front(&list,node);
	while (list->next)
	{
    	printf("%s\n", list->content);
		list = list->next;
	}

}


