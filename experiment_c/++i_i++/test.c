#include <stdio.h>

#define ex_1
//#define ex_2

int main()
{
    int i = 0, a[3] = {0, 1, 2};
#ifdef ex_1
    int a_1 = 0;
    a_1 = a[i++];
    printf("\n------------------\n");
    printf("i++:\ni++ = %d\na[i++] = %d\n", i, a_1);
#endif
    
#ifdef ex_2
    int a_2 = 0;
    a_2 = a[++i];
    printf("\n------------------\n");
    printf("++i:\n++i = %d\na[++i] = %d\n", i, a_2);
#endif    

    return 0;
}
