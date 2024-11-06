#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
                     
    srand(time(0));   // Initialize random number generator
   
    int number = (rand() % 100) + 1;  // Generate random number between 1 and 100
    int attempts  = 0;
    int guess;


    do{
        printf("Guess the number (between 1 and 100):");
        scanf("%d", &guess);
        
        if(guess>number){
            printf("Lower number please!\n");
        } else if(guess<number){
            printf("Higher number please!\n");
        }
         attempts ++;
    }  while (guess != number);

    printf("You guessed the number in %d guesses", attempts );

    return 0;
}  