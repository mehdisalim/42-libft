#include "libft.h"
#include <stdio.h>

int	main()
{
	char str[16] = "mehdi salim";
	ft_memset(str + 3, '0', 5);
	printf("#####	-%s-	#####", str);
}

