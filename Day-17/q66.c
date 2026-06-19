#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
     int b[3]={3,4,5};
      int j, flag, i;
      printf("union: ");
      for(i=0;i<3;i++)
      printf("%d ",a[i]);
      for ( i = 0; i < 3; i++)
      {
        flag=0;
        for ( j = 0; j < 3; j++)
        {
            if(b[i]==a[j])
            flag=1;
        }
        if(flag==0)
        printf("%d ",b[i]);
      }
      return 0;
    }