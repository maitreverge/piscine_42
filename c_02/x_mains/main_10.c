#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "saLut, cOMMeNT tU vAs ??? 42MoTs QuArante-dEuX; cInquANte+et+UN";
	char dest[100];
	unsigned int size = 10;
	
	printf("Initial string :\n%s", src);

	ft_strlcpy(dest, src, size);
	
	printf("\nModified string :\n%s", dest);
	printf("\nFunction result:\n%i", ft_strlcpy(dest, src, size));

}
