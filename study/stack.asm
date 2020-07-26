section .text
	global stack

stack:
	mov rax, 17
	push rax
	call stack2
	pop rax
	ret

stack2:
	mov rax, 18
	ret

