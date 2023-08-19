#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "This sentence is 34 caracters long";

	printf("Expected result is supposed to be 34");
		
	printf("\n\n----------\n\n");
	
	printf("Result is %i", ft_strlen(str));

}
