#include<stdio.h>

int main()
{
    int acc;
    char name[30];
    float balance;

    printf("Enter Account Number: ");
    scanf("%d",&acc);

    printf("Enter Name: ");
    scanf("%s",name);

    printf("Enter Balance: ");
    scanf("%f",&balance);

    printf("\nAccount Details\n");
    printf("Account No : %d\n",acc);
    printf("Name : %s\n",name);
    printf("Balance : %.2f\n",balance);

    return 0;
}