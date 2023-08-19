#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str1 = "Salutbandedecoquines";
	char *str2 = "Salut bandedecoquines";
	char *str3 = "Salut\tbandedecoquines";
	char str4[0];
	char *str5 = "Salut8bandedecoquines";

	
	printf("Only alpha is supposed to be 1.\nResult : %i\n", ft_str_is_alpha(str1));
	printf("Spaces in the string is supposed to be 0.\nResult : %i\n", ft_str_is_alpha(str2));
	printf("Non printable char is supposed to be 0.\nResult : %i\n", ft_str_is_alpha(str3));
	printf("Empty buffer is supposed to be 1.\nResult : %i\n", ft_str_is_alpha(str4));
	printf("Number in string is supposed to be 0.\nResult : %i\n", ft_str_is_alpha(str5));


}
