#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int origin = 21;
	int *nbr1 = &origin;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	printf("\n%i", origin);

	ft_ultimate_ft(nbr9);
	printf("\n%i", origin);
}
