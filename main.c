#include <stdio.h>
#include "libft.h"

int main()
{
    char src[] = "";
    char src2[] = "";
 
    char* dest = ft_strtrim(src, src2);
    printf("%s#\n", dest);
 
    return 0;
}
