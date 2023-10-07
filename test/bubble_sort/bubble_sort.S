	.file	"bubble_sort.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text.custom_func,"ax",@progbits
	.align	2
	.globl	custom_func
	.type	custom_func, @function
custom_func:
 #APP
# 29 "bubble_sort.c" 1
	.insn r 0x33, 0, 0, a0, a0, a1 

# 0 "" 2
 #NO_APP
	ret
	.size	custom_func, .-custom_func
	.section	.text.addArrays,"ax",@progbits
	.align	2
	.globl	addArrays
	.type	addArrays, @function
addArrays:
	ble	a2,zero,.L3
	li	a5,0
.L5:
 #APP
# 29 "bubble_sort.c" 1
	.insn r 0x33, 0, 0, a4, a0, a1 

# 0 "" 2
 #NO_APP
	addi	a5,a5,1
	addi	a0,a0,4
	addi	a1,a1,4
	bne	a2,a5,.L5
.L3:
	ret
	.size	addArrays, .-addArrays
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-16
	mv	a5,sp
	addi	a4,sp,8
 #APP
# 29 "bubble_sort.c" 1
	.insn r 0x33, 0, 0, a5, a5, a4 

# 0 "" 2
 #NO_APP
	addi	a5,sp,4
	addi	a4,sp,12
 #APP
# 29 "bubble_sort.c" 1
	.insn r 0x33, 0, 0, a5, a5, a4 

# 0 "" 2
 #NO_APP
	li	a5,8192
	li	a4,15
	sw	a4,16(a5)
	li	a0,0
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.ident	"GCC: (g2ee5e430018) 12.2.0"
