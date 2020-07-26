section .text
	global argument

argument:
	mov edi, 7
	call argument2
	add eax, 1
	ret

argument2:
	mov eax, edi
	ret
