/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   librush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:27:58 by flverge           #+#    #+#             */
/*   Updated: 2023/07/23 23:13:48 by lraverdy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRUSH_H
# define LIBRUSH_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_check_argv(char *str);
int		ft_check(int check[4][4], int size);
int		ft_checksolver(int solved[4][4]);
void	ft_print(int tab[4][4]);
void	ft_print_in_tab(char *argv, int (*tab_int)[4][4]);
int		look_at_column(int tab[4][4], int tab_index, int size);
int		look_at_line(int tab[4][4], int tab_index, int size);
void	master_solver(int tab[4][4], int border[4][4], int size);
void	master_auto_completer(int tab[4][4], int size);
void	fill_line(int tab[4][4], int tab_index, int indice, int size);
void	fill_column(int tab[4][4], int tab_index, int indice, int size);
void	combo_fill_line(int tab[4][4], int tab_index, int *indice, int size);
void	combo_fill_column(int tab[4][4], int tab_index, int *indice, int size);

#endif
