#include<stdio.h>
#include<stdlib.h>

//Time complexity O(n^2)

void insertion_sort(int n, int a[])
{
    for(int i = 1;i<n;i++)
    {
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j]; // If the element is greater than key, shift ir right and make space for the key
            j--; // Iterate till the beggining of the array
        }
        a[j+1] = key; // Put the key in the correct position
    }
}

int main()
{
    int n = 5;
    int a[5] = {3,1,4,5,2};
    insertion_sort(n,a);
    return 0;
}