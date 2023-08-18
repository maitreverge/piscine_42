#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str1 = "RDFCHVGJBKLIUYT";
	char *str2 = "eTXYGVUHBIJK";
	char *str3 = "TRYFUGHJK0";
	char str4[0]; 
	
	printf("Full uppercase is supposed to be 1.\nResult : %i\n", ft_str_is_uppercase(str1));
	printf("One lowercase is supposed to be 0.\nResult : %i\n", ft_str_is_uppercase(str2));
	printf("One number is supposed to be 0.\nResult : %i\n", ft_str_is_uppercase(str3));
	printf("Empty string is supposed to be 1.\nResult : %i\n", ft_str_is_uppercase(str4));

}
