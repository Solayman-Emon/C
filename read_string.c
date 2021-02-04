#include <stdio.h>

int main()
{
    char str[10], str1[10], str2[10];
    printf("Enter a String\n");

    //scanf("%s", str);    // read string excluding spaces
    //scanf("%[^\n]s", str); // until the newline

    //gets(str1); // read string including spaces

    fgets(str2, 10, stdin); // gets and scanf can't handle the memory overflow

    printf("%s", str2);

    return 0;
}
