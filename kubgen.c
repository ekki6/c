// kubgen in c

#include <stdio.h>

int main(void) 
{
    const char stathash[] =
        "7ef0742612e4db668ea2a7b5779f69cf"
        "13762b48d36812fd72eda69207460a71"
        "d2e2c901b8f46991249bd566e98b9e2b"
        "b31e897029c54c20f57a31e8e23f452f";

    printf("hash is %s\n", stathash);
    printf(" size of hash is %zu\n", sizeof stathash);
    printf("hash char 0 is %c\n", stathash[0]);
    printf("hash char 127 is %c\n", stathash[127]);

    return 0;

}
