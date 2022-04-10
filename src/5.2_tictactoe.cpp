/*
 * 5.2_tictactoe.cpp
 *
 *  Created on: Mar 30, 2022
 *      Author: eslamelkhair
 */

#include<iostream>
using namespace std;

int main_5_2() {

	//***************************************************************** Tic Tac Toe Game ****************************************************************************
	//Block 1 : Declaring & initializing
	/*	int grid[100][100] { 0 };   // 0 empty, 1 = x, 2 = o

	 int n;
	 cout << "Enter grid dimension :";
	 cin >> n;*/

	// Block : directions of the winning Player
	/*
	 int rows [100] , cols[100] ,  rows_direction[100] , cols_direction[100];

	 int verify = 0;

	 //rows direction
	 for(int r=0; r<n ;r++)
	 rows[verify] = r, cols[verify] = 0, rows_direction[verify] = 0, cols_direction[verify++] = 1 ;

	 //columns direction
	 for(int c=0; c<n ;c++)
	 rows[verify] = 0, cols[verify] = c, rows_direction[verify] = 1, cols_direction[verify++] = 0 ;

	 //left diagonal Direction
	 rows[verify] = 0, cols[verify] = 0, rows_direction[verify] = 1, cols_direction[verify++] = 0 ;

	 //right diagonal Direction
	 rows[verify] = 0, cols[verify] = n-1, rows_direction[verify] = 1, cols_direction[verify++] = -1 ;
	 */

	//		int turn =0;  // 0 for X, 1 for O
	//		int steps = 0;
	//
	//		while (true )
	//		{
	//
	//
	//	//Block 2 : when all Locations are filled the game ends /*
	//	/*		For tie
	//			3
	//			1 1
	//			1 3
	//			1 2
	//			2 2
	//			3 2
	//			2 1
	//			2 3
	//			3 3
	//			3 1
	//	*/
	//			if(steps == n*n)
	//			{
	//				cout<<"Tie"<<endl;
	//				break;
	//			}
	//
	//	//Block 3 : naming Players & input PLayers locations & check users input
	//
	//			char symbol ='X';
	//			if(turn ==1)
	//				symbol = 'O';
	//
	//			cout<<"Player "<<symbol <<" turn. Enter an empty location (r , c) :";
	//
	//			int r ,c; // user enter input as one based
	//			cin>>r>>c;
	//
	//			r -= 1, c -= 1; // convert it to zero based
	//
	//			if(r<0 || r>=n || c<0 || c>=n|| grid[r][c]!=0)
	//			{
	//				cout << "Invalid input. Try again\n";
	//				continue;
	//			}
	//
	//			grid[r][c] = turn + 1;   // if turn = 0 --> grid[r][c] = 1 --> print x || if turn = 1 --> grid[r][c] = 2 --> print o
	//
	//
	//	//Block 4 :  print the grid
	//				for (int r = 0; r < n; ++r)
	//				{
	//					for (int c = 0; c < n; ++c)
	//					{
	//						char ch = '-';
	//						if (grid[r][c] == 1)
	//							ch = 'X';
	//						else if (grid[r][c] == 2)
	//							ch = 'O';
	//						cout << ch<<" ";
	//					}
	//					cout << "\n";
	//				}
	//Block 5 : who is the winner
	/*
	 for (int check = 0; check < verify; ++check)
	 {
	 int r = rows[check], c = cols[check], rd = rows_direction[check], cd = cols_direction[check];

	 int cnt = 0, first = grid[r][c];

	 if (first == 0)
	 continue;

	 for (int step = 0; step < n; ++step, r += rd, c += cd)
	 cnt += grid[r][c] == first;

	 if (cnt == n)
	 {
	 cout << "Player " << symbol << " won\n";
	 return 0;
	 }
	 */

	//				}
	//
	//	//Block :
	//
	//			turn =!turn;
	//			steps++;
	//		}
	//Block 2
	//design of matrix body
	/*

	 //we have exchanged char datatype with string because of  space

	 char arr[9][9] =
	 {
	 {'-','-','-'},
	 {'-','-','-'},
	 {'-','-','-'}
	 };
	 */
	/*
	 string arr[9][9] =
	 {
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 1
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 2
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 3
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 4
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 5
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 6
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},  // Row : 7
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "},   // Row : 8
	 {" - ", " - "," - "," - ", " - "," - "," - ", " - "," - "}   // Row : 9
	 };
	 */
//_________________________________________________________________________________
	// My Solution
	/*
	 // 0 empty, 1 = x, 2 = o
	 int grid[100][100] = { 0 };

	 int n;
	 cout << "Enter grid dimension: ";
	 cin >> n;

	 while (true) {

	 int turn;
	 char symbol;

	 //input
	 if (turn == 0)
	 symbol = 'x';
	 else
	 symbol = 'o';

	 cout << "Player " << symbol << " turn. Enter empty location (r, c): ";
	 int r, c;
	 cin >> r >> c;

	 r -= 1, c -= 1;

	 if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] != 0) {
	 cout << "Invalid input. Try again\n";
	 continue;
	 }

	 grid[r][c] = turn + 1;

	 // output
	 for (int r = 0; r < n; ++r) {
	 for (int c = 0; c < n; ++c) {
	 string ch = ". ";
	 if (grid[r][c] == 1)
	 ch = "x ";
	 else if (grid[r][c] == 2)
	 ch = "o ";
	 cout << ch;
	 }
	 cout << "\n";
	 }

	 turn = !turn;
	 }*/

	return 0;
}

