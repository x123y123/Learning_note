`timescale 1ns/10ps

module test;

    reg a1, a2, a3, a4, b;

    // blocking
    always@(b) 
        #12 a1 = b;

    always@(b)
        a2 = #12 b;

    // nonblocking
    always@(b)
        #12 a3 <= b;

    always@(b)
        a4 <= #12 b;
/*
    initial begin

        $dumpfile("wave_lessdelay.vcd");
        $dumpvars;

        b = 0;
        #15 b = 1;
        #2 b = 0;
        #1 b = 1;
        #7 b = 0;
        #18 b = 1;
        #25 b = 0;
        #100 b = 1;
        $finish;

    end
*/

    initial begin

        $dumpfile("wave_moredelay.vcd");
        $dumpvars;

        b = 0;
        #13 b = 1;
        #13 b = 0;
        #13 b = 1;
        #13 b = 0;
        #13 b = 1;
        #13 b = 0;
        #100 b = 1;
        $finish;

    end
endmodule
