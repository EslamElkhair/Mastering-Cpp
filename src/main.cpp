#include<iostream>
#include<cassert>
using namespace std;

int main() {

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
	}

	return 0;

}
