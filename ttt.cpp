#include <iostream>
using namespace std;

void printBoard();
void checkWinner();

const char X = 'X';
const char O = 'O';
bool noWinner = true;
char board[3][3];
char turn = X;

int main() {
  int playLocation;

  while (noWinner) {
    printBoard();
    cout << "It is " << turn << "'s turn: ";
    cin >> playLocation;
    int i = playLocation % 3;
    int j = playLocation / 3;
    if (board[i][j]) {
      cout << " -- Invalid --\n";
    } else {
      board[i][j] = turn;
      checkWinner();
      if (!noWinner) continue;
      if (turn == X)
        turn = O;
      else
        turn = X;
    }
  }
}

const int COMBOS[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6},
                          {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};

void checkWinner() {
  for (int i = 0; i < 8; i++) {
    int l0 = COMBOS[i][0], l1 = COMBOS[i][1], l2 = COMBOS[i][2];

    if (board[l0 % 3][l0 / 3] == board[l1 % 3][l1 / 3] &&
        board[l1 % 3][l1 / 3] == board[l2 % 3][l2 / 3]) {
      char winner = board[l0 % 3][l0 / 3];
      if (winner == X || winner == O) {
        cout << "Winner is: " << winner << endl;
        noWinner = false;
      }
    }
  }
}

/*
    i j
0   0 0
1   1 0
2   2 0

3   0 1
4   1 1
5   2 1

6   0 2
7   1 2
8   2 2

   |   |
---+---+---
   |   |
---+---+---
   |   |
  */
const int B_W = 11;
const int B_H = 5;
void printBoard() {
  // Generate board decals
  char boardDecals[B_H][B_W];
  for (int i = 0; i < B_H; i++) {
    for (int j = 0; j < B_W; j++) {
      if (i % 2 == 0) {
        if (j == 3 || j == 7)
          boardDecals[i][j] = '|';
        else
          boardDecals[i][j] = ' ';
      } else {
        if (j == 3 || j == 7)
          boardDecals[i][j] = '+';
        else
          boardDecals[i][j] = '-';
      }
    }
  }

  // Show board
  int location = 0;
  for (int i = 0; i < B_H; i++) {
    for (int j = 0; j < B_W; j++) {
      if (i % 2 == 0) {
        if (j == 1 || j == 5 || j == 9) {
          int boi = location % 3;
          int boj = location / 3;
          if (board[boi][boj]) {
            char play = board[boi][boj];
            if (play != X && play != O) {
              play = '-';
            }
            cout << play;
          } else
            cout << '-';
          location++;
        } else {
          cout << boardDecals[i][j];
        }
      } else {
        cout << boardDecals[i][j];
      }
    }
    cout << endl;
  }

  cout << endl;
  // Show board
  location = 0;
  for (int i = 0; i < B_H; i++) {
    for (int j = 0; j < B_W; j++) {
      if (i % 2 == 0) {
        if (j == 1 || j == 5 || j == 9) {
          int boi = location % 3;
          int boj = location / 3;
          if (board[boi][boj])
            cout << board[boi][boj];
          else
            cout << location;

          location++;
        } else {
          cout << boardDecals[i][j];
        }
      } else {
        cout << boardDecals[i][j];
      }
    }
    cout << endl;
  }
}