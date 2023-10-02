/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:22:07 by flverge           #+#    #+#             */
/*   Updated: 2023/07/26 11:58:13 by flverge          ###   ########.fr       */
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

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
