#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(void)
{
	char str[] = "\t\n\n\n\v\f\f\r\r  \r \t \v----++--+--+-+554123gj3939";
	printf("%i", ft_atoi(str)); // Result supposed o be -554123
}
