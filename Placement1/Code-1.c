#include <stdio.h>
int main()
{
    int a = 2, b = 3;
    printf("Before swapping a=%d b=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping a=%d b=%d", a, b);
    return 0;
}