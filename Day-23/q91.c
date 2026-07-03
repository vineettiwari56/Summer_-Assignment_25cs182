#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, count1=0, count2=0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    while(str1[count1]!='\0')
        count1++;

    while(str2[count2]!='\0')
        count2++;

    if(count1==count2)
        printf("Anagram Strings");
    else
        printf("Not Anagram Strings");

    return 0;
}