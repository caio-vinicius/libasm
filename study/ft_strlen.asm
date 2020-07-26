; ft_strlen.asm
; Author: Caio Vinicius
; 24/07/2019


section .text:
	global ft_strlen

ft_strlen:
	push	rbp
	mov		rbp, rsp
	push	rbx

	mov		rbx, [rbp+8]
	mov		rax, rbx
	sub		rax, 2

	pop		rbx
	mov		rsp, rbp
	pop		rbp
	ret
