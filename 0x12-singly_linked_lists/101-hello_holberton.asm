global main
extern printf

section .data
message db "Hello, Holberton", 0
format db "%s\n", 0

section .text
main:
	push rbp
	mov rbp, rsp

	mov rdi, format
	mov rsi, message
	xor rax, rax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret
