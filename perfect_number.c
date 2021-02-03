#include <stdio.h>

//perfect number--> sum of the factors without the number itself
// 6, 28, 496, 8128

int main()
{
    int n, i, sum=0;
    scanf("%d", &n);

    for(i=1; i<n; i++)
    {
        if(n%i==0){
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    if(n==sum){
        printf("The number is a perfect number");
    }
    else{
        printf("The number is not a perfect number");
    }
    return 0;
}
