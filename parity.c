/* 
    Alexis Aguilar (aa1732)
    parity.c

    parity.c instructions:
    This code will contain a single function (and the include directive to your header
    file) to perform the parity computation on the input integer passed to this function.
    The output of the function is 0 if the input has even parity (that is, the number of
    1s in the binary representation of the input is even) and 1 if the input has odd
    parity (that is, the number of 1s in the binary representation of the input is odd).

    @param num The 32-bit integer whose parity is to be computed.
    @return 0 if even parity, 1 if odd parity.
*/

#include "major1.h"
//#include <stdio.h> //for testing purposes

int compute_parity(unsigned int num) {
    int parity = 0;
    
    // Compute parity by counting the number of 1's using bitwise operations
    while (num) {
        parity ^= (num & 1);  // XOR the least significant bit with the parity
        num >>= 1;            // Shift the number right by 1 to process the next bit
    }

    return parity;  // Return the computed parity (0 for even, 1 for odd)
}

// This is for testing purposes, please disregard :D
/*int main()
{
    printf("Parity is %d\n", compute_parity(5768));

    return 0;
}
*/
