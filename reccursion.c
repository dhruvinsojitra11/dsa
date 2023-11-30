#include<stdio.h>

int main()
{
    int arr[10] = {2,54,6,7,89,56,45,34,80},min,max;

    for (int i=0;i<10;i++)
    {
        for (int j=i+1;j<10;j++)
        {
            if (arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];

            }
        }
    }

    printf("ascending order :   ");

    for(int i=0;i<10;i++)
    {
        printf("%d    \t",arr[i]);
    }
   

min = arr[0];
max = arr[9];