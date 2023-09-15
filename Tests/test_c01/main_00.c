#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int i = 21;

	printf("Value of i before function : %i\n\n----------\n\n", i);

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


	                 ft_ft(&i);


	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////


	printf("Value of i after function  : %i\n", i);
}
