module MUX2to1(input in1,
               input in2,
               input sel,
               output out);

wire a, b, sel_;

not n1(sel_, sel);
and a1(a, sel, in1);
and a2(b, sel_, in2);
or o1(out, a, b);

endmodule
