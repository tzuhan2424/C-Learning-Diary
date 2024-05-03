#include <stdio.h>

int main() {
    
    /*
    int num;
    printf("give me number(EOF to stop):");
    while (scanf("%d", &num) != EOF){
        printf("this is the number you give: %d\n", num);
    }
    printf("EOF detected, stopping input.\n");
    */

    int counter = 5;
    printf("give me five number and I would store in array\n");
    int i = 0;
    int arr[5] = {0}; //init with 0
    int number = 0;
    while(i<counter) {

        scanf("%d", &number);
        printf("this is the number you give: %d\n", number);

        arr[i] = number;
        i++;
    }
    printf("print the number inside array\n");
    for (int i = 0; i < counter; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}




