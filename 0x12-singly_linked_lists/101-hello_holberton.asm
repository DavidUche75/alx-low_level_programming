section .data
    hello_msg db "Hello, Holberton",10,0   ; Message to be printed with newline character

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello_msg
    call printf
    pop rbp
    ret

