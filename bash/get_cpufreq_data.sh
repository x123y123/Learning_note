#!/bin/bash

cfreq=(1907200 1881600 1804800 1728000 1651200 1574400 1497600 1420800 1344000 1267200 1190400 1113600 1036800 960000 883200 806400 729600 652800 576000 499200 422400 345600 268800 192000 115200)

echo 1907200 | tee /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed
for i in "${cfreq[@]}";
do 
    echo $i | tee /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed
    bash ./run_fp16.sh
    mv test.prof ./tony/perf_log/6core/fp16_$i.prof
done

echo FP16_DONE

echo 1907200 | tee /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed
for i in "${cfreq[@]}";
do 
    echo $i | tee /sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed
    bash ./run_int8.sh
    mv test.prof ./tony/perf_log/6core/int8_$i.prof
done

echo INT8_DONE
echo ALL_DONE
