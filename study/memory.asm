section .text
	global memory

memory2:
	dq 3

memory:
	;mov rax, [memory2]	; read memory on this label
	;mov rax, memory2	; read address on this label
	mov rax, [4198304]	; read memory on this addres
	mov rax, [0x400FA0]
	ret
