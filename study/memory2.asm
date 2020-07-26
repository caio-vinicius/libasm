section .text
	global memory2

memory3:
	ret

memory2:
	mov rdx, memory3
	jmp memory3
	push 3			; put 3 on top of stack
	mov rax, [rsp]	; rsp points to top of stack, so i will get 3
	pop rdx			; clean-up rdx
	ret
