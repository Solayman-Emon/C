#include <stdio.h>

int main()
{
    int n, m, rem, gcd, lcm;
    scanf("%d %d", &n, &m);
    int n1=n;
    int n2=m;

    while(m!=0)
    {
        rem = n%m;
        n = m;
        m = rem;
    }

    gcd = n;
    lcm = (n1*n2)/gcd;

    printf("Greatest Common Division: %d\n", gcd);
    printf("Least Common Multiple: %d\n", lcm);

    return 0;
}
