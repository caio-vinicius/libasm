section .text
	global jmp

jmp:
	mov eax, 7
	jmp jmp2
	mov eax, 9
	ret

jmp2:
	ret
