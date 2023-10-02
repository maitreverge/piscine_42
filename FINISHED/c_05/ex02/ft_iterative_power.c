/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:24:34 by flverge           #+#    #+#             */
/*   Updated: 2023/07/25 14:43:49 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (nb == 1)
		return (nb);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power == 0 && nb < 0)
		return (-1);
	if (power == 0 && nb > 0)
		return (1);
	while (i < power)
	{
		result = nb * result;
		i++;
	}
	return (result);
}
