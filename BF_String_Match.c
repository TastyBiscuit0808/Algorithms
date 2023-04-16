#include<stdio.h>
#include<string.h>

int BF_string_matching(char *text, char *pattern)
{
    int n,m;
    n = strlen(text);
    m = strlen(pattern);
    for(int i = 0;i<n-m;i++)
    {
        int j = 0;
        while(j<m && pattern[j] == text[i+j])
        {
            j++;
        }
        if(j == m)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char text[] = "Hello World";
    char pattern[] = "o Worl";
    int index = BF_string_matching(text,pattern);
    printf("Pattern matched the text at %d index",index);
    return 0;

}