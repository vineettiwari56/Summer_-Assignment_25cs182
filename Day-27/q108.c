#include<stdio.h>

int main()
{
    int m1,m2,m3,total;
    float per;

    printf("Enter marks of 3 subjects:\n");
    scanf("%d%d%d",&m1,&m2,&m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("\nTotal = %d\n",total);
    printf("Percentage = %.2f\n",per);

    if(per>=60)
        printf("Division : First");
    else if(per>=45)
        printf("Division : Second");
    else if(per>=33)
        printf("Division : Third");
    else
        printf("Fail");

    return 0;
}