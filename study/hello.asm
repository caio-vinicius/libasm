; hello.asm
;
; Author: Caio Vinicius
; Date: 23/07/2019

global _start

section .text:

_start:
	mov eax, 0x4				; use write syscall
	mov ebx, 1					; stdout
	mov ecx, message			; buf
	mov edx, message_length		; length
	int 0x80					; syscall

	mov eax, 0x1				; use exit syscall
	mov ebx, 42					; exit code
	int 0x80					; syscall


section .data:
	message: db "Hello World!", 0xA
	message_length equ $-message
