#include "major1.h"
//stdio.h only needed for testing
//#include <stdio.h>
//FOR TESTING PURPOSES - prints the number in binary, split up by tabs to easily see bytes
/*
void printBin(int num) {
    for (int i = 31; i >= 0; i--) {
        if (i%8 ==7) {
            printf(" ");
        }
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}
*/

int endianSwap(int init) {
    //original order B3, B2, B1, B0
    //printf() and printBin() for testing
    //printf("init: ");
    //printBin(init);

    //B3 and B0 shift left and right respectively to final position
    int B0 = init << 24;
    //printf("B0: ");
    //printBin(B0);

    int B3 = init >> 24;
    //printf("B3: ");
    //printBin(B3);

    //B1 and B2 isolate by shiftng left and right, then shifts to final position
    int B1 = ((init >> 8) << 24) >> 8;
    //printf("B1: ");
    //printBin(B1);

    int B2 = ((init << 8) >> 24) << 8;
    //printf("B2: ");
    //printBin(B2);
    
    //final value adds all bytes together
    int final = B0 + B1 + B2 + B3;
    //printBin(final);
    return (final);
}
