#include <stdio.h>

int main()

{
    char str[20];
    fgets(str, sizeof(str), stdin);
    int i=0, count=0;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            count++;
        }
        i++;

    }

    printf("%d", count);

    return 0;
}
