#include<stdio.h>
int main()
{
  int a[5], i, j, sum;
  printf("enter 5 number:\n");
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  printf("enter sum: ");
  scanf("%d",&sum);
  for ( i = 0; i < 5; i++)
  {
    for ( j = i+1; j < 5; j++)
    {
        if(a[i]+a[j]==sum)
        printf(" %d %d\n",a[i],a[j]);
    }
  }
  return 0;
}