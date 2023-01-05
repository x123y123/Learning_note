reset
set title 'performance of detectNet inference'
#set title 'gyro freq power'
set xlabel 'cpufreq (kHz)'

#set ylabel 'time'
set ylabel 'executtion time (ms)'

set term png enhanced font 'Times_New_Roman,10'

#set output "time freq in gpsthread.png"
set output "perf of detectNet.png"

set format x '%10.0f'
set xtic 100000
set xtics rotate by 45 right


plot [100000:2000000][0:100]"./fix_gpu_1109250000/detectnet.txt"using 3:2 with linespoints title 'g1109250000',"./fix_gpu_1058250000/detectnet.txt"using 3:2 with linespoints title 'g1058250000',"./fix_gpu_1007250000/detectnet.txt"using 3:2 with linespoints title 'g1007250000',"./fix_gpu_956250000/detectnet.txt"using 3:2 with linespoints title 'g956250000',"./fix_gpu_905250000/detectnet.txt"using 3:2 with linespoints title 'g905250000',"./fix_gpu_854250000/detectnet.txt"using 3:2 with linespoints title 'g854250000',"./fix_gpu_803250000/detectnet.txt"using 3:2 with linespoints title 'g803250000',"./fix_gpu_752250000/detectnet.txt"using 3:2 with linespoints title 'g752250000',"./fix_gpu_701250000/detectnet.txt"using 3:2 with linespoints title 'g701250000',"./fix_gpu_599250000/detectnet.txt"using 3:2 with linespoints title 'g599250000',"./fix_gpu_510000000/detectnet.txt"using 3:2 with linespoints title 'g510000000',"./fix_gpu_408000000/detectnet.txt"using 3:2 with linespoints title 'g408000000',"./fix_gpu_306000000/detectnet.txt"using 3:2 with linespoints title 'g306000000',"./fix_gpu_204000000/detectnet.txt"using 3:2 with linespoints title 'g204000000',"./fix_gpu_114750000/detectnet.txt"using 3:2 with linespoints title 'g114750000',\
