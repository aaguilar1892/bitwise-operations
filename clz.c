/* Name: Corinna Martin
 * EUID: cmm0789
 * Date: 9/19/24
 * Description: Counts the number of leading zeroes in a 32-bit integer
 */

#include "major1.h"

int CountLeadingZeroes(unsigned int num){

        int leading0s = 0;
        unsigned int temp;

        for(int i = 31; i >= 0; --i){
                temp = num >> i;

                if(temp & 1){
                        return leading0s;
                }
                else{
                        ++leading0s;
                }
        }

        return leading0s;
}
