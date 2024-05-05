#include <stdio.h>

int main() {
    int integerInput; //declare data type
    float floatInput;
    char charInput;

    printf("Enter an integer: "); // prompt
    scanf("%d", &integerInput);
    // what is scanf?? and what is &?
    // & is also called as address of the operator
    printf("You entered: %d\n", integerInput);

    /*
    If integerInput was not initialized prior to the scanf call, 
    it will retain whatever value was previously in 
    its memory location (in this case, it seems to be 6708176), 
    which appears to be garbage data.

    handle proper input from user looks like a lot of work, skip it first

    maybe read as string first, and then convert back to number,
    and do error handling there.

    */




    // printf("Enter a floating-point number: ");
    // scanf("%f", &floatInput);
    // printf("You entered: %f\n", floatInput);

    // printf("Enter a character: ");
    // scanf(" %c", &charInput); // Note the space before %c to skip any leftover whitespace characters
    // printf("You entered: %c\n", charInput);


    return 0;
}