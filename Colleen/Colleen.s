; section .data
; 	filename db "Colleen.s", 0
; 	buffer times 4096 db 0

; section .text
; 	global _main
; 	global mandatory_function

; ; 

; _main:
; 	lea rdi, [rel filename]
; 	xor rsi, rsi
; 	mov rax, 0x2000005
; 	syscall

; 	mov rdi, rax
; 	lea rsi, [rel buffer]
; 	mov rdx, 4096
; 	mov rax, 0x2000003
; 	syscall

; 	mov rdx, rax
; 	mov rdi, 1
; 	lea rsi, [rel buffer]
; 	mov rax, 0x2000004
; 	call mandatory_function

; 	mov rax, 0x2000001
; 	xor rdi, rdi
; 	syscall


; mandatory_function:
; 	push rbp
; 	mov rbp, rsp

; 	syscall

; 	mov rsp, rbp
; 	pop rbp
; 	ret

section .data
	; Data section contains the string to be printed
	code db 'section .data', 10
		 db '	code db ', 39, '%s', 39, ', 0', 10
		 db 'section .text', 10
		 db '	global _main', 10
		 db '_main:', 10
		 db '	mov rax, 1', 10
		 db '	mov rdi, 1', 10
		 db '	lea rsi, [rel code]', 10
		 db '	mov rdx, 114', 10
		 db '	syscall', 10
		 db '	mov rax, 60', 10
		 db '	xor rdi, rdi', 10
		 db '	syscall', 10
		 db 0

section .text
	global _main

_main:
	mov rax, 0x2000004
	mov rdi, 1
	lea rsi, [rel code]
	mov rdx, 197
	syscall

	mov rax, 0x2000001
	xor rdi, rdi
	syscall