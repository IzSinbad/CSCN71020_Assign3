#include "GameLibrary.h"

int main() {
    char player1[10];
    char player2[10];

    int User_Choice = 0;
    do {
        GetInput(player1, 1);
        while (!IsUpperCase(player1)) {
            printf("Please enter a valid choice and in uppercase.\n");
            GetInput(player1, 1);
        }


        GetInput(player2, 2);
        while (!IsUpperCase(player2)) {
            printf("Please enter a valid choice and in uppercase.\n");
            GetInput(player2, 2);
        }


        char* result = DetermineWinner(player1, player2);
        printf("Winner: %s\n", result);

        User_Choice = UserWish();

    } while (User_Choice == 0);
    return 0;
}

