section .text
	global ft_write

ft_write:
	mov rax, 1
	syscall
	cmp rax, 0
	jl ft_write_error
	ret

ft_write_error:
	mov rax, -1
	ret
