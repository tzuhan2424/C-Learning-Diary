#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    // init the randome seed
    srand(time(NULL)); // use time
    
    // generate a random number
    /*
     *This function returns the value between 0 and RAND_MAX where RAND_MAX is the macro that is defined in the <stdlib.h> library.
     * */
    int number = rand() % 20;
    // prompt user to enter a number
    int guess;
    int counter = 10;
    
    while (counter != 0){
        printf("please enter a number between 0-19: ");
        scanf("%d",&guess);         
        if (guess == number){
            printf("you guess the right number, %d\n", guess);
            break;
        }else if (guess > number){
            printf("your guess is too large\n");
        }else if (guess < number){
            printf("your guess is too small\n");
        }
        counter--;
    }        
    if (counter == 0){
        printf("you run out the opportunity, the number is %d", number);
    }



    return 0;
}
