#include <stdio.h>

int main() {
    // basic declare, just watch out dtype
    int x;
    x = 2;
    int y = 3;
    printf("x = %d, y = %d\n", x, y);

    /*
        declare arr
        type arrayName[arraySize];
    */
    int intArr[4]; // init first, assign later
    intArr[0] = 1;
    intArr[1] = 2;
    intArr[2] = 3;
    intArr[3] = 40;
    for (int i = 0; i < 4; i++) {
        printf("intArr[%d] = %d\n", i, intArr[i]);
    }


    /*
    gpt
    In C, when you declare an array like int intArr[4]; without explicitly initializing it, 
    the contents of the array are not automatically set to zero or any other default value. 
    The array will contain "garbage values," which are essentially 
    whatever values were previously at those memory locations.     
    This behavior occurs because local variables and arrays in C are not automatically initialized.
    
    <Note: not sure if it is really true. but just watch out>

    int intArr[4] = {0}; // Only the first element is explicitly set to 0, all others are implicitly set to 0 by default.
    int intArr[4] = {1, 2, 3, 4}; // Explicitly initializing all elements.
    int intArr[4] = {1, 2, 3}; // intArr[3] will be automatically set to 0.

    */


    int intArr_b[5] = {-100, 12, 13, 14, 2}; // together, and whatever you init with this method, the rest would become default 0
    /*
    the rule apply for other datatype
    float floatArray[5] = {3.14};  // floatArray[0] = 3.14, and floatArray[1] to floatArray[4] = 0.0

    */

    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("intArr_b[%d] = %d\n", i, intArr_b[i]);
    }

    printf("======Don't hardcore num========\n");
    // don't hardcode 5
    int numElements = sizeof(intArr_b) / sizeof(intArr_b[0]);
    // what is sizeof??
    for (int i = 0; i < numElements; i++) {
        printf("intArr_b[%d] = %d\n", i, intArr_b[i]);
    }


    














    return 0;
}