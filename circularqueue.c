#include<stdio.h>
int arr[5];
int f= -1,r= -1;

int insert(int val)
{
    if(f ==  -1 && r == -1)
    {
        f++;
        r++;
    }
    if(r < 5)
    {
        r++;
        arr[r] = val;
    }
}

int display()
{
    for(int i=1;i<=r;i++)
    {
        printf("  %d",arr[i]);
    }
}


int main()
{
    insert(19);
    insert(23);
    insert(44);
    insert(37);
    insert(53);
    display();
    return 0;
}
