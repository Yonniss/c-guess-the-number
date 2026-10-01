#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    int guess = 0;
    int result;
    printf("Guess the number! \n");
    while (guess != num) {
        result = scanf("%d",&guess);
        if (result == EOF){
            return 1;
        }
        else if (result != 1)  {
            printf("Invalid data!\n");
            int c; 
            while ((c = getchar()) != '\n' && c != EOF) {

                continue;
            }    
        }
        if (guess < num) {
            printf("Try higher\n");
        } else if (guess > num) {
            printf("Try lower\n");
        } 
        else {
            printf("Guessed!\n");

        }
    }
    return 0;

}