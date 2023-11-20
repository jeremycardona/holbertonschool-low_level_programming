section .data
	msg db "Hello, World\n", 10

	section .text
	global hello
hello:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 10
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
