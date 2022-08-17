# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 11:26:02 by rschleic          #+#    #+#              #
#    Updated: 2022/08/17 11:26:25 by rschleic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FLAGS += -g

SRC = main.cpp ClapTrap.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all