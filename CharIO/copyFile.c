#include <stdio.h>

int main()
{
    //Outputs the Input (copies the stdin to the stdout)

    int c;
    
    while ((c=getchar())!= EOF)
    {
        putchar(c);
    }

}