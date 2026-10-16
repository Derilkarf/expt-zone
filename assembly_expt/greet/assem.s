.global _start
.intel_syntax noprefix

_start:
  //sys write
  mov rax, 1
  mov rdi, 1
  lea rsi, [greet]
  mov rdx, 20
  syscall

  // sys exit
  mov rax, 60
  mov rdi, 69
  syscall

greet:
  .asciz "Eyyo wassup big dawg\n"
