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
	li	a5,1   //load immediate a5 e 1 atıyor
	ble	a1,a5,.L1  //branch if less than or equal - a5 içindeki a1 dekinden küçük ya da eşitse atlıycak
	slli	a1,a1,2   //shift logically left immediate  
	add	a1,a0,a1  //a1 ile a0 topla a1 e yaz
	addi	a0,a0,4   // pc 4 arttır
.L5:
	mv	a5,a0  //a0 ı a5 e kopyala
	li	a2,0   //a2 ye 0 ata
.L4:
	lw	a4,-4(a5)  //a5 -4 adresindeki degeri a4 e taşı
	lw	a3,0(a5)   //a5 adresindeki değeri a3 e taşı
	ble	a4,a3,.L3  //a3 a4 ten küçükse atlıycak
	sw	a3,-4(a5)  // a3 teki degeri a5-4 e yaz
	sw	a4,0(a5)   //a4 teki degeri a5 + 0 yaz
	addi	a2,a2,1    // a2 ye +1 ekle
.L3:
	addi	a5,a5,4    // a5 e 4 ekle
	bne	a5,a1,.L4   //branch if not equal  
	bne	a2,zero,.L5  //branch if a2 0 a eşit değise
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
	sub	a5,a5,a4
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
	lw	a5,0(a0)    //a0 + 0 içindeki değeri a5 e taşı  
	lw	a4,0(a1)    //a1 + 0 içindeki değeri a4 e taşı
 #APP
# 31 "bubble_sort.c" 1
	.insn r 0x33, 7, 20, a5, a5, a4 

# 0 "" 2
 #NO_APP
	sw	a5,0(a0) //a5 teki degeri a0 + 0 a yaz
	ret
	.size	custom_func, .-custom_func
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-16  
	li	a5,10  //a5 e 10 yaz
	li	a4,5    //a4 e 5 yaz
 #APP
# 31 "bubble_sort.c" 1
	.insn r 0x33, 7, 20, a5, a5, a4 

# 0 "" 2
 #NO_APP
	li	a4,8192
	sw	a5,16(a4)
	li	a0,0
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.ident	"GCC: (g2ee5e430018) 12.2.0"
