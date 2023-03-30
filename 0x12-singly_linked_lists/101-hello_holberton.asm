global main
main:
mov rdi, msg
mov rsi, 0
mov al, 0

extern printf
call printf

ret
msg: db "Hello, Holberton", 10, 0
