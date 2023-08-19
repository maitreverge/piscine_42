#include <stdio.h>
#include <string.h>

char **ft_split(char *str, char *charset);

int main(void)
{
    char    *str = "Tell__x__him__x__to__x__call__x__me__x__ASAP__x__as__x__possible.";
    char    *charset = "__x__";

    char    **result = ft_split(str, charset);

    for(int i = 0; result[i]; i++)
    {
        printf("Result[%i] = %s\n\n-----\n", result[i]);
    }
}