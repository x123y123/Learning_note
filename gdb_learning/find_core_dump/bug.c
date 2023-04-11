#include <stdio.h>
#include <stdlib.h>

void test()
{
    char* s = NULL;
    *s = 'x';
}

int main(int argc, char** argv)
{
    test();
    return (EXIT_SUCCESS);
}
