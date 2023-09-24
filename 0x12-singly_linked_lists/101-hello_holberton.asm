    global main
    extern printf
main:
    push rbp
    mov rdi, hello_msg
    call printf
    pop rbp
    ret
format:
    hello_msg db `Hello, Holberton\n`,0


