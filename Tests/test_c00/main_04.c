#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("Result expected for input :   42   is supposed to be P\n\n");
	ft_is_negative(42);
	printf("\n\n----------\n\n");

	printf("Result expected for input :   0   is supposed to be P\n\n");
	ft_is_negative(0);
	printf("\n\n----------\n\n");

	printf("Result expected for input :   -42   is supposed to be N\n\n");
	ft_is_negative(-42);
	printf("\n\n----------\n\n");
}
