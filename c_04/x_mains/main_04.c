#include <stdio.h>
#include <stdlib.h>

void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int nbr = 477;
	char base1[] = "0123456789ABCDEF";
	char base2[] = "01";
	char base3[] = "poneyvif";
	ft_putnbr_base(nbr, base1);
	printf("\n");
	ft_putnbr_base(nbr, base2);
	printf("\n");
	ft_putnbr_base(nbr, base3);
	printf("\n");
}