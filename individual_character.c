#include <stdio.h>

int main()
{
    char str[20];
    int i, l;
    fgets(str, sizeof(str), stdin);
    l = strlen(str);
    printf("%d\n", l);

    for(i=l-1; i>=0; i--)
    {
        printf("%c\t", str[i]);
    }
    return 0;
}
