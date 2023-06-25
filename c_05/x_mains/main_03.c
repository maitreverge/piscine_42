#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power);

int	main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	int power = atoi(argv[2]);
	printf("%i", ft_recursive_power(nb, power));
	return (0);
}
