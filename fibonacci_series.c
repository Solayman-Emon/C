#include <stdio.h>

int main()

{
    int N, t, i;
    int t1=0, t2=1;
    scanf("%d", &N);

    for(i=0; i<=N-1; i++)
    {
        if(i<=1)
        {
            t = i;
        }
        else
        {
            t = t1 + t2;
            t1 = t2;
            t2 = t;
        }

        printf("%d", t);
        printf("\t");

    }
}
