#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define alpha_size 128

void shift_table(int m, char *pattern, int *table)
{
    for(int i = 0;i<alpha_size;i++)
    {
        table[i] = m;
    }

    for(int i = 0;i<m-1;i++)                                        
    {
        table[pattern[i]] = m-i-1; 
    }
}

void horspool(char *text, char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);
    int table[alpha_size];
    shift_table(m,pattern, table);
    int flag = 0;

    int i = m-1;
    while(i<n)
    {
        int k = 0;
        while(k<m && pattern[m-1-k] == text[i-k])
        {  
            k++;
        }
        if(k == m)
        {
            printf("Pattern found at index %d\n", i-m+1);
            flag++;
            i++; 
        }
        else
        {
            i += table[text[i]];
        }
    }

    if(flag == 0)
    {
        printf("Pattern not found!!\n");
    }
}


int main()
{
    char text[3];
    char pattern[10];
    printf("Enter the text: ");
    scanf("%s",text);
    printf("Enter the pattern: ");
    scanf("%s", pattern);
    horspool(text,pattern);
    return 0;
}
