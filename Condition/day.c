#include <stdio.h>

int main()
{
    int choice;
    printf("\n1 Monday\n2 Tuesday\n3 Wednesday\n4 Thursday\n5 Friday\n6 Saturday\n7 Sunday\n\tEnter your choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("----Monday----");
        break;
    case 2:
        printf("----Tuesday----");
        break;
    case 3:
        printf("----Wednesday----");
        break;
    case 4:
        printf("----Thursday----");
        break;
    case 5:
        printf("----Friday----");
        break;
    case 6:
        printf("----Saturday----");
        break;
    case 7:
        printf("----Sunday----");
        break;
    default:
        printf("Enter a valid number");
        break;
    }
    return 0;
}
