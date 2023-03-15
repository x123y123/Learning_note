module MUX2to1(input in1, 
               input in2,
               input sel,
               output out);

reg out;

always@ (in1 or in2 or sel) 
begin

    if (sel) 
        out = in1;
    else 
        out = in2;

end

endmodule
