`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:22:59 03/06/2019 
// Design Name: 
// Module Name:    testbench 
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
module testbench;
reg clk;
reg rst;
wire led;
top top1(clk, rst, led);
defparam top1.N = 15;
initial
begin
clk=1;
rst=0;
#400 rst=1;
#100 rst=0;


end
always
#10 clk = ~clk;
endmodule
