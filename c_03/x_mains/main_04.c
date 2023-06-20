#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char s1[] = "Salut bande de salopes";
	char s2[] = "x";
	
	char s3[] = "Salut bande de salopes";
	char s4[] = "x";
	
	printf("Real strstr = %s\n", strstr(s1, s2));
	printf("ft_strstr = %s\n", ft_strstr(s3, s4));
}
