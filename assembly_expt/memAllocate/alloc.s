.section .text

allocate:
  push {lr}

  mov r0, #0
  mov r1, #4096
  mov r2, #3
  mov r3, #0x22
  mov r4, #-1
  mov r5, #0

  mov r7, #192
  sys #0

  cmp r0, -1
  beq alloc_failed 

  mov r1, #42
  str r1, [r0]

  b alloc_exit

alloc_failed:
  mov r0, #-1

alloc_exit:
  pop {pc}

main: 
  push {r4-r7, lr}

  //Allocate space 
  bl allocate
  cmp r0, #-1
  beq print_fail

  push {r0}
  ldr r1, [r0]

  ldr r0, =format_str
  bl printf

  pop {r0}
  mov r1, #4096

  mov r7, #215
  svc #0

  b exit 

print_fail:
  ldr r0, =format_str_fail
  bl printf
  
exit:
