#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define mc

static inline double diff_in_second(struct timespec t1, struct timespec t2)
{
    struct timespec diff;
    if (t2.tv_nsec - t1.tv_nsec < 0) {
        diff.tv_sec = t2.tv_sec - t1.tv_sec - 1;
        diff.tv_nsec = t2.tv_nsec - t1.tv_nsec + 1000000000;
    } else {
        diff.tv_sec = t2.tv_sec - t1.tv_sec;
        diff.tv_nsec = t2.tv_nsec - t1.tv_nsec;
    }
    return (diff.tv_sec + diff.tv_nsec / 1000000000.0f);
}


#ifdef mc
#define max(x,y) ({ \
    typeof (x) _x = (x); \
    typeof (y) _y = (y); \
    (void) (&_x == &_y); \
    _x > _y ? _x : _y;   \
})
#endif

#ifndef mc
int max(int x, int y)
{
    if (x > y)
        return x;
    else 
        return y;
}
#endif

int main(int argc, char **argv)
{
    struct timespec start, end;
    double cpu_time;
    
    clock_gettime(CLOCK_REALTIME, &start);
    max(14,19);
    clock_gettime(CLOCK_REALTIME, &end);
    cpu_time = diff_in_second(start, end);
    printf("run time: %lf sec\n", cpu_time);
    
    return 0;
}
