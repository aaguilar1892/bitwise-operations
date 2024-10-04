#include "major1.h"


int main(){
    //Operand
    long int num;
    while(1==1){
        //Display menu
        printf("Enter the menu option for the operation to perform: \n");
        printf(" (1)  Count Leading Zeroes\n");
        printf(" (2)  Endian Swap\n");
        printf(" (3)  Rotate-right\n");
        printf(" (4)  Parity\n");
        printf(" (5)  EXIT\n");
        printf(" -->  ");
    
        //Menu selection
        int choice;
        int validNum = 0;
        scanf("%d", &choice);
        switch(choice){
            case 1:
                while(validNum == 0){
                    //Prompt for integer between 1 and 4294967295, inclusively
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%ld", &num);
                    if(num >= 1 && num <= 4294967295){
                        //Count Leading Zeroes
                        validNum = 1;
                        int leading0s = CountLeadingZeroes(num);
                        printf("\e[1mThe number of leading zeroes in %ld is %d\n\e[m", num, leading0s);
                    }
                }
                    break;
            case 2:
                //Endian Swap
                while(validNum == 0){
                    // Prompt for a 32-bit number
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%ld", &num);
                    if(num >= 1 && num <= 4294967295){
                        // Perform endian swap
                        validNum = 1;
                        unsigned int endSwapped = endianSwap((unsigned int)num);
                        printf("\e[1mEndian swap of %ld gives %u\n\e[m", num, endSwapped);
                    }
                }
                break;
            case 3:
                //Rotate-right
		while(validNum == 0){
			//Prompt for a 32-bit number and number of shift positions
			printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
			scanf("%ld", &num);
			unsigned int pos;// Used to store the number of bit positions to be shifted
			printf("Enter number of positions to rotate-right the input (between 0 and 31, inclusively): ");
			scanf("%u", &pos);
			if ( (num >= 1 && num <= 4294967295) && (pos >= 0 && pos <= 31)){
				// Perform bit rotation
				validNum = 1;
				unsigned int rotate = RotateInt((unsigned int) num, (unsigned int) pos); // Call the rotate function
				printf("\e[1m%ld rotated by %u positions gives: %u\n\e[m", num, pos, rotate);// Outputs: Rotated num
			}
		}
                break;
            case 4:
                //Parity
                while(validNum == 0){
                    // Prompt for a 32-bit number
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%ld", &num);
                    if(num >= 1 && num <= 4294967295){
                        // Compute parity
                        validNum = 1;
                        int parity = compute_parity((unsigned int)num); // Call the function from parity.c
                        printf("\e[1mParity of %ld is %d\n\e[m", num, parity);  // Output result: 0 for even, 1 for odd
                    }
                }
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Error: Invalid option. Please try again.\n");
        }
    }
    return 0;
}
