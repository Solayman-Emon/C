#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    x = (n%2==0)? printf("Number is even"):printf("Number is odd");
    return 0;
}
