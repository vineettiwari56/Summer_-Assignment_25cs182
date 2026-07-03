#include<stdio.h>

void display(int roll,char name[],int marks)
{
    printf("\nStudent Details\n");
    printf("Roll No : %d\n",roll);
    printf("Name : %s\n",name);
    printf("Marks : %d\n",marks);
}

int main()
{
    int roll,marks;
    char name[20];

    printf("Enter Roll No: ");
    scanf("%d",&roll);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Marks: ");
    scanf("%d",&marks);

    display(roll,name,marks);

    return 0;
}