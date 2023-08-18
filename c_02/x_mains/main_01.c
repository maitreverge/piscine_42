#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	  //////////////////////////////////////////
	 //               TEST 1                 //
	//////////////////////////////////////////
	char *src1 = "The Dunder Mifflin stock symbol is DMI.";
	char dest1[50];
	char ft_dest1[50];
	unsigned int n1 = 13;

	  //////////////////////////////////////////
	 //               TEST 2                 //
	//////////////////////////////////////////

	char *src2 = "The Dunder Mifflin stock symbol is DMI.";
	char dest2[50];
	char ft_dest2[50];
	unsigned int n2 = 0;

	  //////////////////////////////////////////
	 //               TEST 3                 //
	//////////////////////////////////////////

	char *src3 = "The Dunder Mifflin stock symbol is DMI.";
	char dest3[50];
	char ft_dest3[50];
	unsigned int n3 = 40;

	  //////////////////////////////////////////
	 //               TEST 4                 //
	//////////////////////////////////////////

	char *src4 = "The Dunder Mifflin stock symbol is DMI.";
	char dest4[50];
	char ft_dest4[50];
	unsigned int n4 = 1;

	  //////////////////////////////////////////
	 //               TEST 5                 //
	//////////////////////////////////////////

	char *src5 = "The Dunder Mifflin stock symbol is DMI.";
	char dest5[10];
	char ft_dest5[10];
	unsigned int n5 = 10;

					////////// TEST 1 //////////////

	printf("///////////// TEST 1///////////////\n\n\n");
	printf("Real strncpy :\n\n%s", strncpy(dest1, src1, n1));
	printf("\n\n----------\n\n");
	printf("My ft_strncpy :\n\n%s\n\n", ft_strncpy(ft_dest1, src1, n1));

					////////// TEST 2 //////////////

	printf("\n\n\n///////////// TEST 2///////////////\n\n\n");
	printf("Real strncpy :\n\n%s", strncpy(dest2, src2, n2));
	printf("\n\n----------\n\n");
	printf("My ft_strncpy :\n\n%s\n", ft_strncpy(ft_dest2, src2, n2));

					////////// TEST 3 //////////////

	printf("\n\n\n///////////// TEST 3///////////////\n\n\n");
	printf("Real strncpy :\n\n%s", strncpy(dest3, src3, n3));
	printf("\n\n----------\n\n");
	printf("My ft_strncpy :\n\n%s\n", ft_strncpy(ft_dest3, src3, n3));

					////////// TEST 4 //////////////

	printf("\n\n\n///////////// TEST 4///////////////\n\n\n");
	printf("Real strncpy :\n\n%s", strncpy(dest4, src4, n4));
	printf("\n\n----------\n\n");
	printf("My ft_strncpy :\n\n%s\n", ft_strncpy(ft_dest4, src4, n4));

					////////// TEST 5 //////////////

	printf("\n\n\n///////////// TEST 5///////////////\n\n\n");
	printf("Real strncpy :\n\n%s", strncpy(dest5, src5, n5));
	printf("\n\n----------\n\n");
	printf("My ft_strncpy :\n\n%s\n", ft_strncpy(ft_dest5, src5, n5));

}
