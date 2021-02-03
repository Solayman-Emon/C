#include <stdio.h>
//6 2 34 1
int Max(int arr[], int n)
{
    int i, temp;
    for(i=0; i<n; i++)
    {
       if(arr[i]>arr[i+1]){
        temp = arr[i];
       }
       else{
        temp = arr[i+1];
       }
    }
    printf("%d", temp);
    return temp;
}


int main()
{
    int arr[10];
    printf("How many numbers?\n");
    int n, i;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max, min;
    max = Max(arr, n);
    //min = Min(arr, n);

    printf("%d", max);

    return 0;
}
