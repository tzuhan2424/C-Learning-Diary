#include <stdio.h>
#include "primeHelper.h"




int main() {
    // prompt user to input data
    char input[100];
    int number;

    printf("Please enter number: ");
    if (fgets(input, sizeof(input), stdin) && validate_and_convert_input(input, &number)) {
        printf("Valid number entered: %d\n", number);
        // Additional logic can go here if needed
    } else {
        printf("Invalid input. Please enter a valid integer.\n");
    }


    return 0;
}