#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index);

int	main(int argc, char **argv)
{
	int index = atoi(argv[1]);
	printf("%i", ft_fibonacci(index));
	return (0);
}
