section .text
	global loop

loop:
	mov eax, 0
	mov ecx, 2

start:
	add eax, 10
	sub ecx, 1
	cmp ecx, 0
	jg start
	ret

