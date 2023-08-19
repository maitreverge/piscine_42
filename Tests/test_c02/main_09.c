#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "thE onLy   P r O b L e M; i_s      WhEnEvEr I TrY To\t \tMaKE ?? a taCo, I GeT+toO+EXCiTeD aaaaaaaand\ni\n crUsH iT";

	// I wrote a long test that covers most cases... if you got it right, chances are you're on the right track !
	// God damn it Kevin !!!

	
	printf("Initial string :\n%s\n", str);

	ft_strcapitalize(str);
	
	printf("\n\nModified string :\n\n%s", str);
}
