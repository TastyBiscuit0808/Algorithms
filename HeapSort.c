#include<stdio.h>
#include<stdlib.h>

// Min Heap

void heapify(int h[], int n, int i) // Maintians heap property
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Finding the largest among the root and the nodes just before the leaves
    if (left < n && h[left] > h[largest])
    {
        largest = left;
    }

    if (right < n && h[right] > h[largest])
    {
        largest = right;
    }
    // swapping if greater
    if (largest != i) 
    {
      int t = h[i];
      h[i] = h[largest];
      h[largest] = t;
      heapify(h, n, largest);
    }
}

void heapsort(int h[], int n)
{
    for(int i = n/2 -1;i>=0;i--) // Max Heap construction
    {
        heapify(h,n,i);
    }
    // Heapsort
    for(int i = n-1;i>=0;i--)
    {
        int t = h[0];
        h[0] = h[i];
        h[i] = t;
        heapify(h,i,0);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int h[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter : ");
        scanf("%d",&h[i]);
    }
    heapsort(h,n);
    printf("The sorted array is: ");
    for(int i = 0;i<n;i++)
    {
        printf("%d ",h[i]);
    }
    return 0;
}