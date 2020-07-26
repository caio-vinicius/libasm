section .text
	global jmp_cmp

jmp_cmp:
	mov eax, 3
	cmp eax, 4
	jl jmp_cmp2
	ret

jmp_cmp2:
	mov eax, 4
	ret
