# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plouvel <plouvel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 18:35:54 by plouvel           #+#    #+#              #
#    Updated: 2022/05/25 17:59:02 by plouvel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
SRCS_DIR	=	srcs

INC_DIR		=	includes

OBJS_DIR	=	objs

CC		=	c++

STD		=	c++98

CFLAGS	=	-Wall -Werror -Wextra -std=$(STD) -I $(INC_DIR)

SRCS	=	Contact.cpp   \
			PhoneBook.cpp \
			main.cpp

OBJS	=	$(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

NAME	=	my_digital_book

RM		=	rm -rf

$(NAME): $(OBJS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(OBJS_DIR)/%.o:$(SRCS_DIR)/%.cpp
				@mkdir -p $(dir $@)
				$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
