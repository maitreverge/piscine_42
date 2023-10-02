/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:04:46 by flverge           #+#    #+#             */
/*   Updated: 2023/07/25 10:53:50 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = nb;
	result = 1;
	while (i > 0)
	{
		result = result * i;
		i--;
	}
	if (nb < 0)
		return (result * -1);
	return (result);
}
