/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:09:50 by flverge           #+#    #+#             */
/*   Updated: 2023/07/30 16:39:06 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

int	is_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int	is_plus_minus(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	polarity;
	int	result;

	i = 0;
	polarity = 1;
	result = 0;
	while (str[i])
	{
		while (is_space(str[i]) == 1)
			i++;
		while (is_plus_minus(str[i]) == 1)
		{
			if (str[i] == '-')
				polarity *= -1;
			i++;
		}
		while (is_number(str[i]) == 1)
		{
			result = ((result * 10) + (str[i] - 48));
			i++;
		}
		break ;
	}
	return (result * polarity);
}
