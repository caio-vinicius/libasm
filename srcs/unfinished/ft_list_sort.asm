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
	sub rax, 1
	pop rdi
	mov rdi, [rdi]
	mov rbx, rdi
	mov rdx, [rdi+8]
	xor r9, r9
	mov r8, rsi

ft_list_sort_next:
	;cmp r9, rax
	;jg ft_list_sort_null

	push rax

	mov rdi, [rbx]
	mov rsi, [rdx]
	call r8

	cmp rax, 0
	jl ft_list_sort_change

	mov rbx, [rbx+8]
	mov rdx, [rbx+8]

	inc r9
	pop rax

	; ;

	;cmp r9, rax
	;jg ft_list_sort_null

	push rax

	mov rdi, [rbx]
	mov rsi, [rdx]
	call r8

	cmp rax, 0
	jl ft_list_sort_change

	mov rbx, [rbx+8]
	mov rdx, [rbx+8]

	inc r9
	pop rax

	; ;

	;cmp r9, rax
	;jg ft_list_sort_null

	push rax

	mov rdi, [rbx]
	mov rsi, [rdx]
	call r8

	cmp rax, 0
	jl ft_list_sort_change

	mov rbx, [rbx+8]
	mov rdx, [rbx+8]

	inc r9
	pop rax

	; ;

	sub rax, 1

	jmp ft_list_sort_next

ft_list_sort_change:
	pop rax
	mov rax, 42
	ret
	mov rbp, [rbx]
	mov rbx, [rdx]
	mov rdx, rbp

ft_list_sort_null:
	sub rax, 1
	jmp ft_list_sort_next
