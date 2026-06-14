#include<stdio.h>
int main()
{
    int a[5], i, key, count=0;
    printf("enter 5 number:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter element: ");
    scanf("%d",&key);
    for ( i = 0; i < 5; i++)
    {
        if(a[i]==key)
        count++;
    }
    printf("frequency = %d",count);
    return 0;
}