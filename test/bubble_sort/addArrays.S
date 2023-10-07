	.file	"bubble_sort.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text.bubble_sort,"ax",@progbits
	.align	2
	.globl	bubble_sort
	.type	bubble_sort, @function
bubble_sort:
	li	a5,1
	ble	a1,a5,.L1
	slli	a1,a1,2
	add	a1,a0,a1
	addi	a0,a0,4
.L5:
	mv	a5,a0
	li	a2,0
.L4:
	lw	a4,-4(a5)
	lw	a3,0(a5)
	ble	a4,a3,.L3
	sw	a3,-4(a5)
	sw	a4,0(a5)
	addi	a2,a2,1
.L3:
	addi	a5,a5,4
	bne	a5,a1,.L4
	bne	a2,zero,.L5
.L1:
	ret
	.size	bubble_sort, .-bubble_sort
	.section	.text.addArrays,"ax",@progbits
	.align	2
	.globl	addArrays
	.type	addArrays, @function
addArrays:
	ble	a2,zero,.L10
	slli	a2,a2,2
	add	a3,a0,a2
.L12:
	lw	a5,0(a0)
	lw	a4,0(a1)
	addi	a0,a0,4
	addi	a1,a1,4
	add	a5,a5,a4
	sw	a5,-4(a0)
	bne	a0,a3,.L12
.L10:
	ret
	.size	addArrays, .-addArrays
	.section	.text.custom_func,"ax",@progbits
	.align	2
	.globl	custom_func
	.type	custom_func, @function
custom_func:
	ble	a2,zero,.L14
	li	a4,0
.L16:
	lw	a5,0(a0)
	lw	a3,0(a1)
 #APP
# 32 "bubble_sort.c" 1
	.insn r 0x33, 0x7, 0x20, a5, a5, a3 

# 0 "" 2
 #NO_APP
	sw	a5,0(a0)
	addi	a4,a4,1
	addi	a0,a0,4
	addi	a1,a1,4
	bne	a2,a4,.L16
.L14:
	ret
	.size	custom_func, .-custom_func
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.type	main, @function
main:
	li	a5,8192
	li	a4,15
	sw	a4,16(a5)
	li	a0,0
	ret
	.size	main, .-main
	.ident	"GCC: (g2ee5e430018) 12.2.0"
