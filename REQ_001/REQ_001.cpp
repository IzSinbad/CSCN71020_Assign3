#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* DetermineWinner(char player1[], char player2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:

		TEST_METHOD(TestingPlayer1Wins)
		{
			char player1[] = "ROCK";
			char player2[] = "SCISSOR";
			Assert::AreEqual("Player1", DetermineWinner(player1, player2));

		}
		TEST_METHOD(TestingPlayer2Wins)
		{
			char player1[] = "SCISSOR";
			char player2[] = "ROCK";
			Assert::AreEqual("Player2", DetermineWinner(player1, player2));

		}
		TEST_METHOD(TestingDraw)
		{
			char player1[] = "ROCK";
			char player2[] = "ROCK";
			Assert::AreEqual("Draw", DetermineWinner(player1, player2));

		}
		TEST_METHOD(TestingInvalidInput)
		{
			char player1[] = "312341";
			char player2[] = "SCISSOR";
			Assert::AreEqual("Invalid", DetermineWinner(player1, player2));

		}
		TEST_METHOD(TestingCaseInsensitive)
		{
			char player1[] = "RocK";
			char player2[] = "ScIssOr";
			Assert::AreEqual("Invalid", DetermineWinner(player1, player2));

		}
		TEST_METHOD(TestingRepeatedGames)
		{
			char player1[] = "ROCK";
			char player2[] = "SCISSOR";
			Assert::AreEqual("Player1", DetermineWinner(player1, player2));

			char player4[] = "ROCK";
			char player3[] = "SCISSOR";
			Assert::AreEqual("Player2", DetermineWinner(player3, player4));

		}
		TEST_METHOD(TestingLongInput)
		{
			char player1[] = "ROCKKKKKKKKKKKKKKKKKKKKKKKKKKKKK";
			char player2[] = "SCISSORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR";
			Assert::AreEqual("Invalid", DetermineWinner(player1, player2));

		}
		TEST_METHOD(TestingEmptyInput)
		{
			char player1[] = "";
			char player2[] = "SCISSOR";
			Assert::AreEqual("Invalid", DetermineWinner(player1, player2));

		}
	
	};
}






