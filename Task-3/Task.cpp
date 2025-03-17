#include <iostream>
using namespace std;

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char player = 'X';

void showBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        if (i < 2) cout << "\n-----------\n";
    }
    cout << "\n\n";
}

bool markBoard(int move) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool checkWin() {
    for (int i = 0; i < 3; i++)
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void switchPlayer() {
    player = (player == 'X') ? 'O' : 'X';
}

int main() {
    int move;
    cout << "Tic-Tac-Toe Game\n";

    while (true) {
        showBoard();
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;

        if (!markBoard(move)) {
            cout << "Invalid move. Try again.\n";
            continue;
        }

        if (checkWin()) {
            showBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }

        if (checkDraw()) {
            showBoard();
            cout << "It's a draw!\n";
            break;
        }

        switchPlayer();
    }

    return 0;
}
