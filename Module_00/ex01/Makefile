# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 15:05:53 by lbenatar          #+#    #+#              #
#    Updated: 2025/02/28 13:00:11 by lbenatar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= PhoneBook.cpp \
		Contact.cpp \
		main.cpp

NAME	= PhoneBook

${NAME} :
		c++ -Wall -Werror -Wextra -std=c++98 ${SRC} -o ${NAME}

all : ${NAME}


clean :
		rm -f ${NAME}

fclean : clean
		rm -f ${NAME}

re : fclean all
