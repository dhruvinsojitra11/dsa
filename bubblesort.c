#include<stdio.h>
#define n 8

int arr[n],a,b;

int bubleshoot(int arr[], int i)
{
    for (int a = 0; a < i; a++)
    {
        for (int b = 0; b < i - 1; b++)
        {
            if (arr[b] > arr[b + 1])
            {
                int temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
            }
        }
    }
}

int main()
{ 
    int arr[8] = {3,65,7,87,9,6,32,45};

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    bubleshoot(arr, n);

    printf("\n sorted array is  : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}