//============================================================================
// Author      : Eslam Elkhair
// Version     : v2
// Copyright   : @Elkhair's
// Description : tic tac toe using functions in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int grid[100][100] {0};   // 0 empty, 1 = x, 2 = o
int turn =0;

void design_grid ()
{
	int n;
	cout<<"Enter grid dimension :";
	cin>>n;


		string sep = "|";
		for (int r = 0; r < n; r++,sep="|"){

			for (int c = 0; c < n; c++ , sep="|")
			{
				string ch = ch +  "__" + sep;

				cout << ch<<"";
			}
			cout << "\n";
		}

}

void players ()
{
	while(true)
	{
		char symbol ='X';
		if(turn ==1)
			symbol = 'O';

		cout<<"Player "<<symbol <<" turn. Enter an empty location (r , c) :";

		int r ,c; // user enter input as one based
		cin>>r>>c;

		r -= 1, c -= 1; // convert it to zero based

	}
	turn++;

}



int main()
{


//design_grid();

	return 0;
}



