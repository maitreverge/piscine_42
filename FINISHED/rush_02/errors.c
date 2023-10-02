/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:51:29 by leoherna          #+#    #+#             */
/*   Updated: 2023/07/30 19:22:35 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "librush.h"

int	nb_is_positive(int nb)
{
	if (nb < 0)
	{
		ft_putstr("Error");
		return (1);
	}
	else
		return (0);
}

int	dict_error(int nb)
{
	if (nb > 2147463647)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	else
		return (0);
}

int	nb_is_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_putstr("Error");
			return (1);
		}
		i++;
	}
	return (0);
}

int	verif_error_nb(char *argv)
{
	int	nb;

	nb = 0;
	if (nb_is_integer(argv) == 1)
		return (1);
	nb = ft_atoi(argv);
	if (nb_is_positive(nb) == 1)
		return (1);
	if (dict_error(nb) == 1)
		return (1);
	return (0);
}
