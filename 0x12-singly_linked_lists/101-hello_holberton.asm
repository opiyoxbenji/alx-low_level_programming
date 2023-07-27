section .data
	hello_msg db "Hello, Holberton,", 0
	format db "%s\n", 0

section .text
	global main
	extern printf

main:
	; Set up stack frame
	push rbp
	mov rbp, rsp

	; Prepare arguments for printf
	lea rdi, [format]	; Load format string address into rdi
	lea rsi, [hello_msg	; Load message address into rsi

	; Call printf
	call printf

	; Restore stack frame and return
	mov rsp, rbp
	pop rbp
	ret
