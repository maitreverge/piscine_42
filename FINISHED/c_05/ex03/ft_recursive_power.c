/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:36:12 by flverge           #+#    #+#             */
/*   Updated: 2023/07/25 19:21:47 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
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
	return (nb * ft_recursive_power(nb, power - 1));
}
