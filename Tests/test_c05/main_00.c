#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	/*
		//////////////////////// !!!!!! DISCLAIMER !!!!!!! ////////////////////////////

		You probably noticed that the main function is a bit different than the usual

										-- int main (void) --

		If the syntax ARGC and ARGV are unfamiliar to you, I'd suggest to take a look on it, like right now !
		Writing test with those two new friends will improve your C understanding,
		and by the same occasion open new possibilities to your programs.

		Keep in mind that ARGC and ARGV are conventions in the field, so don't be surprised if you see other names !

	*/
	

	if (argc == 2)
	{
		printf("Factorial of %i = %i\n", atoi(argv[1]), ft_iterative_factorial(atoi(argv[1])));
	}
	else
	{
		printf("Usage :		<your_program_name>		<number>\n\nExample :	a.out 4\n");
	}
}
