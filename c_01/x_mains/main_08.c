#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int size = 14;
	int tab[] = {4242, 100, 42, 0, 0, 12, -4, 1, -1, -8, -12, 1000, 4242, -2};

    /*
    I specifically put duplicates numbers,
    so your result is supposed to look like this :

    -12  -8  -4  -2  -1  0  0  1  12  42  100  1000  4242  4242 
    */
	
	printf("Values from the tab before function\n\n");
	for (int i = 0; i < size; i++)
		printf("%i  ", tab[i]);
	
	printf("\n\n----------\n\n");

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_sort_int_tab(tab, size);
			
				
	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////

	printf("Values from the tab after function\n\n");

	for (int i = 0; i < size; i++)
		printf("%i  ", tab[i]);
}