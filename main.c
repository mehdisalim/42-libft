#include <stdio.h>
#include "libft.h"

int main()
{
    char src2[] = " meh di sa lim sfgh ";
 
    char** dest = ft_split(src2, ' ');
	for(int i = 0; i < 5; i++)
	{
		printf("%s", dest[i]);
	}
    return 0;
}
