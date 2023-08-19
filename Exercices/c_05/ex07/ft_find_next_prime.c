/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:25:22 by fverge            #+#    #+#             */
/*   Updated: 2023/06/25 17:37:08 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	int	index;

	index = nb;
	if (ft_is_prime(index) == 1)
		return (index);
	while (ft_is_prime(index) == 0)
		index++;
	return (index);
}
