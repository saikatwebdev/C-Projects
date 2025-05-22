#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int randomNumber = (rand() % 100) +1;
    int yourNum;
    printf("Guess the correct Number to Win: ");
    scanf("%d",&yourNum);
    if(yourNum == randomNumber){
        printf("Computer choose %d\n",randomNumber);
        printf("You choose %d\n",yourNum);
        printf("Congrats!!You won the battle!!!");
    }
    else {
        printf("Computer choose %d\n",randomNumber);
        printf("You choose %d\n",yourNum);
        printf("Computer won :) you loose the game !!!");
    }

    return 0 ;
}