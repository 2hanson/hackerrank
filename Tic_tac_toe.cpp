//https://www.hackerrank.com/challenges/tic-tac-toe
//
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

bool isWin(char player, vector<string> board, int r, int c)
{
    board[r][c] = player;
    //check r
    if (board[r][0]==player && board[r][1]==player && board[r][2]==player)
    {
        board[r][c] = '_';
        return true;
    }

    if (board[0][c]==player && board[1][c]==player && board[2][c]==player)
    {
        board[r][c] = '_';
        return true;
    }

    if (r==c && board[0][0]==player && board[1][1]==player && board[2][2]==player)
    {
        board[r][c] = '_';
        return true;
    }
    
    if ((r+c==2) && board[0][2]==player && board[1][1]==player && board[2][0]==player)
    {
        board[r][c] = '_';
        return true;
    }

    board[r][c] = '_';

    return false;
}

bool isLose(char player, vector<string> board, int r, int c)
{
   if (player == 'X')
   {
        player = 'O';
   }
   else
   {
        player = 'X';
   }
    board[r][c] = player;
    //check r
    if (board[r][0]==player && board[r][1]==player && board[r][2]==player)
    {
        board[r][c] = '_';
        return true;
    }

    if (board[0][c]==player && board[1][c]==player && board[2][c]==player)
    {
        board[r][c] = '_';
        return true;
    }

    if (r==c && board[0][0]==player && board[1][1]==player && board[2][2]==player)
    {
        board[r][c] = '_';
        return true;
    }
    
    if ((r+c==2) && board[0][2]==player && board[1][1]==player && board[2][0]==player)
    {
        board[r][c] = '_';
        return true;
    }

    board[r][c] = '_';

    return false;
}

/* Complete the function below to print 2 integers separated by a single space which will be your next move 
   */
void nextMove(char player, vector <string> board){
    int nr, nc;

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            if (board[r][c] != '_')
            {
                continue;
            }

            if (isWin(player, board, r, c) || isLose(player, board, r, c))
            {
                cout<<r<<" "<<c<<endl;
                return;
            }
            else
            {
               nr = r;
               nc = c;
            }
        }
    }

    cout<<nr<<" "<<nc<<endl;
}

int main() {

    char player;
    vector <string> board;

    //If player is X, I'm the first player.
    //If player is O, I'm the second player.
    cin >> player;

    //Read the board now. The board is a 3x3 array filled with X, O or _.
    for(int i=0; i<3; i++) {
		string s; cin >> s;
		board.push_back(s);
    }

	nextMove(player,board);

    return 0;
}
