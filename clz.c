/* Name: Corinna Martin
 * EUID: cmm0789
 * Date: 9/19/24
 * Description: Counts the number of leading zeroes in a 32-bit integer
 */

#include "major1.h"

int CountLeadingZeroes(unsigned int num){

        //Initialize # leading zeroes to = 0
        int leading0s = 0;
        unsigned int temp;

        //Count each 0 bit from left to right until a 1 is reached
        for(int i = 31; i >= 0; --i){
                //Shift right one to check next bit
                temp = num >> i;

                //If bit is a 1, stop counting
                //Otherwise, increment # of leading zeroes
                if(temp & 1){
                        return leading0s;
                }
                else{
                        ++leading0s;
                }
        }

        //If all bits are zeroes, return # leading zeroes after loop
        return leading0s;
}
