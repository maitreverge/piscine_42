#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	// For this main, I only wrote a happy path test.

	// I encourage you to write more tests with the real strlcpy function.

	char src[] = "This sentence is not 38 caracters longx";
	char dest[100];
	unsigned int size = 39;
	
	printf("Initial string :\n%s\n", src);
	printf("\n----------\n");


	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_strlcpy(dest, src, size);
			
				
	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////

	
	
	printf("\nModified string :\n%s\n\n", dest);
	printf("Function result:\n%i", ft_strlcpy(dest, src, size));

}
