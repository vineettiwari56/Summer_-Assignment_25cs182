#include<stdio.h>
int main()
{
    int a[5], i, j=0, temp[5];
    printf("enter 5 number:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for ( i = 0; i < 5; i++)
    {
        if(a[i] !=0)
        {
            temp[j] = a[i];
            j++;
        }
    }
    while (j < 5)
    {
        temp[j]=0;
        j++;
    }
    
    printf("array after moving zeroes:\n");
    for(i=0;i<5;i++)
    printf(" %d ", temp[i]);
    return 0;
}
