#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	printf("Expected result : PPN\n");
	ft_is_negative(42);
	ft_is_negative(0);
	ft_is_negative(-42);
}
