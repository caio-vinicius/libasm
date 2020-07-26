# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.asm                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caio <csouza-f@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/26 19:29:50 by caio              #+#    #+#              #
#    Updated: 2020/07/26 19:29:52 by caio             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global ft_strlen

ft_strlen:
	mov rcx, 0

ft_strlen_next:
	cmp [rdi+rcx], byte 0
	jz ft_strlen_null
	add rcx, 1
	jmp ft_strlen_next

ft_strlen_null:
	mov rax, rcx
	ret
