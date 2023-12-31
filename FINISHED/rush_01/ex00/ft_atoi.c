/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmesa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 08:53:17 by rmesa             #+#    #+#             */
/*   Updated: 2023/07/22 08:53:07 by rmesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	rest;

	i = 0;
	sign = 1;
	rest = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		rest *= 10;
		rest += (str[i] - 48);
		i++;
	}
	rest *= sign;
	return (rest);
}
