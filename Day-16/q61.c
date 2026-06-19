#include<stdio.h>
int main()
{
    int a[4], i, sum=0, n=5;
    printf("enter 4 number:\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("missing number = %d", (n*(n+1))/2-sum);
    return 0;
}