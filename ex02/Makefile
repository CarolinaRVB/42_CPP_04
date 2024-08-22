# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crebelo- <crebelo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 23:40:31 by crebelo-          #+#    #+#              #
#    Updated: 2024/07/08 11:51:26 by crebelo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex02

SRC := Animal.cpp \
	   AAnimal.cpp \
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
	@echo "$(GREEN) Compiling ex02 ... "
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN) Done! "

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.phony: all clean fclean re