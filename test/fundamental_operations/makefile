CC32=riscv32-unknown-elf
CC64=riscv64-unknown-elf
CCFLAGS=-march=rv32i -mabi=ilp32 -O3 -T ../linksc.ld -nostartfiles -ffunction-sections -fdata-sections -Wl,--gc-sections -o fundamental_operations.elf
	
build:
	$(CC32)-gcc fundamental_operations.c ../crt0.s $(CCFLAGS)
	$(CC32)-objcopy -O binary -j .init -j .text -j .rodata fundamental_operations.elf fundamental_operations.bin
	../rom_generator fundamental_operations.bin
	cp fundamental_operations.data ../memory_contents

multilib:
	$(CC64)-gcc fundamental_operations.c ../crt0.s $(CCFLAGS)
	$(CC64)-objcopy -O binary -j .init -j .text -j .rodata fundamental_operations.elf fundamental_operations.bin
	../rom_generator fundamental_operations.bin
	cp fundamental_operations.data ../memory_contents
