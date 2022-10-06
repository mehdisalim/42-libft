#include <stdio.h>
#include "libft.h"

int                main(void)
{
    char    **tab;
    unsigned int    i;

    i = 0;
    tab = ft_split("\0aaa\0\0bbbb\0", '\0');
    if (!tab[0])
        printf("ok\n");
    while (tab[i] != NULL)
    {
        printf("%s#\n", tab[i]);
        i++;
    }
}
