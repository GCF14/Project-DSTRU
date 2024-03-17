#include <stdio.h>

void initialize(char brd[][6], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			brd[i][j] = ' ';
		}
	}
}

void board(char brd[][6], int size) {
	int i, j, k;
	int col = 1;
	printf("   1   2   3   4   5   6\n ");
	for (i = 0; i < size; i++) {
        printf("----");
    }
    printf("-\n");
    for (i = 0; i < size; i++) {
    	printf("%d", col);
    	for (j = 0; j < size; j++) {
    		//print X or O
    		printf("| %c ", brd[i][j]);
    		
		}
		printf("|\n ");
		if (j % 2 == 0) {
			for (k = 0; k < size; k++) {
        	printf("----");
   			}
   			printf("-\n");
		}
		else {
			printf("\n");
		}
		col++;
	}
}

char determineMove(int turn)
{
	char move = 'X';
	
	if(turn % 2 == 0)
		move = 'O';
	
	return move;		
}

int isSpaceTaken(char brd[][6], int move) {
	int taken = 0;
	switch(move)
	{
		case 11:
			if (brd[0][0] == 'X' || brd[0][0] == 'O')
				taken = 1;
			break;
		case 12:
			if (brd[0][1] == 'X' || brd[0][1] == 'O')
				taken = 1;
			break;
		case 13:
			if (brd[0][2] == 'X' || brd[0][2] == 'O')
        		taken = 1;
			break;
		case 14:
			if (brd[0][3] == 'X' || brd[0][3] == 'O')
          		taken = 1;
			break;
		case 15:
			if (brd[0][4] == 'X' || brd[0][4] == 'O')
          		taken = 1;
			break;
		case 16:
			if (brd[0][5] == 'X' || brd[0][5] == 'O')
         		taken = 1;
			break;
	
		case 21:
			if (brd[1][0] == 'X' || brd[1][0] == 'O')
          		taken = 1;
			break;
		case 22:
			if (brd[1][1] == 'X' || brd[1][1] == 'O')
          		taken = 1;
			break;
		case 23:
			if (brd[1][2] == 'X' || brd[1][2] == 'O')
          		taken = 1;
			break;
		case 24:
			if (brd[1][3] == 'X' || brd[1][3] == 'O')
          		taken = 1;
			break;
		case 25:
			if (brd[1][4] == 'X' || brd[1][4] == 'O')
         		taken = 1;
			break;
		case 26:
			if (brd[1][5] == 'X' || brd[1][5] == 'O')
         		taken = 1;
			break;
		
		case 31:
			if (brd[2][0] == 'X' || brd[2][0] == 'O')
         		taken = 1;
			break;
		case 32:
			if (brd[2][1] == 'X' || brd[2][1] == 'O')
        		taken = 1;
			break;
		case 33:
			if (brd[2][2] == 'X' || brd[2][2] == 'O')
        		taken = 1;
			break;
		case 34:
			if (brd[2][3] == 'X' || brd[2][3] == 'O')
        		taken = 1;
			break;
		case 35:
			if (brd[2][4] == 'X' || brd[2][4] == 'O')
        		taken = 1;
			break;
		case 36:
			if (brd[2][5] == 'X' || brd[2][5] == 'O')
           		taken = 1;
			break;
			
		case 41:
			if (brd[3][0] == 'X' || brd[3][0] == 'O')
         		taken = 1;
			break;
		case 42:
			if (brd[3][1] == 'X' || brd[3][1] == 'O')
          		taken = 1;
			break;
		case 43:
			if (brd[3][2] == 'X' || brd[3][2] == 'O')
          		taken = 1;
			break;
		case 44:
			if (brd[3][3] == 'X' || brd[3][3] == 'O')
           		taken = 1;
			break;
		case 45:
			if (brd[3][4] == 'X' || brd[3][4] == 'O')
            taken = 1;
			break;
		case 46:
			if (brd[3][5] == 'X' || brd[3][5] == 'O')
            taken = 1;
			break;
			
		case 51:
			if (brd[4][0] == 'X' || brd[4][0] == 'O')
            taken = 1;
			break;
		case 52:
			if (brd[4][1] == 'X' || brd[4][1] == 'O')
            taken = 1;
			break;
		case 53:
			if (brd[4][2] == 'X' || brd[4][2] == 'O')
            taken = 1;
			break;
		case 54:
			if (brd[4][3] == 'X' || brd[4][3] == 'O')
            taken = 1;
			break;
		case 55:
			if (brd[4][4] == 'X' || brd[4][4] == 'O')
            taken = 1;
			break;
		case 56:
			if (brd[4][5] == 'X' || brd[4][5] == 'O')
            taken = 1;
			break;
		
		case 61:
			if (brd[5][0] == 'X' || brd[5][0] == 'O')
            taken = 1;
			break;
		case 62:
			if (brd[5][1] == 'X' || brd[5][1] == 'O')
            taken = 1;
			break;
		case 63:
			if (brd[5][2] == 'X' || brd[5][2] == 'O')
            taken = 1;
			break;
		case 64:
			if (brd[5][3] == 'X' || brd[5][3] == 'O')
            taken = 1;
			break;
		case 65:
			if (brd[5][4] == 'X' || brd[5][4] == 'O')
            taken = 1;
			break;
		case 66:
			if (brd[5][5] == 'X' || brd[5][5] == 'O')
            taken = 1;
			break;
	
	}
	return taken;
}

