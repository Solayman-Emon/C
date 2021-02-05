#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], st[20];
    strcpy(st, str);
    fgets(str, sizeof(str), stdin);
    int start=0, end = strlen(str)-1, temp;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    if(strcmp(st,str))
    {
        printf("The String is a Palindrome\n");
    }
    else
    {
        printf("The String is not a Palindrome\n");
    }

    return 0;
}
