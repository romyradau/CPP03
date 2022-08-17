# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 11:26:02 by rschleic          #+#    #+#              #
#    Updated: 2022/08/17 16:57:15 by rschleic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FLAGS += -g

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all