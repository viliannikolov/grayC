#include <stdio.h>

// counts numbers,empty spaces(spaces,tabs,new lines) and other chars

int main()
{
int c,i, nc, ec, oc; //ec - empty count, oc - other count
int digits[10];

ec = oc = 0;// set to 0
for (i = 0; i < 10; ++i)
{digits[i] = 0;}  // fill with 0s



while ((c=getchar()) != EOF)
{
    if (c>='0' && c<='9')
    {
        ++digits[c-'0'];
    }
    else if( c == ' ' || c == '\n' || c == '\t')
    {
        ++ec;
    }
    else
    {
        ++oc;
    }
}

printf("digits = ");
for (i = 0; i < 10; ++i)
{
    printf(" %d", digits[i]);
}
printf(", white space = %d, other = %d", ec, oc);

printf("\n         ");    // 
for (i = 0; i < 10; ++i)  // Printing numbers from 0-9 below the digits so it's easier to recognize it
printf(" %d", i);         // 
putchar('\n');            //








}