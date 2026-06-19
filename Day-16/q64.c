#include<stdio.h>
int main()
{
    int a[5], i, j;
     printf("enter 5 number:\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("after removing duplicates:\n");
  for ( i = 0; i < 5; i++)
  {
    for ( j = 0; j < i; j++)
    {
        if(a[i]==a[j])
        break;
    }
    if(i==j)
    printf(" %d ",a[i]);
}
return 0;
}