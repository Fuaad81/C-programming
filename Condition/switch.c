#include <stdio.h>

int main()
{
    int choice;
        printf("\n1 FLUTTER\n2 HTML\n3 PYTHON\n4 DSA\n5 QUIT\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("--------FLUTTER--------");
            break;
        case 2:
            printf("--------HTML--------");
            break;
        case 3:
            printf("--------PYTHON--------");
            break;
        case 4:
            printf("--------DSA--------");
            break;
        case 5:
            exit(printf("QUIT...."));
            break;
        default:
            printf("Enter a number");
            
        }
}