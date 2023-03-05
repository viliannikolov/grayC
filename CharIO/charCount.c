#include<stdio.h>

int main()
{
    long c,cc; //cc - charcount

    while ((c=getchar()) != EOF)  //for(cc=0; getchar() != EOF; ++cc);
    {
        ++cc;
        putchar(c);
    }
    printf("counted %ld characters.\n", cc); //including spaces,tabs, new lines ect.


}