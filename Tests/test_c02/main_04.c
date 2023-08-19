#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str1 = "jhfjnvdks";
	char *str2 = "eswrdtfyguhijokQ";
	char *str3 = "7rdtfcvgybhnjkm";
	char str4[0]; 
	
	printf("Full lowercase is supposed to be 1.\nResult : %i\n", ft_str_is_lowercase(str1));
	printf("One uppercase is supposed to be 0.\nResult : %i\n", ft_str_is_lowercase(str2));
	printf("One number is supposed to be 0.\nResult : %i\n", ft_str_is_lowercase(str3));
	printf("Empty string is supposed to be 1.\nResult : %i\n", ft_str_is_lowercase(str4));

}
