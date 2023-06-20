#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char s1[] = "Salut bande de salope";
	char s2[] = "Salut bande de salope";

	char s3[] = "Salut bande de salopes";
	char s4[] = "Salut bande dE salopes";

	char s5[] = "Salut bande d2 salopes";
	char s6[] = "Salut bande de salopes";

	char s7[] = "Salut bande de salope";
	char s8[] = "Salut bande de salopes";
	
	char s9[] = "Salut bande de salopes";
	char s10[] = "Salut bande de salope";
	
	
	printf("Real strcmp = %i\nft_strcmp = %i\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("Real strcmp = %i\nft_strcmp = %i\n", strcmp(s3, s4), ft_strcmp(s3, s4));
	printf("Real strcmp = %i\nft_strcmp = %i\n", strcmp(s5, s6), ft_strcmp(s5, s6));
	printf("Real strcmp = %i\nft_strcmp = %i\n", strcmp(s7, s8), ft_strcmp(s7, s8));
	printf("Real strcmp = %i\nft_strcmp = %i\n", strcmp(s9, s10), ft_strcmp(s9, s10));
}
