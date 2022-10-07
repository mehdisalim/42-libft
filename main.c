#include <stdio.h>
#include "libft.h"

int                main(void)
{
	char *s = "split  ||this|for|me|||||!|";
    char **d = ft_split(s, '|');
    while (*d)
	{
        printf("%s#\n", *d);
		d++;
    } 
}


