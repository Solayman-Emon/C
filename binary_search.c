#include <stdio.h>
#include <math.h>

int binary_search(int arr, int key, int n)
{
   int mid = floor(n-1/2);
   if (key>mid){
    start = mid;
    end = n-1;
   }
   else if(key<mid){

   }
}

int main()
{
    int arr[10], i, n, key;
    printf("How many numbers\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the search key\n");
    scanf("%d", &key);

    return 0;
}
