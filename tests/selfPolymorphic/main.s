	.file	"main.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN1PD2Ev,"axG",@progbits,_ZN1PD5Ev,comdat
	.align 2
	.weak	_ZN1PD2Ev
	.type	_ZN1PD2Ev, @function
_ZN1PD2Ev:
.LFB1384:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1P+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movl	$0, %eax
	testl	%eax, %eax
	je	.L1
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1384:
	.size	_ZN1PD2Ev, .-_ZN1PD2Ev
	.weak	_ZN1PD1Ev
	.set	_ZN1PD1Ev,_ZN1PD2Ev
	.section	.text._ZN1PD0Ev,"axG",@progbits,_ZN1PD5Ev,comdat
	.align 2
	.weak	_ZN1PD0Ev
	.type	_ZN1PD0Ev, @function
_ZN1PD0Ev:
.LFB1386:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1PD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1386:
	.size	_ZN1PD0Ev, .-_ZN1PD0Ev
	.section	.text._ZN1PC2Ev,"axG",@progbits,_ZN1PC5Ev,comdat
	.align 2
	.weak	_ZN1PC2Ev
	.type	_ZN1PC2Ev, @function
_ZN1PC2Ev:
.LFB1390:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1P+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1390:
	.size	_ZN1PC2Ev, .-_ZN1PC2Ev
	.weak	_ZN1PC1Ev
	.set	_ZN1PC1Ev,_ZN1PC2Ev
	.section	.text._ZN1CC2Ev,"axG",@progbits,_ZN1CC5Ev,comdat
	.align 2
	.weak	_ZN1CC2Ev
	.type	_ZN1CC2Ev, @function
_ZN1CC2Ev:
.LFB1392:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1PC2Ev
	movl	$_ZTV1C+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1392:
	.size	_ZN1CC2Ev, .-_ZN1CC2Ev
	.weak	_ZN1CC1Ev
	.set	_ZN1CC1Ev,_ZN1CC2Ev
	.text
	.align 2
	.globl	_ZN1P6rebaseEPS_
	.type	_ZN1P6rebaseEPS_, @function
_ZN1P6rebaseEPS_:
.LFB1387:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
#APP
# 18 "main.cpp" 1
	#There is not actually a memory leak here
# 0 "" 2
#NO_APP
	cmpq	$0, -32(%rbp)
	je	.L7
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
.L7:
	movl	$8, %edi
	call	_Znwm
	movq	%rax, %rbx
	movq	$0, (%rbx)
	movq	%rbx, %rdi
	call	_ZN1CC1Ev
	movq	%rbx, -32(%rbp)
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1387:
	.size	_ZN1P6rebaseEPS_, .-_ZN1P6rebaseEPS_
	.section	.rodata
.LC0:
	.string	"P"
	.text
	.align 2
	.globl	_ZN1P5printEv
	.type	_ZN1P5printEv, @function
_ZN1P5printEv:
.LFB1394:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1394:
	.size	_ZN1P5printEv, .-_ZN1P5printEv
	.section	.rodata
.LC1:
	.string	"C"
	.text
	.align 2
	.globl	_ZN1C5printEv
	.type	_ZN1C5printEv, @function
_ZN1C5printEv:
.LFB1395:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1395:
	.size	_ZN1C5printEv, .-_ZN1C5printEv
	.globl	main
	.type	main, @function
main:
.LFB1396:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	$8, %edi
	call	_Znwm
	movq	%rax, %rbx
	movq	$0, (%rbx)
	movq	%rbx, %rdi
	call	_ZN1PC1Ev
	movq	%rbx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
.L11:
	movq	-24(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN1P6rebaseEPS_
	jmp	.L11
	.cfi_endproc
.LFE1396:
	.size	main, .-main
	.weak	_ZTV1C
	.section	.rodata._ZTV1C,"aG",@progbits,_ZTV1C,comdat
	.align 8
	.type	_ZTV1C, @object
	.size	_ZTV1C, 40
_ZTV1C:
	.quad	0
	.quad	_ZTI1C
	.quad	_ZN1C5printEv
	.quad	_ZN1CD1Ev
	.quad	_ZN1CD0Ev
	.section	.text._ZN1CD2Ev,"axG",@progbits,_ZN1CD5Ev,comdat
	.align 2
	.weak	_ZN1CD2Ev
	.type	_ZN1CD2Ev, @function
_ZN1CD2Ev:
.LFB1586:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1C+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1PD2Ev
	movl	$0, %eax
	testl	%eax, %eax
	je	.L12
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1586:
	.size	_ZN1CD2Ev, .-_ZN1CD2Ev
	.weak	_ZN1CD1Ev
	.set	_ZN1CD1Ev,_ZN1CD2Ev
	.section	.text._ZN1CD0Ev,"axG",@progbits,_ZN1CD5Ev,comdat
	.align 2
	.weak	_ZN1CD0Ev
	.type	_ZN1CD0Ev, @function
_ZN1CD0Ev:
.LFB1588:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1CD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1588:
	.size	_ZN1CD0Ev, .-_ZN1CD0Ev
	.weak	_ZTV1P
	.section	.rodata._ZTV1P,"aG",@progbits,_ZTV1P,comdat
	.align 8
	.type	_ZTV1P, @object
	.size	_ZTV1P, 40
_ZTV1P:
	.quad	0
	.quad	_ZTI1P
	.quad	_ZN1P5printEv
	.quad	_ZN1PD1Ev
	.quad	_ZN1PD0Ev
	.weak	_ZTI1C
	.section	.rodata._ZTI1C,"aG",@progbits,_ZTI1C,comdat
	.align 8
	.type	_ZTI1C, @object
	.size	_ZTI1C, 24
_ZTI1C:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1C
	.quad	_ZTI1P
	.weak	_ZTS1C
	.section	.rodata._ZTS1C,"aG",@progbits,_ZTS1C,comdat
	.type	_ZTS1C, @object
	.size	_ZTS1C, 3
_ZTS1C:
	.string	"1C"
	.weak	_ZTI1P
	.section	.rodata._ZTI1P,"aG",@progbits,_ZTI1P,comdat
	.align 8
	.type	_ZTI1P, @object
	.size	_ZTI1P, 16
_ZTI1P:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1P
	.weak	_ZTS1P
	.section	.rodata._ZTS1P,"aG",@progbits,_ZTS1P,comdat
	.type	_ZTS1P, @object
	.size	_ZTS1P, 3
_ZTS1P:
	.string	"1P"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1589:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L17
	cmpl	$65535, -8(%rbp)
	jne	.L17
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L17:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1589:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN1P6rebaseEPS_, @function
_GLOBAL__sub_I__ZN1P6rebaseEPS_:
.LFB1590:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1590:
	.size	_GLOBAL__sub_I__ZN1P6rebaseEPS_, .-_GLOBAL__sub_I__ZN1P6rebaseEPS_
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN1P6rebaseEPS_
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
