#include <stdio.h>

int main()

{
    char str[10];
    fgets(str, 10, stdin);

    //printf("%d", strlen(str));
    int i, start, end, temp;
    start = 0;
    end = strlen(str)-2;

    if(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s", str);

    return 0;
}
