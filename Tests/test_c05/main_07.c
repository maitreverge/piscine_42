#include <stdio.h>
#include <stdlib.h>

int ft_find_next_prime(int nb);

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("Which prime number follows %s ?\n\n----------\n\nResult = %i\n", av[1], ft_find_next_prime(atoi(av[1])));
	else
		printf("Usage :		<your_program_name>		<number>	\n\nExample :	a.out 4\n");
}