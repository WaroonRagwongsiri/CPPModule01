# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/25 14:04:44 by waroonwork@       #+#    #+#              #
#    Updated: 2026/01/26 21:48:04 by waroonwork@      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	program_name

CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -g3 -std=c++98
SUFFIX		:=	.cpp

INC_DIR		:=	./
SRCS_DIR	:=	./

SRCS_FILES	:=	main

SRCS		:=	$(addsuffix $(SUFFIX), $(addprefix $(SRCS_DIR), $(SRCS_FILES)))
OBJS		:=	$(SRCS:%$(SUFFIX)=%.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)	Makefile
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) $(OBJS) -o $(NAME)

%.o			:	%$(SUFFIX)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -c $< -o $@

clean		:
	rm -rf $(OBJS)

fclean		:	clean
	rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re