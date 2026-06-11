#include<stdio.h>
int prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main ()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if(prime(n))
    printf("prime number");
    else
    printf("not prime number");
    return 0;
}