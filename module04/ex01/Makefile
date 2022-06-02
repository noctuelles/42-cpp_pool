# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 18:35:54 by plouvel           #+#    #+#              #
#    Updated: 2022/06/02 23:52:27 by plouvel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS_DIR	=	objs

CC			=	c++

STD			=	c++98

CFLAGS		=	-Wall -Werror -Wextra -MD -std=$(STD) -g3

SRCS		=	Animal.cpp      \
				Dog.cpp         \
				Cat.cpp         \
				Brain.cpp       \
				main.cpp       

OBJS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

DEPS		=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.d))

NAME		=	catndog

RM			=	rm -rf

$(NAME):		$(OBJS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(OBJS_DIR)/%.o:./%.cpp
				@mkdir -p $(dir $@)
				$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

-include $(DEPS)

.PHONY:			all clean fclean re
