# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caio <csouza-f@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/28 11:39:04 by caio              #+#    #+#              #
#    Updated: 2020/07/29 22:55:59 by caio             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS_MANDATORY = ft_strlen.asm ft_strcpy.asm ft_strcmp.asm ft_write.asm ft_read.asm ft_strdup.asm

SRCS_BONUS = ft_atoi_base.asm

SRCS = $(SRCS_MANDATORY) $(SRCS_BONUS)

OBJS = $(patsubst %.asm, build/%.o, $(SRCS))

VPATH = srcs/

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

build/%.o: %.asm
	nasm -f elf64 $< -o $@

test: $(NAME)
	gcc -no-pie main.c $< -I includes/ 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all test

.PHONY: test clean fclean re
