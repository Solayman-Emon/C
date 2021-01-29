#include <stdio.h>

int main()
{
    int ch;
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a':
        printf("Alphabet a is a vowel");
        break;
    case 'e':
        printf("Alphabet e is a vowel");
        break;
    case 'i':
        printf("Alphabet i is a vowel");
        break;

    case 'o':
        printf("Alphabet o is a vowel");
        break;

    case 'u':
        printf("Alphabet u is a vowel");
        break;

    case 'A':
        printf("Alphabet A is a vowel");
        break;

    case 'E':
        printf("Alphabet E is a vowel");
        break;

    case 'I':
        printf("Alphabet I is a vowel");
        break;

    case 'O':
        printf("Alphabet O is a vowel");
        break;

    case 'U':
        printf("Alphabet U is a vowel");
        break;

    default:
        printf("The Alphabet %c is a consotant", ch);
        break;

    }

    return 0;
}
