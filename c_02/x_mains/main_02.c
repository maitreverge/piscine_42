#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str1 = "Salutbandedesalopes";
	char *str2 = "Salut bande de salopes";
	char *str3 = "Salut \tban)de de salopes";
	char str4[0]; 
	
	printf("Result is supposed to be 1.\nResult : %i\n", ft_str_is_alpha(str1));
	printf("Result is supposed to be 0.\nResult : %i\n", ft_str_is_alpha(str2));
	printf("Result is supposed to be 0.\nResult : %i\n", ft_str_is_alpha(str3));
	printf("Result is supposed to be 1.\nResult : %i\n", ft_str_is_alpha(str4));

}
