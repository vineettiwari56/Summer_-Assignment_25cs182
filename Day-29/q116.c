#include<stdio.h>

int main()
{
    int id,qty;
    char name[30];
    float price;

    printf("Enter Product ID: ");
    scanf("%d",&id);

    printf("Enter Product Name: ");
    scanf("%s",name);

    printf("Enter Quantity: ");
    scanf("%d",&qty);

    printf("Enter Price: ");
    scanf("%f",&price);

    printf("\nInventory Details\n");
    printf("ID : %d\n",id);
    printf("Name : %s\n",name);
    printf("Quantity : %d\n",qty);
    printf("Price : %.2f\n",price);

    return 0;
}