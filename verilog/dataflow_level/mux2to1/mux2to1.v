module MUX2to1(input in1, 
               input in2,
               input sel,
               output out);

wire w0, w1;

assign w0 = in1 & sel;
assign w1 = in2 & (!sel);
assign out = w0 | w1;

endmodule
