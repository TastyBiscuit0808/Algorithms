#include<stdio.h>

// Time complexity O(n+k)

void counting_sort(int arr[],int n)
{
    int count[100] = {0};
    int output[10];
    // Coun the occrance of each element in the array
    for(int i = 0;i<n;i++)  
    {
        count[arr[i]]++;
    }
    // Cumulative count of each index
    for(int i = 1;i<=99;i++)
    {
        count[i] += count[i-1];
    }
    //output array with the sorted elements by starting from the 
    //end of the input array and placing each element in the correct position in the output array
    for(int i = n-1;i>=0;i--)
    {
        output[count[arr[i]]-1] = arr[i]; // Count[arr[i]]-1] will give the index to place the element
        count[arr[i]]--;
    }
    //Copying the sorted array into arr
    for(int i = 0;i<n;i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int arr[] =  {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    counting_sort(arr,n);
    printf("The sorted array is: ");
    for(int i = 0;i<n;i++)
    {
        // printf("In the for loop");
        printf("%d ",arr[i]);
    }
    return 0;
}


