#include <stdio.h>

int main()
{
    char str[20];
    fgets(str, sizeof(str), stdin);
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
