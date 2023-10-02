/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:20:37 by flverge           #+#    #+#             */
/*   Updated: 2023/07/16 13:40:22 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char a, char b, char c)
{
	int	nombre_colonne;

	nombre_colonne = 0;
	ft_putchar(a);
	if (x > 2)
	{
		while (nombre_colonne <= x - 3)
		{
			ft_putchar(b);
			nombre_colonne++;
		}
	}
	if (x > 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 0;
	if (x < 1 || y < 1)
		return ;
	print_line(x, 'A', 'B', 'A');
	if (y > 2)
	{
		while (line <= y - 3)
		{
			print_line(x, 'B', ' ', 'B');
			line++;
		}
	}
	if (y >= 2)
		print_line(x, 'C', 'B', 'C');
}
