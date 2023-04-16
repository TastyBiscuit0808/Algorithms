#include<stdio.h>

void bubble_sort(int n, int a[n])
{
    for(int i = 0;i<n-1;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    bubble_sort(n, a);
}