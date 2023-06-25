#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	printf("%i", ft_is_prime(nb));
	return (0);
}
