# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caio <csouza-f@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/28 11:39:04 by caio              #+#    #+#              #
#    Updated: 2020/08/03 20:59:49 by caio             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJS = $(patsubst %.s, build/%.o, $(SRCS))

TEST = $(patsubst %.s, srcs/test/test_%.c, $(SRCS))

VPATH = srcs/

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

build/%.o: %.s
	nasm -f elf64 $< -o $@

test: $(NAME) $(TEST)
	clang -Wall -Wextra -Werror -no-pie $(TEST) main.c $< -I includes/ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf test
	rm -rf $(NAME)

re: fclean all test

.PHONY: test clean fclean re
