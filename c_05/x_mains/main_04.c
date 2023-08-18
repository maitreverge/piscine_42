#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index);

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("Fibonacci index %s = %i\n", av[1], ft_fibonacci(atoi(av[1])));
	else
		printf("Usage :		<your_program_name>		<number>	\n\nExample :	a.out 4\n");
}
