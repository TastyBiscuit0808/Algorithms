#include<stdio.h>
#include<stdlib.h>
// #define maxnode 20

void topsort(int n,int adjmat[n][n], int indeg[n])
{
    int stk[n];
    int top = -1;
    for(int i = 0;i<n;i++)
    {
        int sum = 0;
        for(int j = 0;j<n;j++)
        {
            sum = sum + adjmat[i][j];
        }
        indeg[i] = sum;
    }

    for(int i = 0;i<n;i++)
    {
        if(indeg[i] == 0)
        {
            stk[++top] = i;
        }
    }
    // printf("%d",top);
    for(int i = top;top>=0;top--)
    {
        printf("%d ",stk[i]);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int adjmat[n][n];
    int indeg[n];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            scanf("%d",&adjmat[i][j]);
        }
    }
    // for(int i = 0;i<n;i++)
    // {
    //     indeg[i] = 0;
    // }
    // init(adjmat, n);
    // create_graph(adjmat, n);
    topsort(n, adjmat,indeg);
    return 0;
}