section .text
	global ft_strlen

ft_strlen:
	xor rcx, rcx

ft_strlen_next:
	cmp [rdi+rcx], byte 0
	jz ft_strlen_null
	inc rcx
	jmp ft_strlen_next

ft_strlen_null:
	mov rax, rcx
	ret
