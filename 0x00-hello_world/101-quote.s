	.file	"101-quote.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$59, %edx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	call	write@PLT
	movl	$1, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
