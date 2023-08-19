#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 21;
	int b = 42;

	/*                   Pointers suggestion :

///////////////////////////////////////////////////////////////////////

	For better pointer arythmetic understanding, you could also have declared pointers to thoses values such as 

	int		*pointer_a;
	int		*pointer_b;

	pointer_a = &a;
	pointer_b = &b;

	And then call the swap function like this :

	ft_swap(pointer_a, pointer_b);

	As I did it, you can plug the adress of the values straight in the function,
	which is exactly the same....... as pointers as just a variables containing adresses.

	I highly encourage you to use pointer declaration in the first place to get used to it if you're not !

///////////////////////////////////////////////////////////////////////

	*/

	printf("a = %i /\\ b = %i before swap\n", a, b);
	printf("\n----------\n\n");


	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_swap(&a, &b);
				

	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////
	
	
	
	printf("a = %i /\\ b = %i after swap\n", a, b);
}
