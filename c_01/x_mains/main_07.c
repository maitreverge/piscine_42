#include <stdio.h>

int	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size = 6;
	int tab[] = {1, 2, 3, 4, 5, 6};

	for (int i = 0; i < size; i++)
		printf("%i", tab[i]);

	ft_rev_int_tab(tab, size);
	printf("\n");
	for (int i = 0; i < size; i++)
		printf("%i", tab[i]);
}
