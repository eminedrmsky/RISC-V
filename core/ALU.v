/*
Arithmetic Logic Unit for the core.
This module is responsible for the execution of arithmetic operations.
*/
`timescale 1ns/1ps
module ALU(input [31:0] src1,
           input [31:0] src2,
           input [4:0]  func,

           output reg [31:0] alu_out);

wire [4:0] shamt;
assign shamt = src2[4:0];

always @*
begin
	case(func)
		5'b00000 : alu_out = src1+src2; //add
		5'b00001 : alu_out = src1-src2; //subtract
		5'b00010 : alu_out = src1 ^ src2; //XOR
		5'b00011 : alu_out = src1 | src2; //OR
		5'b00100 : alu_out = src1 & src2; //AND
		5'b00101 : alu_out = (src1 < src2) ? 32'd1 : 32'd0; //set-less-than (unsigned)
		5'b00110 : alu_out = ($signed(src1) < $signed(src2)) ? 32'd1 : 32'd0; //set-less-than (signed)
		5'b00111 : alu_out = src1 << shamt; //shift left
		5'b01000 : alu_out = src1 >> shamt; //shift right
		5'b01001 : alu_out = ($signed(src1)) >>> shamt; //shift right arithmetical
		5'b01010 : alu_out = (src1 == src2) ? 32'd1 : 32'd0; // set if equal
		5'b01011 : alu_out = (src1 == src2) ? 32'd0 : 32'd1; // set if not equal
		5'b01100 : alu_out = (src1 >= src2) ? 32'd1 : 32'd0; // set if greater or equal (unsigned)
		5'b01101 : alu_out = ($signed(src1) >= $signed(src2)) ? 32'd1 : 32'd0; // set if greater or equal (signed)
		5'b01110 : alu_out = (src1 + 4); // PC+4
		5'b01111 : alu_out = src2; //pass
		5'b10100 : alu_out = ~(src1 & src2); //CUSTOM NAND opcode 7'b0?100_11  func3 3'b111  func7 7'b0100000
	endcase
end

endmodule
