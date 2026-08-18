/* for project Euler on Diophantine equations
    find easy minimal solutions for a given D
    in x^2 - dy^2 = 1
    so go through d * y * y + 1 until find
    a perfect square - this version should
    check the first 1000 no perfect squares
 */

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

    for (d = 3; d < 1001; d++)
    {
        if (is_psq(d)) {
            ++d;
        }


        y = 0;
        sflag = 0;
        do {
            y++;
            ysqr = (uint64_t)d * y * y + 1;
            sflag = is_psq(ysqr);
          //  printf("%llu %llu o ", floortsq, ysqr);
        } while ((!sflag) && (y <= 1000000)); 

        if (!sflag) {
            printf("%d, ", d);
        }

//        if (sflag) {
//            printf("%dx%d ", d, y);
//        } else {
//            printf("%do ", d);
//        }
    }
    printf("\n");

    return 0;

}
