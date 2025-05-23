#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand() % 100) +1;
    int no_of_guesses = 0;
    int guessed;

    do{
        printf("Guess the Number: ");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed<randomNumber){
            printf("Higher number please!\n");
        }
        else printf("Congratulations :) \n");
        no_of_guesses++;
    }while(randomNumber != guessed);
    printf("You won the guess battle in %d guesses", no_of_guesses);
    

    return 0 ;
}