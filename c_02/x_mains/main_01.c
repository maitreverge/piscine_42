#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src = "Salut bande de salopes";
	char dest[50];
	unsigned int n = 11;

	ft_strncpy(dest, src, n);	
	printf("\n");	

	for (int i = 0; dest[i] != '\0'; i++)
		printf("%c", dest[i]);

}
