/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:51:16 by fverge            #+#    #+#             */
/*   Updated: 2023/06/20 14:28:56 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_np(char c)
{
	if (c >= 0 && c <= 31)
		return (0);
	else
		return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	div;
	int	mod;

	i = 0;
	div = 0;
	mod = 0;
	if (ft_strlen(str) > 0)
	{
		while (str[i] != '\0')
		{
			if (check_np(str[i]) == 0)
			{
				div = str[i] / 16;
				mod = str[i] % 16;
				ft_putchar('\\');
				ft_putchar("0123456789abcdef" [div]);
				ft_putchar("0123456789abcdef" [mod]);
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}
