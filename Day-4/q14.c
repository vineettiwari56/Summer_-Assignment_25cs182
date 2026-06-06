#include<stdio.h>
int main ()
{
    int n, i, a = 0, b = 1, c;
    printf(" enter number:");
    scanf("%d", &n);
    if(n == 1)
     printf("0");
     else
     if(n == 2)
     printf("1");
     else
     {
     for (i = 3; i <= n; i++)
     {
        c = a + b;
        a = b;
        b = c; 
     }
       printf(" %d ", c);
    }
    return 0;
}

     
     