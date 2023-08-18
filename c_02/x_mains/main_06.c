#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str1 = "RDFCawjrehbf34567$++-££#1!?LIUYT";
	char *str2 = "eTXYGVUH\tBIJK";
	char *str3 = "TRYetrg\nJK0";
	char str4[0]; 
	
	printf("Random printables is supposed to be 1.\nResult : %i\n", ft_str_is_printable(str1));
	printf("One non print is supposed to be 0.\nResult : %i\n", ft_str_is_printable(str2));
	printf("One non print is supposed to be 0.\nResult : %i\n", ft_str_is_printable(str3));
	printf("Empty string is supposed to be 1.\nResult : %i\n", ft_str_is_printable(str4));

}
