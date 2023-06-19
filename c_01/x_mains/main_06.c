#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "Ceci fait 31 caracteres de long"; // expected result 31
	printf("%i", ft_strlen(str));
}
