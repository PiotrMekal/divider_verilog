`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:26 03/06/2019 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	input wire clk_i,
	input wire rst_i,
	output wire led_o
	);

parameter N = 32'd50000000;
reg [31:0]cnt=32'b0;

always @(posedge rst_i, posedge clk_i)
begin

if(rst_i)
	cnt<=32'b0;
else if(cnt==N)
	cnt<=32'b0;
else
	cnt<=cnt+1;
	
end



assign led_o = cnt>(N/2-1) ? 1'b0 : 1'b1; 
endmodule
