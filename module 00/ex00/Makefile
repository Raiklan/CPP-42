# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saich <saich@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 16:33:52 by saich             #+#    #+#              #
#    Updated: 2022/05/05 21:01:03 by saich            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

OBJS =	./megaphone.o

SRC =	./megaphone.cpp

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
