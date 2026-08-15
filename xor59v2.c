// project euler prob 59 - xor decryption
// version 2 got as far as reading cyphertext
// ints to an array

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char data[10000];
    int n = 0;
    int cychar[4000];
    int cydex = 0;
    FILE *file=fopen("0059_cipher.txt","r");
    if (file != NULL) {
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            data[n] = ch;
            ++n;
        }
        data[n] = '\0';
        fclose(file);
    }
    printf("the forth char is %c\n",data[3]);
    printf("the string is %d characters long\n",n);
    char* tok = strtok(data, ",");
//    printf("first thing is %s\n",tok);
//    cychar[cydex] = atoi(tok);
    
    while (tok != NULL) {
        cychar[cydex] = atoi(tok);
        ++cydex;
        tok = strtok(NULL, ",");
//        printf("next is %s\n",tok);
    }
    printf("there are %d cypher chars\n",cydex);
    printf("first is: %d\n", cychar[0]);
    printf("last is: %d\n", cychar[cydex-1]);

    return 0;
}
