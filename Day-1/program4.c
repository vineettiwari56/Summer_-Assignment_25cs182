#include<stdio.h>
int main ()
{
int n, digit = 0;
printf("enter the number:");
scanf("%d",&n);
while(n > 0)
{
    digit++;
    n = n/ 10;
}
printf("total digit = %d ",digit);
return 0;
}
