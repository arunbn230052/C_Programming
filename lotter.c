#include <stdio.h>

int main() {
    int lotteryNumber;
    int userGuess;
    srand(time(NULL));
    lotteryNumber = rand() % 10 + 1;
    printf("Guess the lottery number (between 1 and 10): ");
    scanf("%d", &userGuess);
    if (userGuess == lotteryNumber) {
        printf("Congratulations! You've won the lottery!\n");
    } else {
        printf("Sorry, the correct lottery number was %d. Better luck next time!\n", lotteryNumber);
    }

    return 0;
}