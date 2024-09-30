/*
 * Elisabeth Nguyen - ehn0018
 * CSCE 3600-004 Major 1
 * Date: 09/29/2024
 * Description: Switches the endianness of a 32 bit unsigned integer
 */

 /* Testing instructions (if you want to see the binary):
    1. uncomment the printBin() function
    2. uncomment the printf() and printBin() calls below the variable you want to see (Its helpful to just see the initial and final binary values)
 */

#include "major1.h"

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

unsigned int endianSwap(unsigned int num) {
    //original order B3, B2, B1, B0
    //final order B0, B1, B2, B3
    
    //printf("initial: ");
    //printBin(num);

    //B3 and B0 shift left and right respectively to final position
    int B0 = num << 24;
    //printf("B0: ");
    //printBin(B0);

    int B3 = num >> 24;
    //printf("B3: ");
    //printBin(B3);

    //B1 and B2 isolate by shifting left and right, then shifts to final position
    int B1 = ((num >> 8) << 24) >> 8;
    //printf("B1: ");
    //printBin(B1);

    int B2 = ((num << 8) >> 24) << 8;
    //printf("B2: ");
    //printBin(B2);
    
    //final value adds all bytes together
    int final = B0 + B1 + B2 + B3;
    //printf("final: ")
    //printBin(final);
    return (final);
}
