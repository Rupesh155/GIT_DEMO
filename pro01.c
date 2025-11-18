#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int no_of_guesses = 0;
    int guessed;
    printf("Welcome to the number guessing Game !!\n");
    srand(time(0));

    randomNumber = rand() % 101;
    do
    {
        printf("Guess the number:");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lowe number please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed != randomNumber);
    printf("You guessed the number in %d guesses!", no_of_guesses);
    return 0;
}
