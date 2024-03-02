#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>
int UserWish();
char* DetermineWinner(char player1[], char player2[]);
int IsUpperCase(char player[]);
void GetInput(char player[], int playerNumber);