#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "saLut, cOMMeNT tU vAs ??? 42MoTs QuArante-dEuX; cInquANte+et+UN";
	
	printf("Initial string :\n%s", str);

	ft_strcapitalize(str);
	
	printf("\nModified string :\n%s", str);
}
