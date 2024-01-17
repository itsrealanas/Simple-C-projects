// Rock Paper Scissor Game using C
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int game(char you,char computer){
    if(you==computer){
        return -1;
    }
  
    if(you=='r' && computer=='p'){
        return 0;
    }
    else if(you=='p' && computer=='r'){
        return 1;
    }

    if(you=='p' && computer=='s'){
        return 0;
    }
    else if(you=='s' && computer=='p'){
        return 1;
    }

    if(you=='s' && computer=='r'){
        return 0;
    }
    else if(you=='r' && computer=='s'){
        return 1;
    }
    else{
        return 2;
    }
}
int main() {
    int n;
    char you,computer, result;

        srand(time(NULL));
        n= rand() %10;

        if(n<=3){
        computer = 'r';
        }
         if(n>3 && n<6){
            computer = 'p' ;
        }
        else {
            computer = 's';
        }
    
        printf("\n\n\n<======== Rock Paper Scissors ========>\n\n\n");
        printf("Enter 'r' for Rock, 'p' for Paper and 's' for Scissors : ");
        scanf("%c",&you);
        printf("\n\nYou chose : %c \n\n",you);
        sleep(2);
        printf("Computer chooses : %c \n\n", computer);
        sleep(2);
        result= game(you,computer);

        if(result == -1){
            printf("The match is a tie.");
        }
        else if(result == 1){
        printf("Congrats! You Won!");
        }
        else if(result == 2){
            printf("You have entered a wrong choice,.");
        }
        else{
           printf("You Lost");
        }
        sleep(1);
    return 0;
}
