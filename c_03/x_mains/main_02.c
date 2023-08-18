#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char s1[50] = "Salut ";
	char s2[] = "bande de coquines";
	
	char s3[50] = "Salut ";
	char s4[] = "bande de coquines";
	
	printf("Real strcat = %s\n", strcat(s1, s2));
	printf("ft_strcat = %s\n", ft_strcat(s3, s4));
}
