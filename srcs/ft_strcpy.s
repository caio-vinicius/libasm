section .text
	global ft_strcpy

ft_strcpy:
	mov rcx, 0

ft_strcpy_next:
	mov al, [rsi+rcx]
	mov [rdi+rcx], al
	cmp [rsi+rcx], byte 0
	jz ft_strcpy_null
	inc rcx
	jmp ft_strcpy_next

ft_strcpy_null:
	mov rax, rdi
	ret
