
#ifdef __riscv
#define _DO_SYSCALL_ASM(sysno) asm volatile("li a7, " #sysno "; ecall; ret")
#endif

#ifdef __x86_64__
#define _DO_SYSCALL_ASM(sysno) asm volatile("mov %rcx, %r10; mov " #sysno ", %rax; syscall; ret")
#endif
