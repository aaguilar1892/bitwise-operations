#include "major1.h"

int main(){
    //Operand
    int num;

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
                    scanf("%d", &num);

                    if(num >= 1 && num <= 4294967295){
                        //Count Leading Zeroes
                        validNum = 1;
                        int leading0s = CountLeadingZeroes(num);
                        printf("\e[1mThe number of leading zeroes in %d is %d\n\e[m", num, leading0s);
                    }
                }
                    break;
            case 2:
                //Endian Swap
                break;
            case 3:
                //Rotate-right
                //If “Rotate right” selected, prompt for 2nd int between 1 and 31, inclusively
                break;
            case 4:
                //Parity
                while(validNum == 0){
                    // Prompt for a 32-bit number
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%d", &num);

                    if(num >= 1 && num <= 4294967295){
                        // Compute parity
                        validNum = 1;
                        int parity = compute_parity((unsigned int)num); // Call the function from parity.c
                        printf("Parity of %d is %d\n", num, parity);  // Output result: 0 for even, 1 for odd
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
