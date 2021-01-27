#include <stdio.h>

int main()

{
    int i, n, flag=1;
    scanf("%d", &n);

    for(i=2; i<=n-1; i++)
    {
        if (n%i==0){
            flag = 0;
        }
    }

    if(flag==0){
        printf("Number %d is not a prime number", n);
    }
    else{
        printf("Number %d is a prime number", n);
    }
    return 0;
}
