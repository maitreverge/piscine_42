#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int i = 21;

	printf("\n%i\n", i);

	ft_ft(&i);
	printf("%i", i);
}
