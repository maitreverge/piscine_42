#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src = "Salut bande de salopes";
	char dest[50];

	ft_strcpy(dest, src);	
	
	for (int i = 0; dest[i] != '\0'; i++)
		printf("%c", dest[i]);

}
