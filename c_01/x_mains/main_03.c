#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 12;
	int b = 5;

	int div = 0;
	int mod = 0;

	printf("div = %i mod = %i\n", div, mod);
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("div = %i mod = %i\n", div, mod);
}
