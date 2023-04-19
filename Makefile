# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssergiu <ssergiu@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 16:42:02 by ssergiu           #+#    #+#              #
#    Updated: 2023/04/19 13:17:13 by ssergiu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=build/%.o)

OBJ_DIR = build
INC = include

all: $(OBJ_DIR) $(NAME) $(INC)

$(NAME): $(OBJ)
	$(AR) $(NAME) $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

build/%.o: src/%.c
	$(CC) $(FLAGS) -I$(INC) -c $< -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:bonus all clean fclean re
