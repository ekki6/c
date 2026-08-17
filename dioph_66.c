/* for project Euler on Diophantine equations
    find easy minimal solutions for a given D
    in x^2 - dy^2 = 1
    so go through d * y * y + 1 until find
    a perfect square */

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main(void)
{
    int d;
    int x;
    int y;
    uint64_t ysqr;
    long double testsq;
    uint64_t floortsq;
    int sflag;

    printf("Enter D to test:\n");
    scanf("%d", &d);

    printf("You entered %d\n", d);
    y = 0;
    do {
        y++;
        ysqr = (uint64_t)d * y * y + 1;
        testsq = sqrtl( (long double)ysqr);
        floortsq = (uint64_t)testsq;
        sflag = ((floortsq * floortsq) == ysqr);
      //  printf("%llu %llu o ", floortsq, ysqr);
    } while ((!sflag) && (y <= 1000)); 

    if (sflag) {
        printf("y is %d\n", y);
    } else {
        printf("nothing below 1000\n");
    }


}
