section .data
	message  db 'Hello, Holberton', 0Ah ; message to print and a new line

section .text
	global main

	extern printf

main:
	sub rsp, 8	; Allocate space on the stack for printf's arguments
	lea rdi, [message]	; Load the addressof the message
	call printf	; call printf with message as argument
	add rsp, 8	; clean up stack
	xor eax, eax	; return 0
	ret
