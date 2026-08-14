// project euler prob 59 - xor decryption

#include <stdio.h>

int main(void)
{
    FILE *file=fopen("0059_cipher.txt","r");
    if(file != NULL) {
        int ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        fclose(file);
    }
    return 0;
}
