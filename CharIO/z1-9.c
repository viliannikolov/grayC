#include <stdio.h>
// if there are more than 1 space between words, it replaces them with a single
int main()
{

int c, prevspace;
prevspace=0;
    while ((c=getchar())!= EOF)
    {
        
        if (c == ' ' && prevspace == 0)
        { 
            putchar(c);
            prevspace = 1;
        }
        else if (c != ' ')
        {
            putchar(c);
            prevspace = 0;
        }
        


    }
    
}