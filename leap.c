#include "leap.h"
#include <stdio.h>

bool leap_year(int year)
{
    if((year % 400) == 0){
        return true;
    }
    else if((year % 100) == 0){
        return false;
    }
    else if((year % 4) == 0){
        return true;
    }
    else {
        return false;
    }
}

int main(void)
{
    int tyear;
    printf("enter a year:\n");
    scanf("%d", &tyear);
    if(leap_year(tyear)){
        printf("%d is a leap year\n", tyear);
    }
    else {
        printf("%d is not a leap year\n", tyear);
    }
    return 0;
}
