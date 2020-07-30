section .text
	global ft_list_size

ft_list_size:
	xor rax, rax

ft_list_size_next:
	cmp rdi, 0
	je ft_list_size_null
	inc rax
	mov rdi, [rdi+8]
	jmp ft_list_size_next

ft_list_size_null:
	ret
