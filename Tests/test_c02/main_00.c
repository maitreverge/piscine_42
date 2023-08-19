#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src = "Yeah, I have a lot of questions. First of all: How dare you?";
	char dest[80]; // This is the DESTINATION buffer, which NEEDS to be larger than the SOURCE buffer.


	printf("String to be copied :\n\n%s\n", src);
	printf("\n----------\n\n");

	  //////////////////////////////////////////
	 //         FUNCTION    EXECUTION        //
	//////////////////////////////////////////


				ft_strcpy(dest, src);	
			
				
	  //////////////////////////////////////////
	 //         END    EXECUTION             //
	//////////////////////////////////////////
	
	
	printf("Destination buffer :\n\n%s", dest);

}
