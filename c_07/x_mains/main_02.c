#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);
	
	int *range;
	int result = ft_ultimate_range(&range, min, max);
	printf("%i\n", result);
	for (int i = 0; i < (max - min); i++)
	{
		printf("%i", range[i]);
		printf(" ,");
	}
	free(range);
	}
	else
		return (1);
}
