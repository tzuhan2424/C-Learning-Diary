#include <stdio.h>


int main(){

    int n;
    // get user input
    printf("Enter a number from 1-12:\n");
    scanf("%d", &n);
    // use if-else to convert to Month
    if (n == 1){
        printf("Jan");
    }else if (n == 2){
        printf("Feb");
    }else if (n == 3){
        printf("Mar");
    }else if (n == 4){
        printf("Apr");
    }else if (n == 5){
        printf("May");
    }else if (n == 6){
        printf("Jun");
    }else if (n == 7){
        printf("July");
    }else if (n == 8){
        printf("Aug");
    }else if (n == 9){
        printf("Sep");
    }else if (n == 10){
        printf("Oct");
    }else if (n == 11){
        printf("Nov");
    }else if (n == 12){
        printf("Dec");
    }else{
        printf("wrong number");
    }
    

    return 0;
}
