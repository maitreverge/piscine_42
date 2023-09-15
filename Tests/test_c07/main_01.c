#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int min = atoi(argv[1]);
		int max = atoi(argv[2]);
		
		int *tab = ft_range(min, max);
		for (int i = 0; i < (max - min); i++)
		{
			printf("%i  ", tab[i]);
		}
		free(tab);
	}
	else
		printf("Usage :		<your_program_name>		<min_number>	<max_number>	\n\nExample :	a.out 4 12\n");
}
