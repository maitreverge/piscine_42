#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	// Result of provided test is supposed to be (null)... but why ?? Test further !

	char s1[] = "Salut bande de coquines";
	char s2[] = "  bande";
	
	char s3[] = "Salut bande de coquines";
	char s4[] = "  bande";
	
	printf("Real strstr = %s\n", strstr(s1, s2));
	printf("ft_strstr = %s\n", ft_strstr(s3, s4));
}
