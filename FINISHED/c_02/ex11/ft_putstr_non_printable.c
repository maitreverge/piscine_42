/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:11:01 by flverge           #+#    #+#             */
/*   Updated: 2023/07/17 11:17:34 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_non_print(char c)
{
	if ((c >= 0 && c < 32) || c == 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_non_print(str[i]) == 1)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef" [str[i] / 15]);
			ft_putchar("0123456789abcdef" [str[i] % 15]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = "Coucou\ntu vas bien? ";

	printf("Test 1 avant fonction : \n%s\n\n", str);

	///////////////////////////
	// APPEL FONCTIONS DANS LES PRINTF
	//////////////////////////
	ft_putstr_non_printable(str);

	printf("\n-------------\n");
}
*/
