#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb);

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("Square root of %s = %i\n", av[1], ft_sqrt(atoi(av[1])));
	else
		printf("Usage :		<your_program_name>		<number>	\n\nExample :	a.out 4\n");
}
