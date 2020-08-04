section .text
	global ft_strdup
	extern ft_strlen
	extern ft_strcpy
	extern malloc
	extern __errno_location

ft_strdup:
	push rdi
	call ft_strlen
	add rax, 1
	mov rdi, rax
	call malloc
	jz ft_strdup_error
	mov rdi, rax
	pop rsi
	call ft_strcpy
	ret

ft_strdup_error:
	neg rax
	push rax
	call __errno_location
	pop rbx
	mov [rax], rbx
	mov rax, '\0'
	ret
