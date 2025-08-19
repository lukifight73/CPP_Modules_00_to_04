# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 15:05:53 by lbenatar          #+#    #+#              #
#    Updated: 2025/03/25 14:24:08 by lbenatar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

YO      = c++
CFLAGS  = -Wall -Werror -Wextra -std=c++98
NAME	= animal
SRC	= Animal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Dog.cpp \
		Cat.cpp \
		main.cpp \

OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(YO) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
