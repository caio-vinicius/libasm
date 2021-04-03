section .text
	global ft_strcmp

ft_strcmp:
	xor rax, rax

ft_strcmp_next:
	mov al, [rdi]
	mov bl, [rsi]
	cmp byte al, 0
	je ft_strcmp_null
	cmp byte bl, 0
	je ft_strcmp_null
	cmp al, bl
	jne ft_strcmp_null
	inc rdi
	inc rsi
	jmp ft_strcmp_next

ft_strcmp_null:
	movzx rax, al
	movzx rbx, bl
	sub rax, rbx
	ret

