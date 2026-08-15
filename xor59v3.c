// project euler prob 59 - xor decryption
// version 3 ask for key and xor to
// decrypt

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char data[10000];
    int n = 0;
    int cychar[4000];
    int cydex = 0;
    char key[5];
    int intkey[5];
    int mastersum = 0;

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

    printf("enter three lower case letter key\n");
    scanf("%s", key);
    intkey[0] = key[0];
    intkey[1] = key[1];
    intkey[2] = key[2];
    printf("first is %c or %d\n", key[0], intkey[0]);
    printf("second is %c or %d\n", key[1], intkey[1]);
    printf("third is %c or %d\n", key[2], intkey[2]);

    // print the xor 'plaintext'

    int ptchar;

    for (int i=0; i < cydex; i++) {
        ptchar = cychar[i] ^ intkey[i%3];
        mastersum += ptchar;
        if ((ptchar > 31) && (ptchar < 127)) {
            printf("%c",ptchar);
        } else {
            printf(".");
        }
    }
    printf("\n");
    printf("mastersum is %d\n", mastersum);


    return 0;
}
