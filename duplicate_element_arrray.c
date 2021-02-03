#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 4, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    for (i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (arr[i] == arr[j]){
                printf("%d\t", arr[j]);
            }
        }
    }

    //printArray(ar, n);

    return 0;
}
