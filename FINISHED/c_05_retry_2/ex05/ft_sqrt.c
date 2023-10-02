/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:26:19 by flverge           #+#    #+#             */
/*   Updated: 2023/07/24 17:18:04 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	min;
	int	max;
	int	middle;
	int	square;

	min = 0;
	max = 46341;
	middle = 0;
	while (1)
	{
		middle = ((max + min) / 2);
		square = middle * middle;
		if (middle == min)
			return (0);
		if (square == nb)
			return (middle);
		if (square > nb)
			max = middle;
		if (square < nb)
			min = middle;
	}
}
