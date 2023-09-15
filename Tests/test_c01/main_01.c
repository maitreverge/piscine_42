#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int i = 21; // Original value

	// Pointers declarations

	int *nbr1 = &i; // First pointer takes i's adress
	int **nbr2 = &nbr1; // second pointer takes nbr1's adress
	int ***nbr3 = &nbr2; // and so on...
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	printf("Value of i before function : %i\n\n----------\n\n", i);

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_ultimate_ft(nbr9);


	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////

	printf("Value of i after function  : %i\n", i);
}
