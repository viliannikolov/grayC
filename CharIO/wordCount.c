#include <stdio.h>
#define IN 1 //inside a word
#define OUT 0 //outside a word

// Counts lines, words and chars from input

int main()
{

int c, wc = 0, lc = 0, cc = 0, state = OUT;

while ((c=getchar())!=EOF)
{
    cc++;
    if (c=='\n')
    {
        lc++;
    }

    if(c == ' ' || c == '\t' || c == '\n')
    {
        state = OUT;
        
    }
    else if (state == OUT)
    {
        state = IN;
        wc++;
    }
}

printf("\tlineCount\twordCount\tcharCount\n\t%d\t\t%d\t\t%d\n", lc, wc, cc);

//zad 1.11 -  possible errors could happen when we have series of characters on the input, that doesn't match to a valid word,
// for example: " .d1!#2 " this string will be counted as word



}