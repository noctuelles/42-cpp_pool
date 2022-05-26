# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 18:35:54 by plouvel           #+#    #+#              #
#    Updated: 2022/05/26 11:05:06 by plouvel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

STD		=	c++98

CFLAGS	=	-Wall -Werror -Wextra -std=$(STD)

SRCS	=	Account.cpp tests.cpp

NAME	=	account_tests

RM		=	rm -rf

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

.PHONY:		clean
