#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int choice;

    printf("Enter string: ");
    gets(str);

    printf("\n1.Length\n2.Reverse\n");
    printf("Enter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d",strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s",str);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}