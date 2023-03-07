#include <stdio.h>

int main()
{

  int row, cell;

    for (row = 33; row <= 51; row++)
    {
        for (cell = row; cell < row + 19*5; cell += 19)
        {
            if (cell <= 127)
            {
                printf("%3d = %c\t\t", cell, cell);
            }
        }
        putchar('\n');
       

    }

return 0;
}
