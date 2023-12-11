#include <stdio.h>

int selectionsorting(int a[])

{
     for (int i = 0; i < 5; i++)
    {
        for (int j = i ; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];                
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int arr[5] = {21,34,23,12,25};


    selectionsorting(arr);

    return 0;
}