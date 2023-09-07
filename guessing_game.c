#include <stdio.h>

int main(){
    int secret_Num = 5;
    int guess;
    int no_of_guesses = 0; 
    int guess_limit = 5;
    int out_of_guesses = 0;
    int lucky_numbers[] = {1, 2, 5, 8};

    /*while(out_of_guesses ==  0 && guess != secret_Num){

        if (no_of_guesses < guess_limit){
            printf("enter the number: \n");
        scanf("%d", &guess);
        }
        else {
            out_of_guesses = 1;
        }*/
    int i;
    for (int i = 0; i < 3; i++){
        prinf("%d\n", lucky_numbers[i]); 
    }
        printf("you win!\n");
        return 0;
    
        
    }
   
