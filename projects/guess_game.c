#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;

    srand(time(0));

    number = rand() % 100 + 1;

    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("Enter guess: ");
        scanf("%d",&guess);

        if(guess > number)
            printf("Too high!\n");

        else if(guess < number)
            printf("Too low!\n");

        else
            printf("Correct! You won.\n");

    }while(guess != number);


    return 0;
}
