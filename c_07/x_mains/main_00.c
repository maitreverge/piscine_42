#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char string[] = "Salut bande d'enormes coquines";

	char *duplicate = ft_strdup(string);	
	char *duplicate2 = strdup(string);
	printf("%s\n", duplicate);
	printf("%s\n", duplicate2);
	if (strcmp(duplicate, duplicate2) == 0)
		printf("SUPREME TURBO SUCCESS\n");
	else
		printf("ho no you failed :( ");

	// If you're only allowed to use malloc function within your function, the free function lies in the main then !
	free(duplicate);
	free(duplicate2);
	return (0);
}
