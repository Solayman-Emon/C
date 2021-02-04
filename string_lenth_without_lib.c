#include <stdio.h>

int main()
{
    char str[10];
    int i=0;
    fgets(str, sizeof(str), stdin);

    while(str[i]!='\0')
    {
        i++;
    }

    printf("Without Library Function Length is: %d\n", i-1);
    printf("With Library Function Length is: %d", strlen(str));

    return 0;
}
