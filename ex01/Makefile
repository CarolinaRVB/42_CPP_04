# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 23:40:31 by crebelo-          #+#    #+#              #
#    Updated: 2024/07/06 10:43:35 by crebelo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex01

SRC := Animal.cpp \
 	   Cat.cpp \
	   Dog.cpp \
	   Brain.cpp \
	   WrongAnimal.cpp \
 	   WrongCat.cpp \
	   WrongDog.cpp \
	   main.cpp 

OBJ := $(SRC:.cpp=.o)

CC := c++

CFLAGS := -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

GREEN := \033[0;32m

all: $(OBJ) $(NAME)

$(OBJ): %.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(GREEN) Compiling ex01 ... "
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN) Done! "

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.phony: all clean fclean re