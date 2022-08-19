# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 11:26:02 by rschleic          #+#    #+#              #
#    Updated: 2022/08/19 14:20:19 by rschleic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondtrap

CC = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

FLAGS += -g

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all