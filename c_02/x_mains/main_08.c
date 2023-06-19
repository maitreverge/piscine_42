#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "sAlut bAnde DE salopEs";
	
	printf("Initial string :\n%s", str);

	ft_strlowcase(str);
	
	printf("\nLowered string :\n%s", str);
}
