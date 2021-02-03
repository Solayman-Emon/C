#include <stdio.h>

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
   int arr[10], n, i;
   printf("How many numbers:\n");
   scanf("%d", &n);

   for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
   }

   //int n = sizeof(arr) / sizeof(arr[0]);
   int temp, start=0, end=n-1;

   while(start < end)
   {
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start ++;
      end --;
   }

   printArray(arr, n);

   return 0;
}
