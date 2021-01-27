#include <stdio.h>

int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f = f*i;
    }

    return f;
}

double permutation(int n, int r)
{
    int p;
    p = fact(n)/fact(n-r);
    return p;
}

double combination(int n, int r)
{
    int c;
    c = fact(n)/(fact(r)*fact(n-r));
    return c;
}

int main()
{
    int n, r, p, c;
    scanf("%d %d", &n, &r);

    p = permutation(n, r);
    c = combination(n, r);
    printf("Permuation: %d\n", p);
    printf("Combination: %d", c);

    return 0;
}
