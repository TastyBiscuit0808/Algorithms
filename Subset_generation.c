#include<stdio.h>
#include<stdlib.h>
//Number of permutations
int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int find_mob(int n, int a[n], int dir[n])
{
    int max = -1;
    int pos;
    for(int i = 0;i<n;i++)
    {
        if(dir[i] == 0 && i!=0)
        {
            if(a[i]>a[i-1])
            {
                max = a[i];
                pos = i;
            }
        }
        else if(dir[i] == 1 && i!=n-1)
        {
            if(a[i]>a[i+1])
            {
                max = a[i];
                pos = i;
            }
        }
    }
    return max;
}

int print_permut(int n,int a[n], int dir[n])
{
    int mob_ele = find_mob(n, a, dir);
}


int main()
{
    // int n;
    // printf("Enter: ");
    // scanf("%d",&n);
    // int x = factorial(n);
    // printf("%d",x);
    int a[5], dir[5];
    for(int i = 0;i<4;i++)
    {
        a[i] = i+1;
        // 0 -> right to left , 1-> left to right
        dir[i] = 0;
    }
    for(int i = 0;i<4;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    int itr = factorial(4);
    for(int i = 0;i<itr;i++)
    {
        int perm = print_permut(4, a, dir);
        if()
        printf("%d",perm);
    }
    return 0;
}