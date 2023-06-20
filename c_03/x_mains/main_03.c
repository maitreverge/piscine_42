#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char s1[50] = "Salut ";
	char s2[] = "bande de salope";
	unsigned int n1 = 7;
	
	char s3[50] = "Salut ";
	char s4[] = "bande de salope";
	unsigned int n2 = 7;
	
	printf("Real strncat = %s\n", strncat(s1, s2, n1));
	printf("ft_strncat = %s\n", ft_strncat(s3, s4, n2));
}
