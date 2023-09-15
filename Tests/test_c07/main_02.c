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
			printf("%i  ", range[i]);
		}
		free(range);
	}
	else
		printf("Usage :		<your_program_name>		<min_number>	<max_number>	\n\nExample :	a.out 4 12\n");
}
