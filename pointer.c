#include <stdio.h>

int main()
{
    int q, *ptr;
    scanf("%d", &q);
    ptr = &q;

    printf("The address of the inputed value: %d\n", ptr);
    printf("The value of the inpute: %d", *ptr);
    return 0;
}
