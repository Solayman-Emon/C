#include <stdio.h>

int add(int *p, int *q)
{
    int res;
    res = *p + *q;
    return res;
}

int main()

{
   int x, y, r;
   scanf("%d %d", &x, &y);

   r = add(&x, &y);
   printf("%d", r);

   return 0;
}
