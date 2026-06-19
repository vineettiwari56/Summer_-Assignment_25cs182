#include<stdio.h>
int main ()
{
    int a[5], i, j, count, max=0, ele;
    printf("enter 5 number:\n");
    for(i=0;i<5;i++)
    scanf("%d", &a[i]);
    for ( i = 0; i < 5; i++)
    {
        count=1;
        for ( j = i+1; j < 5; j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count>max)
        {
            max=count;
            ele=a[i];
        }
    }
    printf("element = %d", ele);
    return 0;
}