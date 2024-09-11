#include "major1.h"
//#include <stdio.h> //for testing purposes
/**
 * Function to compute the parity of a 32-bit integer.
 * The parity is 0 if the number of 1's in the binary representation is even, 
 * and 1 if the number of 1's is odd.
 *
 * @param num The 32-bit integer whose parity is to be computed.
 * @return 0 if even parity, 1 if odd parity.
 */
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
