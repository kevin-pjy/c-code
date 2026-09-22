#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int guess=0;
    int count=0;

    printf("please guess a number between 1 and 100:");

   
    do{
        printf("guess the number:");

        scanf("%d",&guess);

        if (guess>number){
        printf("too high ! maybe try again\n");
        count++;}
        else if (guess<number){
            printf("too low ! maybe try again\n");
            count++;
        }
    }while(guess!=number);

    printf("congratulations ! you guessed the number in %d attempts\n",count);

    return 0;
}