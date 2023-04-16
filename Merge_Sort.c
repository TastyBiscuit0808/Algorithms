#include<stdio.h>

// Time complexity O(n*log(n))

void merge(int a[], int p, int q, int r)
{
    const int n1 = q-p+1; // [p...q]
    const int n2 = r-q; // [q...r]
    int L[n1], M[n2];

    for(int i = 0;i<n1;i++)
    {
        L[i] = a[p+i];
    }
    for(int j = 0;j<n2;j++)
    {
        M[j] = a[q+1+j];
    }
    int i =0,j = 0;
    int k = p;
    while(i<n1 && j<n2)
    {
        if(L[i]<=M[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = M[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k] = L[i];
        i++; k++;
    }
    while(j<n2)
    {
        a[k] = M[j];
        j++; k++;
    }
}

void mergesort(int a[], int l, int r)
{
    if(l<r)
    {
        int m = l + (r-1)/2;
        mergesort(a, l, m);
        mergesort(a, m+1,r);
        merge(a,l,m,r);                                             
    }
}

void disp(int a[], int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int a[5] = {2,1,3,5,4};
    int size = sizeof(a)/sizeof(a[0]);
    mergesort(a, 0, size-1);
    printf("The sorted array is: ");
    disp(a,size);
    return 0;
}