#include<stdio.h>
int main()
{
    int a[5], i, max, min;
    printf("enter 5 number:\n");
    for(i=0;i<5;i++)
    scanf("%d", &a[i]);
    max=min=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("largest = %d\n",max);
    printf("smallest = %d\n",min);
     return 0;
}