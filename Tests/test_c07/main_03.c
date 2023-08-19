#include <stdio.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char **buffer;

    buffer[0] = "Sorry";
    buffer[1] = "I";
    buffer[2] = "annoyed";
    buffer[3] = "you";
    buffer[4] = "with";
    buffer[5] = "my";
    buffer[6] = "friendship";

    int len_buffer = strlen(buffer);

    char *sep = "__x__";

    char *result = ft_strjoin(len_buffer, buffer, sep);

    printf("Result = %s\n", result);
    
}