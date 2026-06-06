#include<stdio.h>
int main ()
{
    int start, end, i, n, rem, sum;
    printf("enter start and end; ");
    scanf("%d%d",&start, &end);
    for (i = start; i <= end; i++)
    {
        n = i;
        sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (sum == i)
       printf(" %d ", i);
}
  return 0;
}
    
    
