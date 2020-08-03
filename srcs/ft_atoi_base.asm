section .text
	global ft_atoi_base

ft_atoi_base:
	xor rax, rax
	mov rbx, 1

ft_atoi_base_next:
	cmp [rdi], byte 0
	je ft_atoi_base_null
	movzx rdx, byte [rdi]
	cmp rdx, ' '
	je ft_isspace
	cmp rdx, '-'
	je ft_signal
	cmp rdx, '0'
	jl ft_atoi_base_error
	cmp rdx, '9'
	jg ft_atoi_base_error
	sub rdx, '0'
	imul rax, rsi
	add rax, rdx
	inc rdi
	jmp ft_atoi_base_next

ft_atoi_base_null:
	imul rax, rbx
	ret

ft_isspace:
	inc rdi
	jmp ft_atoi_base_next

ft_signal:
	neg rbx
	inc rdi
	jmp ft_atoi_base_next

ft_atoi_base_error:
	mov rax, -1
	ret
