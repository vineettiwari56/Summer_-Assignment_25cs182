#include<stdio.h>
int main ()
{
    int n, rem, base = 1, decimal =0;
    printf("enter the binary number: ");
    scanf("%d",&n);
    while (n > 0)
    {
        rem = n % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        n = n / 10;
    }
    printf("decimal = %d", decimal);
    return 0;
}
    