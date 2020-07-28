section .text
	global ft_strcmp

ft_strcmp:
	mov r15b, [rsi]
	cmp [rdi], r15b
	jne ft_strcmp_null
	cmp byte [rdi], 0
	je ft_strcmp_null
	cmp byte [rsi], 0
	je ft_strcmp_null
	inc rdi
	inc rsi
	jmp ft_strcmp

ft_strcmp_null:
	mov rax, [rdi]
	sub rax, [rsi]
	ret

