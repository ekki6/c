/* for project Euler on Diophantine equations
    find easy minimal solutions for a given D
    in x^2 - dy^2 = 1
    so go through d * y * y + 1 until find
    a perfect square - this version asks
    for one d  */

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int is_psq(uint64_t tnum)
{
    long double testsq;
    uint64_t floortsq;

    testsq = sqrtl( (long double)tnum);
    floortsq = (uint64_t)testsq;
    return ((floortsq * floortsq) == tnum);
}    

int main(void)
{
    int d;
    int y;
    uint64_t ysqr;
    int sflag;

    printf("Enter D to test:\n");
    scanf("%d", &d);

    printf("You entered %d\n", d);
    y = 0;
    do {
        y++;
        ysqr = (uint64_t)d * y * y + 1;
        sflag = is_psq(ysqr);
      //  printf("%llu %llu o ", floortsq, ysqr);
    } while ((!sflag) && (y <= 1000)); 

    if (sflag) {
        printf("y is %d\n", y);
    } else {
        printf("nothing below 1000\n");
    }


}
