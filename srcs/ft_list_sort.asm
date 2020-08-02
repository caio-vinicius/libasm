section .text
	global ft_list_sort
	extern ft_list_size

; rdi <-- pointer to pointer
; [rdi] <-- pointer to first struct on list
; [rdi+8] <-- address next struct on list

ft_list_sort:
	push rdi
	mov rdi, [rdi]
	call ft_list_size
	pop rdi
	mov rdi, [rdi]
	mov rbx, rdi
	mov rdx, [rdi+8]
	xor rcx, rcx
	mov r8, rsi

ft_list_sort_next:
	push rax
	cmp rcx, rax
	jg ft_list_sort_null

	mov rdi, [rbx]
	mov rsi, [rdx]
	call r8

	cmp rax, 0
	jl ft_list_sort_change

	mov rbx, [rbx+8]
	mov rdx, [rbx+8]
	inc rcx
	pop rax
	jmp ft_list_sort_next

ft_list_sort_change:
	mov rax, rbx
	ret
	mov rbp, qword[rbx]
	mov rbx, qword[rdx]
	mov rdx, qword[rbp]

ft_list_sort_null:
	mov rax, rdx
	ret
