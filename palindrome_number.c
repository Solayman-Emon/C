#include <stdio.h>

int main()
{
    int n, temp, x;
    scanf("%d", &n);
    temp = n;

    while(n!=0)
    {
        x = (x*10) + n%10;
        n = n/10;
    }

    if(temp == x){
        printf("It is palindrome number\n");
    }
    else{
        printf("It is not a palindrome number\n");
    }

    printf("%d", x);
    return 0;
}
