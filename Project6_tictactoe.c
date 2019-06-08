
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 3


void display_table(char board[SIZE][SIZE]);
void clear_table(char board[SIZE][SIZE]);
_Bool check_table_full(char board[SIZE][SIZE]);
void get_player1_move(char board[SIZE][SIZE],int row, int col);
void generate_player2_move(char board[SIZE][SIZE],int row,int col);
_Bool check_end_of_game(char board[SIZE][SIZE]);
int check_three_in_a_row(char board[SIZE][SIZE]);
void print_winner(char board[SIZE][SIZE]);
_Bool check_legal_option(char board[SIZE][SIZE], int row, int col);
void update_table(char board[SIZE][SIZE], int row, int col, char token);


int main ()
{
        //Declare the tic-tac-toe board
        char board[SIZE][SIZE];

        //The row and column of the move for eith player 1 or 2
        int row, col;

        //Clear the table
        clear_table(board);

        //Display the clear_table
        display_table(board);

        do {
                //Have player 1 enter their move
                get_player1_move(board, row, col);

                //Generate player 2 move
                generate_player2_move(board, row, col);

                //Do this while the game hasn't ended
        } while(check_end_of_game(board) == false);

        //After the game is over, print who won
        print_winner(board);

        return 0;
}


void display_table(char board[SIZE][SIZE])
{
        int i, j;
        printf("The current state of the game is:\n");
        for(i = 0; i < SIZE; i++)
        {
                for(j = 0; j < SIZE; j++)
                {
                        printf("%c ", board[i][j]);
                }
                printf("\n");
        }
}
void clear_table(char board[SIZE][SIZE])
{
        for(int i = 0; i < SIZE; i++)
        {
                for(int j = 0; j < SIZE; j++)
                {
                        board[i][j] = '_';
                }
        }
}

_Bool check_table_full(char board[SIZE][SIZE])
{
        int i, j;
        for(i = 0; i < SIZE; i++)
        {
                for(j = 0; j < SIZE; j++)
                {
                        if(board[i][j] == '_')
                        {
                                return false;
                        }
                }
        }
        return true;
}

void update_table(char board[SIZE][SIZE], int row, int col, char token)
{
        board[row][col] = token;
}

_Bool check_legal_option(char board[SIZE][SIZE], int row, int col)
{
        if(((row < 3) && (col < 3)) && (board[row][col] == '_'))
        {
                return true;
        }
        else
        {
                return false;
        }
}


void generate_player2_move(char board[SIZE][SIZE], int row, int col)
{

        srand(time(NULL));
        row = (rand() % 3);
        col = (rand() % 3);

        do
        {
                row = (rand() % 3);
                col = (rand() % 3);
        }
        while(check_legal_option(board, row, col) == false);
        printf("Player 2 has entered [row, col]: %d, %d\n", row+1, col+1);
        update_table(board, row, col, 'X');
        display_table(board);
}

int check_three_in_a_row(char board[SIZE][SIZE])
{
        int i, j;

        for(i = 0; i < SIZE; i++)
        {
                if( ((board[i][0]) == 'X') && ((board[i][1]) == 'X') && ((board[i][2]) == 'X'))
                {
                        return 2;
                }
                else if( ((board[i][0]) == 'O') && ((board[i][1]) == 'O') && ((board[i][2]) == 'O'))
                {
                        return 1;
                }
        }
        for(j = 0; j < SIZE; j++)
        {
                if( ((board[0][j]) == 'X') && ((board[1][j]) == 'X') && ((board[2][j]) == 'X'))
                {
                        return 2;
                }
                else if( ((board[0][j]) == 'O') && ((board[1][j]) == 'O') && ((board[2][j]) == 'O'))
                {
                        return 1;
                }
        }

        if( ((board[0][0]) == 'X') && ((board[1][1]) == 'X') && ((board[2][2]) == 'X'))
        {
                return 2;
        }
        else if( ((board[0][0]) == 'O') && ((board[1][1]) == 'O') && ((board[2][2]) == 'O'))
        {
                return 1;
        }
        if( ((board[0][2]) == 'X') && ((board[1][1]) == 'X') && ((board[2][0]) == 'X'))
        {
                return 2;
        }
        else if( ((board[0][2]) == 'O') && ((board[1][1]) == 'O') && ((board[2][0]) == 'O'))
        {
                return 1;
        }

        return 0;
}

_Bool check_end_of_game(char board[SIZE][SIZE])
{
        if((check_three_in_a_row(board) == 1) || (check_three_in_a_row(board) == 2))
        {
                return true;
        }
        if(check_table_full(board) == true)
        {
                return true;
        }
        else if(check_table_full(board) == false)
        {
                return false;
        }
}
void get_player1_move(char board[SIZE][SIZE],int row, int col)
{
        do
        {
                printf("Player 1 enter your selection [row, col]: ");
                scanf("%d, %d", &row, &col);
                row = row-1;
                col = col-1;
        }
        while(check_legal_option(board, row, col) == false);

        update_table(board, row, col, 'O');
        display_table(board);
}
void print_winner(char board[SIZE][SIZE])
{
        if(check_three_in_a_row(board) == 1)
        {
                printf("Congratulations, Player 1 wins!\n");
        }
        else if(check_three_in_a_row(board) == 2)
        {
                printf("Congratulations, Player 2 wins!\n");
        }
        else if(check_end_of_game(board) == true)
        {
                printf("Game over, no player wins.\n");
        }
}
