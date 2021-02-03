#include <stdio.h>
//6 2 34 1
int Insertion(int arr[], int n, int pos, int value)
{
    int i, temp;
    for(i=n-1; i>=pos-1; i--)
    {
       arr[i+1] = arr[i];
    }

    arr[pos-1] = value;
}

void PrintArray(int arr[], int n)
{
    int i;
    for(i=0; i<n+1; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[10];
    printf("How many numbers?\n");
    int n, i, pos, value;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Which position you want to insert?\n");
    scanf("%d", &pos);
    printf("Which value you want to insert in array?\n");
    scanf("%d", &value);

    Insertion(arr, n, pos, value);
    PrintArray(arr, n);

    return 0;
}

