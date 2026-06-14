#include<stdio.h>
int main()
{
    int a[5], i, key, found=0;
    printf("enter 5 number:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter number to search: ");
    scanf("%d",&key);
    for ( i = 0; i < 5; i++)
    {
        if(a[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found)
    printf("element found");
    else
    printf("element not found");
    return 0;
}