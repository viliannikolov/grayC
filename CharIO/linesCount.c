#include <stdio.h>

int main()
{
    int c,lc;

    while ((c=getchar())!=EOF)
    {
        if (c=='\n')
        {
            lc++;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
        
    }
    printf("Lines: %d\n", lc);



}