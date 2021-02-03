#include <stdio.h>
// 45 3 2 34 1

void RemoveElement(int arr[], int n, int pos)
{
    int i;
    for(i=pos; i<n; i++)
    {
       arr[i-1] = arr[i];
    }
}

void PrintArray(int arr[], int n)
{
    int i;
    for(i=0; i<n-1; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[100], n, i, pos;
    printf("How many numbers?\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the postion where you want to delet an element:\n");
    scanf("%d", &pos);

    RemoveElement(arr, n, pos);
    PrintArray(arr, n);
    return 0 ;
}
