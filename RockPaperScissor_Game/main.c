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
char* DetermineWinner(char player1[], char player2[]) {
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    if (strcmp(player1, "ROCK") == 0) {
        if (strcmp(player2, "PAPER") == 0)
            return "Player2";
        else if (strcmp(player2, "SCISSOR") == 0)
            return "Player1";
    }
    else if (strcmp(player1, "PAPER") == 0) {
        if (strcmp(player2, "ROCK") == 0)
            return "Player1";
        else if (strcmp(player2, "SCISSOR") == 0)
            return "Player2";
    }
    else if (strcmp(player1, "SCISSOR") == 0) {
        if (strcmp(player2, "ROCK") == 0)
            return "Player2";
        else if (strcmp(player2, "PAPER") == 0)
            return "Player1";
    }

    return "Invalid";
}

void GetInput(char player[], int playerNumber) {
    printf("Enter Player %d's choice (Rock, Paper, or Scissors): ", playerNumber);
    scanf("%s", player);
}

int IsUpperCase(char player[]) {
    for (int i = 0; player[i]; i++) {
        if (!isupper(player[i])) {
            return 0;
        }
    }
    return 1;
}

int UserWish() {
    int User_Choice;
    printf("0 to Continue and 1 to EXIT\n");
    int test_value = scanf("%d", &User_Choice);
    if (test_value == 1)
        return User_Choice;
    else
        return 1;
}