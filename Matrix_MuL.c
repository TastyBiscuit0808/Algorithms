#include<stdio.h>

void matrix_multiplication(int n, int a[][n],int b[][n], int c[][n])
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            for(int k = 0;k<n;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
}

void disp(int n, int c[][n])
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
}

int main()
{
    int n = 3;
    printf("Enter matrix size: ");
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int c[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    matrix_multiplication(n,a,b,c);
    printf("The result is: \n");
    disp(n,c);
    return 0;
}