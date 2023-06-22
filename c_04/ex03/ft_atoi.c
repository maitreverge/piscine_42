/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:03:06 by fverge            #+#    #+#             */
/*   Updated: 2023/06/22 10:48:39 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (0);
	else
		return (1);
}

int	plus_minus(char c)
{
	if (c == '+' || c == '-')
		return (0);
	else
		return (1);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	polarity;
	int	result;

	i = 0;
	polarity = 1;
	result = 0;
	while (is_space(str[i]) == 0)
		i++;
	while (plus_minus(str[i]) == 0)
	{
		if (str[i] == '-')
			polarity = (polarity * -1);
		i++;
	}
	while (is_number(str[i]) == 0)
	{
		result = (10 * result) + (str[i] - 48);
		i++;
	}
	return (polarity * result);
}
