#include <stdio.h>

//Prints table of Temperature in Fahrenheit & Celsius

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; //dolna granica na temperaturnata tablica
    upper = 300; // gorna granica na temperaturnata tablica
    step = 20; //golemina na stupkata

    fahr = lower;
      printf("\nTemperature Converter\n", fahr, celsius);//Upr1.3
    printf("fahr\tcelsius\n", fahr, celsius);
    
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0); // MUST WRITE 5.0 and 9.0 and 32.0 because they are float type and arithmetics won't work correct and it wont work otherwise
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr+step;
    }
    


}