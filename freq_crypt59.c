// project euler prob 59 - xor decryption
// perform some baloney freq analysis

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char data[10000];
    int n = 0;
    int cychar[4000];
    int cydex = 0;

    int group1[1000];
    int group2[1000];
    int group3[1000];
    int tridex = 0;

    int freq1[150] = { 0 };
    int freq2[150] = { 0 };
    int freq3[150] = { 0 };


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

    for (int i=0; i < cydex; i+=3) {
        group1[tridex] = cychar[i];
        group2[tridex] = cychar[i+1];
        group3[tridex] = cychar[i+2];
        tridex++;
    }
    printf("tridex is %d\n", tridex);
    printf("last group3 is %d\n", group3[tridex-1]);

    for (int j=0; j < tridex; j++) {
        ++freq1[group1[j]];
        ++freq2[group2[j]];
        ++freq3[group3[j]];
    }

    for (int k=0; k < 101; k++) {
        printf("%d\t%d\t%d\t%d\n",k,freq1[k],freq2[k],freq3[k]);
    }

    return 0;
}
