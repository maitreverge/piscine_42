#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char str[] = "911 : aIN’t No pArTy lIkE a sCrAnToN pArTy cAuSe A sCrAnToN pArTy Don’T sToP!";
	
	printf("Initial string :\n%s", str);

	ft_strupcase(str);
	
	printf("\nUppered string :\n%s", str);
}
