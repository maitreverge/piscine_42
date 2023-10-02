# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraverdy <lraverdy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 17:04:25 by flverge           #+#    #+#              #
#    Updated: 2023/07/23 19:00:55 by flverge          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SOURCES = ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_split_argv.c ft_strlen.c \
          main_test.c ft_check.c ft_checksolver.c ft_print.c auto_completer_solver.c \
          solver.c trial_solver.c

OBJECTS = $(SOURCES:.c=.o)

TARGET = rush-01

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET) $(ARGS)

.PHONY: run
