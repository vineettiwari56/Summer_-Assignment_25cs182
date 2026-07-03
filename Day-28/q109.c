#include<stdio.h>

int main()
{
    int bookid;
    char book[30];

    printf("Enter Book ID: ");
    scanf("%d",&bookid);

    printf("Enter Book Name: ");
    scanf("%s",book);

    printf("\nLibrary Record\n");
    printf("Book ID : %d\n",bookid);
    printf("Book Name : %s\n",book);

    return 0;
}