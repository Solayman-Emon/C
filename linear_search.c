#include <stdio.h>

int linear_search(int arr[], int key, int n)
{
    int j, ck=0;
    for(j=0; j<n; j++)
    {
        if(arr[j]==key)
        {
            printf("The number %d is found in %d th place", arr[j], j+1);
            ck = 1;
            break;
        }
    }

    if(ck==0)
    {
       printf("The number %d is not found\n", key);
    }

}

int main()
{
    int arr[10], n, key, i;
    printf("How many numbers ?\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    linear_search(arr, key, n);

    return 0;
}
