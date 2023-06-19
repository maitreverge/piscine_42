#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char str[] = "sAlut bAnde DE salopEs";
	
	printf("Initial string :\n%s", str);

	ft_strupcase(str);
	
	printf("\nUppered string :\n%s", str);
}
