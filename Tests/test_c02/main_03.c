#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str1 = "6578920239487382";
	char *str2 = "54637289345738s";
	char *str3 = "w564783920";
	char str4[0]; 
	
	printf("Full number string is supposed to be 1.\nResult : %i\n", ft_str_is_numeric(str1));
	printf("Letter at the end is supposed to be 0.\nResult : %i\n", ft_str_is_numeric(str2));
	printf("Letter at start is supposed to be 0.\nResult : %i\n", ft_str_is_numeric(str3));
	printf("Empty string is supposed to be 1.\nResult : %i\n", ft_str_is_numeric(str4));

}
