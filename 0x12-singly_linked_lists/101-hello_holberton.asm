global main
msg: db "Hello, Holberton", 10, 0
main:
mov rdi, msg
mov al, 0
extern printf
call printf
mov eax, 0
ret
