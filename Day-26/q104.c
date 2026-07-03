#include<stdio.h>

int main()
{
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");

    printf("Enter answer: ");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("Q2. 5 + 5 = ?\n");
    printf("1. 8\n2. 10\n3. 12\n");

    printf("Enter answer: ");
    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("Your Score = %d/2",score);

    return 0;
}