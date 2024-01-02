#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter your percentage score: ");
    scanf("%f", &percentage);
    
    char grade;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    switch (grade)
    {
    case 'A':
        printf("Your grade is A.\n");
        break;
    case 'B':
        printf("Your grade is B.\n");
        break;
    case 'C':
        printf("Your grade is C.\n");
        break;
    case 'D':
        printf("Your grade is D.\n");
        break;
    case 'F':
        printf("Your grade is F.\n");
        break;
    default:
        printf("Invalid grade.\n");
    }
    return 0;
}