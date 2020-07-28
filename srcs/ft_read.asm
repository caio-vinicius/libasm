section .text
	global ft_read

ft_read:
	mov rax, 0
	syscall
	cmp rax, 0
	jl ft_read_error
	ret

ft_read_error:
	mov rax, -1
	ret

