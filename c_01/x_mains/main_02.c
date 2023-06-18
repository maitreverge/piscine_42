#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 21;
	int b = 42;

	printf("a = %i b = %i\n", a, b);
	
	ft_swap(&a, &b);
	
	printf("a = %i b = %i\n", a, b);
}
