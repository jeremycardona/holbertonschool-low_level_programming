default rel

section .rodata
msg: db "Hello, World\n", 0

section .text
global hello
hello:
    lea rax, [msg]
    ret

%ifidn __OUTPUT_FORMAT__,elf64
section .note.GNU-stack noalloc noexec nowrite progbits
%endif

