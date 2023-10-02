/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:40:05 by flverge           #+#    #+#             */
/*   Updated: 2023/07/23 19:34:37 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int	is_one_to_four(char c)
{
	if (c >= '1' && c <= '4')
		return (1);
	else
		return (0);
}

int	ft_check_argv(char *str)
{
	int	i;
	int	count_numbers;
	int	count_spaces;

	i = 0;
	count_numbers = 0;
	count_spaces = 0;
	if (ft_strlen(str) != 31)
		return (0);
	while (str[i])
	{
		if (is_one_to_four(str[i]) == 1)
			count_numbers++;
		if (str[i] == ' ')
			count_spaces++;
		i++;
	}
	if (count_numbers == 16 && count_spaces == 15)
		return (1);
	else
		return (0);
}

void	ft_print_in_tab(char *argv, int (*tab_int)[4][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < 4)
	{
		k = 0;
		while (k < 4)
		{
			(*tab_int)[j][k] = argv[i] - 48;
			k++;
			i += 2;
		}
		j++;
	}
}
