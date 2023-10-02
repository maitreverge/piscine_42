/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:06:29 by flverge           #+#    #+#             */
/*   Updated: 2023/07/23 20:13:39 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void	initialize_table(int output_table[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			output_table[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	argv_tab[4][4];
	int	output_table[4][4];
	int	size;

	size = 4;
	initialize_table(output_table);
	initialize_table(argv_tab);
	if (argc != 2)
		ft_putstr("Error\n");
	else if (ft_check_argv(argv[1]) == 1)
	{
		ft_print_in_tab(argv[1], &argv_tab);
		if (ft_check(argv_tab, size) == 1)
			master_solver(output_table, argv_tab, size);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
