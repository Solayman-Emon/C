#include <stdio.h>

int main()
{
    char str[20], str1[20];
    fgets(str, sizeof(str), stdin);
    fgets(str1, sizeof(str1), stdin);
    int i, j;

    for(i=0; str[i]!='\0'; ++i);

    for(j=0; str1[j]!='\0'; ++j)
    {
        str[i] = str1[j];
        i++;
    }
    str[i] = '\0';
    printf("%s", str);

    return 0;
}
