#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb);

int	main(int argc, char **argv)
{
	int nb = atoi(argv[1]);
	printf("%i", ft_sqrt(nb));
	return (0);
}
