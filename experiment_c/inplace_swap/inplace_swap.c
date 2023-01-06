#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    printf("\nbefore swap:\na = %d\nb = %d\n", *x, *y);
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
    printf("\nafter swap:\na = %d\nb = %d\n", *x, *y);
}

int main()
{
    int a = 12;
    int b = 11;
    inplace_swap(&a, &b);

    return 0;
}


