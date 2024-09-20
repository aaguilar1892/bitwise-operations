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
        scanf("%d", &choice);

        switch(choice){
            case 1:
                //Prompt for integer between 1 and 4294967295, inclusively
                printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                scanf("%d", &num);

                //Count Leading Zeroes
                int leading0s = CountLeadingZeroes(num);
                printf("\e[1mThe number of leading zeroes in %d is %d\n\e[m", num, leading0s);
                break;
            case 2:
                //Endian Swap
                break;
            case 3:
                //Rotate-right
                break;
            case 4:
                //Parity
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Error: Invalid option. Please try again.\n");
        }
    }

    //If “Rotate right” selected, prompt for 2nd int between 1 and 31, inclusively
    //Call chosen operation function

    return 0;
}
