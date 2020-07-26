section .text
	global ft_write

ft_write:
	mov rax, 0x4
	mov rbx, rdi
	mov rcx, rsi
	mov rdx, rdx
	int 0x80
	ret
