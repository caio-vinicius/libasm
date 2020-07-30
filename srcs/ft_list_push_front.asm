section .text
	global ft_list_push_front

ft_list_push_front:
	mov rbx, [rdi]
	mov [rdx+8], rbx
	mov rbx, rsi
