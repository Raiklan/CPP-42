# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saich <saich@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 16:53:22 by saich             #+#    #+#              #
#    Updated: 2022/05/10 16:53:26 by saich            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	complain
CC		=	c++
RM		=	rm -rf
SRCS	=	main.cpp Harl.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
INCL	=	.

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $@ -I$(INCL)

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o) -I$(INCL)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re, all, clean, fclean
