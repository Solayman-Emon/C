#include <stdio.h>

// Armstrong Number: 153: 1*1*1 + 5*5*5 + 3*3*3

int main()

{
    int n, y=0, temp, x;
    scanf("%d", &n);
    temp = n;

    while (n!=0){

        x = n%10;
        y = y + (x*x*x);
        n = n/10;
    }

    if (temp == y){
        printf("The number is armstrong number\n");
    }
    else{
        printf("The number is not armstrong number\n");
    }
    printf("%d", y);

    return 0;
}
