#include<stdio.h> // Divide and Conquer

int partition(int n, int a[n], int l, int r)
{
    int p = a[l];
    int i = l;
    int j = r+1;
    while(i<=j)
    {
        do{
            i++;
        }while(a[i]<=p);
        do{
            j--;
        }while(a[j]>=p);
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    int x = a[i];
    a[i] = a[j];
    a[j] = x;

    int y = a[l];
    a[l] = a[j];
    a[j] = y;

    return j;
}

void quicksort(int n, int a[n], int l, int r)
{
    if(l<r)
    {
        int s = partition(n,a,l,r);
        quicksort(n, a, l, s-1);
        quicksort(n,a,s+1,r);
        //a,l,p
        //a,p+1,h
    }
}

int main()
{
    int n;
    printf("Enter: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    int l = a[0];
    int r = a[n-1];
    quicksort(n,a,l,r);
    for(int i = 0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}



	      