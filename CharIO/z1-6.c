#include <stdio.h>

int main()
{

    if ((getchar() != EOF) == 1)
    {
        putchar('1');
    }
    else if ((getchar() != EOF) == 0)
    {
        putchar('0');
    }
    else
    {
        putchar('e');
    }
}