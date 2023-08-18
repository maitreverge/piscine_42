#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	/*
	Result for this test is supposed to be :

	Bob\0cVance\0aVance\09Refrigeration.
	
	Ain't an easy one, good luck on this one :)

	*/
	char str[] = "Bob\fVance\nVance\tRefrigeration.";
	
	ft_putstr_non_printable(str);
}
