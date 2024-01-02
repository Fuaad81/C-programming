#include <stdio.h>

int main()
{
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char alphabet;
    int flag = 0;
    printf("Enter a alphabet");
    scanf("%c", &alphabet);
    for (int i = 0; i < 10; i++)
    {
        if (alphabet == vowels[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Vowel");
    }
    else
    {
        printf("consonants");
    }

    return 0;
}
