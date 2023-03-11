
module hello_verilog;

initial begin
    $display("Hello, world");
    #40 $finish;
end

endmodule 
