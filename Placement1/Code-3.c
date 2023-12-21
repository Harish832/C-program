#include <stdio.h>
int main()
{
    int x = 2, deg = 3;
    int coef[deg + 1];
    int value = 0;
    for (int i = 0; i < deg + 1; i++)
    {
        printf("\nEnter the coefficient of deg %d:", i);
        scanf("%d", &coef[i]);
        value += pow(x, i) * coef[i];
    }
    printf("P[%d]=%d", x, value);
    return 0;
}