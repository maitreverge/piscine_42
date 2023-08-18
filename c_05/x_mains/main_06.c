#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb);

int	main(int ac, char **av)
{
	if (ac == 2)
		printf("1 = Prime number.\n0 = Not a prime number.\n\n-------\n\nIs %s a prime number ?\n\nResult = %i\n", av[1], ft_is_prime(atoi(av[1])));
	else
		printf("Usage :		<your_program_name>		<number>	\n\nExample :	a.out 4\n");
}
