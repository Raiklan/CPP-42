# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saich <saich@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 17:01:06 by saich             #+#    #+#              #
#    Updated: 2022/05/05 20:59:55 by saich            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

OBJS =	./main.o \
		./Phonebook.o \
		./Contact.o \

SRC =	./main.cpp\
		./Phonebook.cpp \
		./Contact.cpp \

CC	= clang++

RM	= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g  -std=c++98

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(OBJS)

re:			fclean all

PHONY:		all clean fclean re
