#include <stdio.h>

//Prints the same as TC.c but with FOR LOOP instead

int main()
{
    int fahr;

    printf("Temperature\nfahrenheit\tcelsius\n");

    for(fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%3d\t%6.1f \n", fahr, (5.0/9.0)*(fahr-32));
    }


}