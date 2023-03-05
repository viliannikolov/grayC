#include <stdio.h>
#define IN 1
#define OUT 0


int main()
{

int wc, c, state = OUT; //wc = word count

//Outputs the input, where each word is printed on a new line
while ((c=getchar())!= EOF)
{
    if (c == ' '|| c == '\t' || c == '\n')
    {
        putchar('\n');
        wc++;                          
        putchar(c);
    }
    else if (c != ' ')
    {
        putchar(c); 
    }
    
}
printf("words counted: %d\n", wc);

}