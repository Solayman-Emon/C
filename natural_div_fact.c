#include <stdio.h>

int fact (int x)
{
    int j, t = 1;
    for(j= 1; j<=x; j++)
    {
        t = t*j;
    }

    return t;
}

int main()

{
    int N;
    double i, sum = 0;
    scanf("%d", &N);

    // N/N! series

    for(i=1; i<=N; i++)
    {
        sum = sum + (i/fact(i));
        printf("%d", fact(i));
        printf("\n");
    }

    printf("%lf", sum);
    return 0;
}
