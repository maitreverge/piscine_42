#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Factorial of %i = %i\n", atoi(argv[1]), ft_recursive_factorial(atoi(argv[1])));
	else
		printf("Usage :		<your_program_name>		<number>\n\nExample :	a.out 4\n");
}