#include <stdio.h>
#include <string.h>
 
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

void print_and_free(char *result, char *from, char *to)
{
    if (result != NULL)
    {
        printf("%s to %s: %s\n", from, to, result);
        free(result);
    } else
            printf("Conversion failed\n");
}

int main(void)
{
    // Not gonna lie, Codium AI helped me crush this test, otherwise my original main would be 50kms long -_-
    char *octal = "01234567";
    char *binary = "01";
    char *decimal = "0123456789";
    char *hexa = "0123456789ABCDEF";
    char *wtf = "lmao_turd";

    char *test_octal = "070224";
    char *test_binary = "01100110100010";
    char *test_decimal = "0400774584";
    char *test_hexa = "70A22F4";
    char *test_wtf = "__tuulrmaoatd";

    char *bases[] = {octal, binary, decimal, hexa, wtf};
    char *tests[] = {test_octal, test_binary, test_decimal, test_hexa, test_wtf};
    int num_bases = sizeof(bases) / sizeof(bases[0]);
    int num_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < num_tests; i++)
    {
        for (int j = 0; j < num_bases; j++)
        {
            for (int k = 0; k < num_bases; k++)
            {
                char *from_base = bases[j];
                char *to_base = bases[k];
                char *test = tests[i];
                char *result = ft_convert_base(test, from_base, to_base);
                print_and_free(result, from_base, to_base);
            }
        }
    }
    return 0;
}