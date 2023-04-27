section .data
    msg db 'Hello, Holberton',0x0A,0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp
    
    lea rdi, [msg]
    mov eax, 0
    call printf
    
    mov rsp, rbp
    pop rbp
    
    mov eax, 0
    ret
