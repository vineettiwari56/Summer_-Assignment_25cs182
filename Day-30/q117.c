#include<stdio.h>

int main()
{
    int roll[3], marks[3], i;
    char name[3][20];

    for(i=0;i<3;i++)
    {
        printf("Enter Roll No: ");
        scanf("%d",&roll[i]);

        printf("Enter Name: ");
        scanf("%s",name[i]);

        printf("Enter Marks: ");
        scanf("%d",&marks[i]);
    }

    printf("\nStudent Records\n");

    for(i=0;i<3;i++)
    {
        printf("Roll: %d\n",roll[i]);
        printf("Name: %s\n",name[i]);
        printf("Marks: %d\n\n",marks[i]);
    }

    return 0;
}