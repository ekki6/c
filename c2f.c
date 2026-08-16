#include <stdio.h>

/* print Fahrenheit-Celsius table
   from K&R */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 200;
    step = 20;

    celsius = lower;
    printf("  C      F\n");
    printf("----------\n");
    while (celsius <= upper) {
//        celsius = 5 * (fahr-32) / 9;
//        celsius = (5.0/9.0) * (fahr - 32.0);
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
