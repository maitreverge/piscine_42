#include <stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	// Buffers declaration, which are identicals
	char	*s = "Identity theft is not a joke, Jim! Millions of families suffer every year.";
	char *result = "Identity theft is not a joke, Jim! Millions of families suffer every year.";
	
	
	printf("Expected result is :\n%s", s); // print out the reference buffer

	printf("\n\n----------\n\n");

	printf("Function result is :\n");
	ft_putstr(result); // print out your function implementation

	
}
