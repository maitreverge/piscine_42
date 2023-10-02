/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prog.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:27:28 by flverge           #+#    #+#             */
/*   Updated: 2023/07/30 17:30:15 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "librush.h"

void	dictionary_to_buff(struct s_read s)
{
	int	fd;
	int	i_read;

	i_read = -1;
	fd = open("test", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("!! Failed Dictionary openning !!");
		return ;
	}
	i_read = read(fd, s.buffer, sizeof(BUFF_MAX) - 1);
	if (i_read == -1)
	{
		ft_putstr("!! Failed Dictionary reading !!");
		return ;
	}
	s.buffer[i_read] = '\0';
	close (fd);
}

void	b_to_tab2(struct s_read read, struct s_doubletab dt, int *i, int *l)
{
	int	m;

	m = 0;
	while (read.buffer[*i] != '\n')
	{
		dt.c_nb[*l][m] = read.buffer[*i];
		m++;
		(*i)++;
	}
	dt.c_nb[*l][m] = '\0';
	(*l)++;
}

void	b_to_tab1(struct s_read read, struct s_doubletab dt, int *i, int *j)
{
	int	k;

	k = 0;
	while (is_number(read.buffer[*i]) == 1)
	{
		dt.nb[*j][k] = read.buffer[*i];
		k++;
		(*i)++;
	}
	dt.nb[*j][k] = '\0';
	while (is_skip(read.buffer[*i]) == 1)
		(*i)++;
	(*j)++;
}

void	master_copy_tab(struct s_read read, struct s_doubletab dt)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	l = 0;
	dictionary_to_buff(read);
	while (read.buffer[i] != '\0')
	{
		b_to_tab1(read, dt, &i, &j);
		b_to_tab2(read, dt, &i, &l);
		i++;
	}
}
