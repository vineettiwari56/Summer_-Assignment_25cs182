#include<stdio.h>
int main ()
{
    int n, product = 1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n > 0)
    {
        product = product * (n % 10);
        n = n / 10 ;
    }
    printf("product of digit = %d",product);
    return 0;
}