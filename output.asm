section .bss
    t0 resd 1
    t1 resd 1
    t2 resd 1
    x resd 1
    y resd 1
    result resd 1

section .text
    global _start
_start:
    mov eax, 3
    mov [t0], eax
    mov eax, 2
    mov [t1], eax
L0:
    mov eax, [x]
    cmp eax, [y]
    setg al
    movzx eax, al
    mov [t2], eax
    cmp [t2], 0
    je L1
    push ["hello world"]
    push [result]
    call printf
    add esp, 4
GoTo L0:
L1:
    mov eax, 1
    int 0x80
