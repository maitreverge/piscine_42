/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   librush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 08:50:30 by flverge           #+#    #+#             */
/*   Updated: 2023/07/30 19:29:12 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRUSH_H
# define LIBRUSH_H

# define INDEX_TAB1 60
# define INDEX_TAB2 60
# define BUFF_MAX 8000

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_read {
	char	buffer[BUFF_MAX];
}	t_read;

typedef struct s_doubletab {
	char	nb[INDEX_TAB1][INDEX_TAB2];
	char	c_nb[INDEX_TAB1][INDEX_TAB2];
}	t_doubletab;

void	master_copy_tab(struct s_read read, struct s_doubletab dt);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	master_print(char **result);
char	*ft_strcpy(char *dest, char *src);
char	*ft_itoa(int n);
char	**transform_number(char *argv, struct s_doubletab, struct s_read);
char	*ft_strjoin(int size, char **strs, char *sep);
int		is_skip(char c);
int		verif_error_nb(char *argv);
int		ft_strlen(char **str);
int		ft_strstr(char *str, char *to_find);
int		is_number(char c);
int		ft_atoi(char *str);
#endif
