/* getchar n putchar from K&R

   term emulator doesn't send text to the
   program until you hit return, and 
   cntrl-d just sends things immediately, and 
   if you send nothing it's considered
   EOF "stty -icanon" turns off the delay
   until return behavior "stty icanon"
   turns it back on :) */

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    printf("EOF is maybe: %d\n", c);

    return 0;
}
