/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:15:50 by leoherna          #+#    #+#             */
/*   Updated: 2023/07/30 19:17:00 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

char	**ft_swap(int nbr)
{
	char	*c_nbr;
	int		i;

	c_nbr = ft_itoa(nbr);
	i = ft_strstr(s_doubletab.nb, c_nbr);
	return (s_doubletab.c_nb[i]);
}

int	len_and_separate(int nbr)
{
	while (nbr >= 999)
		nbr = nbr / 10;
	return (nbr);
}

char	**divide_numbers(int nbr)
{
	char	**result;
	int		i;
	int		temp;
	int		save;
	int		save2;

	temp = nbr;
	save = nbr;
	i = 0;
	while (save != 0)
	{
		i = 10;
		while (save >= 999)
		{
			save = save / 10;
			i = i * i;
		}
		save = nbr;
		save = i * len_and_separate(temp);
		temp = temp - save;
		i = 0;
		while (temp > 9)
		{
			while (nbr >= 9)
			{
				nbr = nbr / 10;
				i++;
			}
			while (i != 0)
			{
				nbr = nbr * 10;
				i--;
			}
			temp = temp - nbr;
			result = result + ft_swap(nbr);
			nbr = temp;
		}
	}
	return (result);
}

char	**transform_number(char *argv, struct s_doubletab dt, struct s_read read)
{
	master_copy_tab(read, dt);
	divide_numbers(ft_atoi(&argv[1]));
}
