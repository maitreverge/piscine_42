#include <stdio.h>
#include <stdlib.h>

int ft_iterative_power(int nb, int power);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s power %s = %i\n", av[1], av[2], ft_iterative_power(atoi(av[1]), atoi(av[2])));

		// You obviously need to enter 2 numbers in this program !
	}
	else
		printf("Usage :		<your_program_name>		<number>	<power>\n\nExample :	a.out 4 5\n");
}