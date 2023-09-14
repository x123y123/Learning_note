#include <stdio.h>
#include <string.h>
void charswap(char* str1, char* str2)
{
    *str1 ^= *str2;
    *str2 ^= *str1;
    *str1 ^= *str2;
}

char* strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return NULL;

    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
        charswap(p1, p2);

    return str;
}

void main() {
    char str[20];

    printf("Enter string: ");
    gets(str);//reads string from console  
    printf("String is: %s \n", str);
    printf("\nReverse String is: %s \n", strrev(str));

}
