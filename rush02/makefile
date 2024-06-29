# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pretch <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 13:55:46 by pretch            #+#    #+#              #
#    Updated: 2024/06/09 13:55:58 by pretch           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Wextra -Werror
SOURCES = src/main.c src/ft_check.c src/ft_getnum.c src/ft_check_argument.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = rush
NAME = rush-02

all:
    echo "Building main.c with Warning flags."
    $(CC) $(CCFLAGS) $(SOURCES) -o $(NAME)

clean:
    rm -rf $(SOURCES:.c=.o)

fclean:
    clean rm $(NAME)

re: all clean