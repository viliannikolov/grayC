#include <stdio.h>

int main()
{
int c,sc,tc,lc;
sc = tc = lc = 0;

while ( (c = getchar())!=EOF )
{
    if (c == ' ')
    {
        sc++;
    }
    if(c == '\t')
    {
        tc++;
    }
    if(c == '\n')
    {
        lc++;
    }
}
    printf("\tSpaces\tTabs\tLines\n\t%d\t%d\t%d\n", sc,tc,lc);
}