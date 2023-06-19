#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 12;
	int b = 5;

	printf("a = %i b = %i\n", a, b);
	
	ft_ultimate_div_mod(&a, &b);
	printf("a = %i b = %i\n", a, b);
	
}
