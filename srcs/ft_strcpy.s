section .text
	global ft_strcpy

ft_strcpy:
	mov rcx, 0

ft_strcpy_next:
	cmp [rsi+rcx], byte 0
	jz ft_strcpy_null
	mov rdi, rsi
	inc rcx
	jmp ft_strcpy_next

ft_strcpy_null:
	mov rax, rdi
	ret
