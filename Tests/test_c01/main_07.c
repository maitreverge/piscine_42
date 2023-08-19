#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size = 6;
	int tab[] = {1, 2, 3, 4, 5, 6};

	/*
		From now, I'll use FOR loops, which are strictly forbidden by the norm.
		However, for testing your programs, and in that particular case, there is no
		other way to my knowledge for display an array of ints
		(mainly because an array of int is not NULL terminated, with a '\0' character).

		Moreover, as you've been asked to push functions and not programs, you can put
		whatever you want in your mains, such as printf function and for loops.

		However, do not be tempted to use them within your functions, as the moulinette will
		flag you as a cheater, resulting in -42 note.

		For better and faster testing, I highly enrourage you to be more familiar with 
		the FOR conditional syntax, as it is just more convinient than WHILE loops.

		There is also do...while and switch cases conditional statement if you want to dig deeper,
		unfortunatelly both forbidden !
	*/
	
	printf("Values from the tab before function\n\n");
	for (int i = 0; i < size; i++)
		printf("%i  ", tab[i]);
	
	printf("\n\n----------\n\n");

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_rev_int_tab(tab, size);
			
				
	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////

	printf("Values from the tab after function\n\n");

	for (int i = 0; i < size; i++)
		printf("%i  ", tab[i]);
}
