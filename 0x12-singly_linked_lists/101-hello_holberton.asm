global main
main:
mov rdi, msg
mov rsi, 0
mov al, 0
extern printf
call printf
mov eax, 0
ret
msg: db "Hello, Holberton", 10, 0
