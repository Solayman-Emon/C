#include <stdio.h>

int main ()
{
  // Find the largest number

  int a, b, c, res;
  printf("Please enter the three numbeers: ");
  scanf("%d %d %d %d", &a, &b, &c);

  res = (a > b)? ((a > c)? a:c): ((b>c)? b:c);

  printf("The largest number is %d", res);

  return 0;
}
