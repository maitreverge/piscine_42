#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 12;
	int b = 5;

	printf("a = %i b = %i before function\n", a, b);
	printf("\n----------\n\n");

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_ultimate_div_mod(&a, &b);
								

	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////
	
	
	printf("a = %i b = %i after function\n", a, b);
	
}
