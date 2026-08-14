// project euler prob 59 - xor decryption

#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[10000];
    int n = 0;
    FILE *file=fopen("0059_cipher.txt","r");
    if(file != NULL) {
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            data[n] = ch;
            ++n;
        }
        data[n] = '\0';
        fclose(file);
    }
    printf("the third char is %c\n",data[2]);
    printf("the forth char is %c\n",data[3]);
    printf("the string is %d characters long\n",n);
    char* tok = strtok(data, ",");
//    printf("first thing is %s\n",tok);
    
    while (tok != NULL) {
        printf("next is %s\n",tok);
        tok = strtok(NULL, ",");
    }

    return 0;
}
