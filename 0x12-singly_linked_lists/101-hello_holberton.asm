section .data
    format db 'Hello, Holberton', 10, 0  ; 10 is the ASCII code for newline

section .text
    global main
    extern printf

main:
    mov edi, format
    xor eax, eax
    call printf
    xor eax, eax   ; equivalent to "mov eax, 0"
    ret
