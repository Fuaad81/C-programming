#include <stdio.h>

int main()
{
    char choice;
    printf("\nA Excellent\nB Good job\nC Satisfaction\nD You passed, but there's room for improvement\nE Sorry, you failed\n\tEnter your Grade");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Good job");
        break;
    case 'C':
        printf("Satisfactory");
        break;
    case 'D':
        printf("You passed, but there's room for improvement");
        break;
    case 'E':
        printf("Sorry, you failed.");
        break;
    default:
        printf("Enter a valid grade");
        break;
    }
    return 0;
}
