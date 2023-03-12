module inverter_tb;
    reg a;
    wire b;
    inverter inverter_u0(a, b);
/*
    //it called soming wrongs...
    initial begin
        if (! $value$plusargs("a=%d", a)) begin
            $display("ERROR: please specify +a=<value> to start.");
            $finish;
        end
        
        wait (b) $display("output = %d", b);
        $finish;

    end
*/
    initial begin 
        // Test case 1: input is 0
        a = 0;
        #5;
        $display("output = %d", b);
        if (b !== 1'b1) $error("Test case 1 failed!");
        
        // Test case 2: input is 1
        a = 1;
        #5;
        $display("output = %d", b);
        if (b !== 1'b0) $error("Test case 2 failed!");

        $display("All test cases passed!");
        $finish;
    end
endmodule
