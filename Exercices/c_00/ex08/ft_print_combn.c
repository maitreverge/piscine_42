/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fverge <fverge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:31:49 by fverge            #+#    #+#             */
/*   Updated: 2023/06/18 17:31:54 by fverge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	lookup(char *buffer, int n)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (j < n)
	{
		if (buffer[i] >= buffer[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}

void	print(char *buffer, int n)
{
	int	k;

	k = 0;
	while (k < n)
	{
		ft_putchar(buffer[k]);
		k++;
	}
	if (buffer[0] - 48 < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	increment(char *buffer, int n)
{
	int	l;

	buffer[n - 1]++;
	l = 1;
	while (n - l != 0)
	{
		if (buffer[n - l] > '9')
		{
			buffer[n - l] = '0';
			buffer[n - l - 1]++;
		}
		l++;
	}
}

void	ft_print_combn(int n)
{
	char	buffer[10];
	int		i;

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i < n)
		{
			buffer[i] = '0';
			i++;
		}
		while (buffer[0] <= '9')
		{
			if (lookup(buffer, n) == 0)
				print(buffer, n);
			increment(buffer, n);
		}
	}
}
