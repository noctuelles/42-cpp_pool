# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 18:35:54 by plouvel           #+#    #+#              #
#    Updated: 2022/05/26 13:53:53 by plouvel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

STD		=	c++98

CFLAGS	=	-Wall -Werror -Wextra -std=$(STD)

SRCS	=	main.cpp        \
			Zombie.cpp      \
			newZombie.cpp   \
			randomChump.cpp

NAME	=	zombie_testing

RM		=	rm -rf

$(NAME):	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

.PHONY:		clean
