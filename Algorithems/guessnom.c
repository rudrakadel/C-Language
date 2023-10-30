#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 1;
    int upper = 100;
    int number_to_guess, player_guess, attempts = 0;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    number_to_guess = (rand() % (upper - lower + 1)) + lower;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've selected a random number between %d and %d.\n", lower, upper);

    do {
        printf("Enter your guess: ");
        scanf("%d", &player_guess);
        attempts++;

        if (player_guess < number_to_guess) {
            printf("Try higher!\n");
        } else if (player_guess > number_to_guess) {
            printf("Try lower!\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", number_to_guess, attempts);
        }
    } while (player_guess != number_to_guess);

    return 0;
}
