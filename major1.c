#include "major1.h"

int main(){

    //Display menu
    int choice;

    printf("Enter the menu option for the operation to perform: \n");
    printf(" (1)  Count Leading Zeroes\n");
    printf(" (2)  Endian Swap\n");
    printf(" (3)  Rotate-right\n");
    printf(" (4)  Parity\n");
    printf(" (5)  EXIT\n");
    printf(" -->  ");
    
    //Menu selection
    scanf("%d", &choice);
    
    //Prompt for integer between 1 and 4294967295, inclusively
    //If “Rotate right” selected, prompt for 2nd int between 1 and 31, inclusively
    //Call chosen operation function

    return 0;
}
