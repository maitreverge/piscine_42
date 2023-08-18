#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "911 : aIN’t No pArTy lIkE a sCrAnToN pArTy cAuSe A sCrAnToN pArTy Don’T sToP!";
	
	printf("Initial string :\n%s", str);

	ft_strlowcase(str);
	
	printf("\nLowered string :\n%s", str);
}
