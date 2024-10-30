#include <stdio.h>


char* PlayRPS(char* player1, char* player2);

int main(void) {


	return 0;
}

char* PlayRPS(char* player1, char* player2) {
	//check if NULL
	if (!player1 || !player2) {
		return "invalid";
	}
	//check if inputs are valid
	if (!(strcmp(player1, "rock") == 0 || strcmp(player1, "paper") == 0 || strcmp(player1, "scissors") == 0) ||
		!(strcmp(player2, "rock") == 0 || strcmp(player2, "paper") == 0 || strcmp(player2, "scissors") == 0)) {
		return "invalid";
	}

}