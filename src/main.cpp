//============================================================================
// Name        : Cplusplus.cpp
// Author      : eslam elkhair
// Version     :
// Copyright   : @elkhair's
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Problem #1 : Printing
		/*
		 Read an Integer N, then print an X using * as following

	    *      *
	     *    *
	      *  *
		   *
		  *  *
		 *    *
		*      *

		 ○ N should be odd
		 */

	int n;
	cin>>n;

	for (int i = 0; i < n; ++i) {

		for (int j = 0; j < n; ++j) {

			if(i == j || n-i-1 == j)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}









	return 0;

}
