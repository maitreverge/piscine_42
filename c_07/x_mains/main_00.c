#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char string[] = "Salut bande d'enormes salopes";

	char *duplicate = ft_strdup(string);	
	char *duplicate2 = strdup(string);
	printf("%s\n", duplicate);
	printf("%s\n", duplicate2);
	if (strcmp(duplicate, duplicate2) == 0)
		printf("YEAH BABY\n");
	else
		printf("ho no :( ");
	free(duplicate);
	free(duplicate2);
	return (0);
}
