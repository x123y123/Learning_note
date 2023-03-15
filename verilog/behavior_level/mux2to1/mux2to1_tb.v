module MUX2to1_tb;

reg in1, in2, sel;
wire out;

MUX2to1 m1(in1, in2, sel, out);

initial begin

    in1 = 1'b0;
    in2 = 1'b1;
    sel = 1'b1;
    #5
    $display("out correct is 0, the real out is %d", out);

    in1 = 1'b0;
    in2 = 1'b1;
    sel = 1'b0;
    #5
    $display("out correct is 1, the real out is %d", out);
    
    $finish;

end

endmodule
