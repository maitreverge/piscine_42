#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	// Only one happy path test is provided here, you know what it means now !
	char s1[50] = "Salut ";
	char s2[] = "bande de coquines";
	unsigned int n1 = 8;
	
	char s3[50] = "Salut ";
	char s4[] = "bande de coquines";
	unsigned int n2 = 8;
	
	printf("Real strncat = %s\n", strncat(s1, s2, n1));
	printf("ft_strncat = %s\n", ft_strncat(s3, s4, n2));
}
