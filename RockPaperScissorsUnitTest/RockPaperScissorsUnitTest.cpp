#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
	char* PlayRPS(char* player1, char* player2);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsUnitTest
{
	TEST_CLASS(Player1WinTest)
	{
	public:

		TEST_METHOD(Player1WinsWithRock)
		{
			//testing output for when player1 wins with rock
			char player1[] = "rock";
			char player2[] = "scissors";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player1WinsWithPaper)
		{
			//testing output for when player1 wins with paper
			char player1[] = "paper";
			char player2[] = "rock";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player1WinsWithScissors)
		{
			//testing output for when player1 wins with scissors
			char player1[] = "scissors";
			char player2[] = "paper";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
	TEST_CLASS(Player2WinTest)
	{
	public:

		TEST_METHOD(Player2WinsWithRock)
		{
			//testing output for when player2 wins with rock
			char player1[] = "rock";
			char player2[] = "scissors";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player2WinsWithPaper)
		{
			//testing output for when player2 wins with paper
			char player1[] = "paper";
			char player2[] = "rock";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
		TEST_METHOD(Player2WinsWithScissors)
		{
			//testing output for when player2 wins with scissors
			char player1[] = "scissors";
			char player2[] = "paper";
			char expected[] = "player1";

			char* output = PlayRPS(player1, player2);
			Assert::AreEqual(std::string(expected), std::string(output));
		}
	};
}