void playerTurn(char brd[][6], int size, int turn) {
	int move;
	do {
		printf("Which space do you want? ");
		scanf("%d", &move);
	} while (!((move >= 11 && move <= 16) || (move >= 21 && move <= 26) || (move >= 31 && move <= 36) || (move >= 41 && move <= 46) || (move >= 51 && move <= 56) || (move >= 61 && move <= 66)) || isSpaceTaken(brd, move));
	 
	switch(move) {
		case 11:
			brd[0][0] = determineMove(turn);
			break;
		case 12:
			brd[0][1] = determineMove(turn);
			break;
		case 13:
			brd[0][2] = determineMove(turn);
			break;
		case 14:
			brd[0][3] = determineMove(turn);
			break;
		case 15:
			brd[0][4] = determineMove(turn);
			break;
		case 16:
			brd[0][5] = determineMove(turn);
			break;
			
		case 21:
			brd[1][0] = determineMove(turn);
			break;
		case 22:
			brd[1][1] = determineMove(turn);
			break;
		case 23:
			brd[1][2] = determineMove(turn);
			break;
		case 24:
			brd[1][3] = determineMove(turn);
			break;
		case 25:
			brd[1][4] = determineMove(turn);
			break;
		case 26:
			brd[1][5] = determineMove(turn);
			break;
		
		case 31:
			brd[2][0] = determineMove(turn);
			break;
		case 32:
			brd[2][1] = determineMove(turn);
			break;
		case 33:
			brd[2][2] = determineMove(turn);
			break;
		case 34:
			brd[2][3] = determineMove(turn);
			break;
		case 35:
			brd[2][4] = determineMove(turn);
			break;
		case 36:
			brd[2][5] = determineMove(turn);
			break;
			
		case 41:
			brd[3][0] = determineMove(turn);
			break;
		case 42:
			brd[3][1] = determineMove(turn);
			break;
		case 43:
			brd[3][2] = determineMove(turn);
			break;
		case 44:
			brd[3][3] = determineMove(turn);
			break;
		case 45:
			brd[3][4] = determineMove(turn);
			break;
		case 46:
			brd[3][5] = determineMove(turn);
			break;
			
		case 51:
			brd[4][0] = determineMove(turn);
			break;
		case 52:
			brd[4][1] = determineMove(turn);
			break;
		case 53:
			brd[4][2] = determineMove(turn);
			break;
		case 54:
			brd[4][3] = determineMove(turn);
			break;
		case 55:
			brd[4][4] = determineMove(turn);
			break;
		case 56:
			brd[4][5] = determineMove(turn);
			break;
		
		case 61:
			brd[5][0] = determineMove(turn);
			break;
		case 62:
			brd[5][1] = determineMove(turn);
			break;
		case 63:
			brd[5][2] = determineMove(turn);
			break;
		case 64:
			brd[5][3] = determineMove(turn);
			break;
		case 65:
			brd[5][4] = determineMove(turn);
			break;
		case 66:
			brd[5][5] = determineMove(turn);
			break;
	}
}

int winCondition() {
	
	
	
}

int main() {
	char brd[6][6];
	int turn = 1;
	initialize(brd, 6);
	board(brd, 6);
	while (turn < 10) {
		playerTurn(brd, 6, turn);
		board(brd, 6);
		turn++;
	}
	
	return 0;
}
