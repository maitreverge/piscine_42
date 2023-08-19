#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 12;
	int b = 5;

	int div = 0;
	int mod = 0;

	printf("div = %i mod = %i before function\n", div, mod);
	printf("\n----------\n\n");

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_div_mod(a, b, &div, &mod);
				/*

				Same as previous exercice, I pluged the adresses of variables DIV and MOD straight into
				the function, but if you're not confortable with this syntax, use the other way around
				described in the previous main.

				Pointer is a difficult concept to wrap your mind around, especially when you've been introduced to it...

				So keep going, you're doing great :)
				
				*/
				

	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////
	
	
	
	printf("div = %i mod = %i after function\n", div, mod);
}
