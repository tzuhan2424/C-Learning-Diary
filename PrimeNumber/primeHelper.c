#include "primeHelper.h"
#include <stdio.h>


// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

bool validate_and_convert_input(char *input, int *number) {
    char extra;
    // Try to convert input to an integer and check for trailing characters
    // %d reads an integer, %c attempts to read a character right after the integer
    int result = sscanf(input, "%d%c", number, &extra);
    // Return true only if exactly one item (%d) was successfully read and no characters follow
    return result == 1 || (result == 2 && (extra == '\n' || extra == '\r'));
}