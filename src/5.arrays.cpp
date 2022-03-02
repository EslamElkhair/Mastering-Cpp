//===========================================================================================================================
// Author      : EslamElkhair
// Created on  : Mar 2 , 2022
// Copyright   : © 2022Elkhair's
// Description : 1D Array, char array , ND array in C++
//===========================================================================================================================

#include <iostream>
using namespace std;

int main()
{

//******************************************************************** 1D Array ********************************************************************

//What is 1D Array ?

	//Programming languages introduce data type array of size K
     //○ K variables defined in the memory (consecutively)
	 //○ They all of same data type

	//if we want to write a program That reads 1000 integers and print them reversed , we can do it but that is time wasting
	// so , we can create an array of size 1000 then print the 1000 variables reserved across the array

//===========================================================================================================================

// Declaring an array :

	//const int size = 5;     // size of the array should be fixed number

	//int numbers[size] = {10, 2, 7, 5, 3};  	// Declare 5 positions of type integer


		//cout<<numbers[0]<<endl;
		//cout<<numbers[1]<<endl;
		//cout<<numbers[2]<<endl;
		//cout<<numbers[3]<<endl;
		//cout<<numbers[4]<<endl;

		//cout<<numbers[7]<<endl;  --> garbage
		//cout<<numbers[5]<<endl;  --> garbage


// changing the size of array with fixed integer value instead of constant variable

	//int numbers[5] = {10, 2, 7, 5, 3};

	//cout<<numbers[4]<<endl;
	//cout<<numbers[5]<<endl;    --> garbage
	//cout<<numbers[6]<<endl;    --> garbage
	//cout<<numbers[7]<<endl;    --> garbage

// changing the initial values of array variables

	//numbers[0] = 9;
	//numbers[2] *= 3;
	//numbers[4]++;

	//cout<<numbers[0]<<endl;
	//cout<<numbers[2]<<endl;
	//cout<<numbers[4]<<endl;

//===========================================================================================================================

//Printing array forward and backward
	//Remember last element position is  (size-1)
	//Trace the forward
	//○ Index 0
	//○ Index 1
	//○ Index 2
	//○ Index 3
	//○ Index 4

	//Trace the backward
	//○ Index 4
	//○ Index 3
	//○ Index 2
	//○ Index 1
	//○ Index 0

/*
	const int size = 5;

		// Declare 5 positions of type integer
		int numbers[size] = {1, 2, 3, 4, 5};

		cout<<"forward array : ";
		for (int i = 0; i < size; ++i)
			cout<<numbers[i]<<" ";

		cout<<"\n";

		cout<<"backward array : ";
		for (int i = 0; i < size; ++i)
			cout<<numbers[size-i-1]<<" ";   // we write (size - i - 1 ) instead of (size - i) because size begin at 5

		cout<<"\n";
*/

//===========================================================================================================================

//Read 5 numbers in array - find minimum

/*
	const int size = 5;

		// Declare 5 positions of type integer
		int numbers[size];

		//enter each value of each position
		for (int i = 0; i < size; ++i)
			cin >> numbers[i];

		//find minimum value
		int minimum = numbers[0]; //we take zeroth position as the minimum for now , and compare it with other positions
		                          //if any other position in the array is less than zeroth position we assign it to the minimum variable
		                          //and print it.

		for (int i = 1; i < size; ++i)
			if (minimum > numbers[i])
				minimum = numbers[i];

		cout << minimum;
*/

//===========================================================================================================================

//Initializing an array

	    // initializing single variable with value 100

	    //int val1 = 100; // c style
		//int val2 {100};	// c++ initialization list style


		// array of 100 integers: first number is 5, remain zeros

		//int arr1 [100] = {5};	// C style
		//int arr2[100] {5};		// C++ initialization list style

		//int arr3[] {1, 2, 3};	// auto size --> the size of array will be 3 automatically

//===========================================================================================================================

//we can define array with Other Data types such as :

		//● double salary[100];    --> ○ Array of 100 salaries

		//● char letters[300];     --> ○ Array of 300 letters

		//● string names[200];     --> ○ Array of 200 names

//===========================================================================================================================

//Run time error: Index out of boundary
	//	● One of the most errors we do : You access array with

	//	○ Negative index           --> ○ arr[-10]

	//	○ Index > its max value    --> ○ arr[100] ⇒ Only 0 to 99

//******************************************************************** Quiz 10 ********************************************************************

//1- Arrays are zero based indexed

	//For int arr[50];
	//What is the first and last index to access the array?

	// ans : 0 49

//2-
	//int arr[] {2, 3, 5, 7, 11};
	//cout<<(arr[1] + arr[3]) / 2; // 5

//3-
	//int arr {10};
	//cout<<arr[0];    --> compilation error : This is a single integer initialized to value 10 NOT an array

//4-
	//int arr[50] {10};
	//cout<<arr[0]<<" "<<arr[1]; --> 10 0

//5-

	//const int size = 5;
	//int numbers[size] { 1, 2, 4, 3, 10 , 20  };   --> compilation error : Array size is 5, but 6 numbers are used


//6-
/*
	const int SIZE = 5;
	int numbers[SIZE] { 1, 2, 4, 3, 10 };

	int cnt = 0;

	for (int i = 1; i < SIZE -1; ++i) {
		if (numbers[i - 1] < numbers[i] && numbers[i] < numbers[i + 1])
			cnt++;
	}
	cout << cnt << "\n";
*/

//7-
	//int arr[100];
	//In terms of memory, this code reserves 100 CONSECUTIVE elements integers in the memory, and the array[0] is the first one of them

//8-
	//All array elements must be of the same type (e.g. all double)?

	//Yes, You can't mix types. If you used another type, it either will be converted (e.g. from int to double) or compiler error

//9-
	//double arr[100] {};

	//After we defined the above array, can we extend its size with extra 50 elements?

	//No, Array is fixed size. Later we learn vector and pointers for variable length.

	//arr[150]{} ; --> compilation error

//10-
	//This access one element in the array (garbage). Typically it won't do something wrong

	   //int arr[10] {};
	   //int x = arr[-1];  // garbage
		//cout<<x;

//11-
	//Accessing such far wrong index from a local array probably will cause run-time error

	//int arr[10] {};
	//int x = arr[-10000000];
	//cout<<"bye";

//******************************************************************** 1D Array : practice 1  ********************************************************************

//Practice #1 : Find first and 2nd Maximum values

/*
 Read an Integer N ( < 200), then read N (distinct) integers. Find the maximum and 2nd maximum values

 Input: 5 10 20 3 30 7 ⇒ Output 30 20

 30 is the maximum in the array
 If we removed it, the next maximum is 20
*/

// First Way
   //test case : 5 10 20 3 30 7
/*
	    int n, numbers[200];	// max expected size

	    // Read an Integer N
	    cin>>n;

	    // read N (distinct) integers
		for (int i = 0; i < n; ++i)
			cin >> numbers[i];

		// find first maximum value
		int maximum_idx = 0;
		for (int i = 1; i < n; ++i)
			if (numbers[maximum_idx] < numbers[i])
				maximum_idx = i;   // till here 30


        // assign maximum value with very small value --> like i remove it to find another maximum value
		int max1 = numbers[maximum_idx];
		numbers[maximum_idx] = -1000000;

		// same code again to find the second maximum value
		maximum_idx = 0;
		for (int i = 1; i < n; ++i)
			if (numbers[maximum_idx] < numbers[i])
				maximum_idx = i;

		//assign same variable maximum_idx to new variable to give him a new value
		int max2 = numbers[maximum_idx];

		// print first maximum and second maximum
		cout << max1 << " " << max2;
*/


//Second Way
	//test case : 5 10 20 3 30 7
/*
	    int n, numbers[200];

		cin >> n;

		for (int i = 0; i < n; ++i)
			cin >> numbers[i];

		// max values for first position and second position
		int max1, max2;
		if (numbers[0] >= numbers[1])
			max1 = numbers[0], max2 = numbers[1];
		else
			max1 = numbers[1], max2 = numbers[0];

		for (int i = 2; i < n; ++i)
		{
			if (max1 <= numbers[i])
				max2 = max1, max1 = numbers[i];

			else if (max2 < numbers[i])
				max2 = numbers[i];
		}
		cout << max1 << " " << max2;
*/

//======================================================================================================================================

//Practice #2 : Find pair values of maximum sum
	/*
● Read an Integer N, then read N <= 200 (distinct) integers. Find a pair of numbers (e.g. 2 different indices) whose sum is maximum

● Input: 5 2 10 3 50 15 ⇒ output : 65 (from 50 + 15)
*/

// First Way : buggy code
	//test case : numbers[0] = 2 , numbers[1] = 10 , numbers[2] = 3 , numbers[3] = 50 , numbers[4] = 15
/*
	int n, numbers[200];

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int idx1 = -1, idx2 = -1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (idx1 == -1)
				idx1 = i, idx2 = j;

			else if (numbers[idx1] + numbers[idx2] < numbers[i] + numbers[j])
				idx1 = i, idx2 = j;
		}
	}
	cout<<numbers[idx1]<<" "<<numbers[idx2];
*/

//Second Way : fixed code but inefficient

/*
	int n, numbers[200];
	cin >> n;

		for (int i = 0; i < n; ++i)
			cin >> numbers[i];

		int idx1 = -1, idx2 = -1;

		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if (idx1 == -1)
					idx1 = i, idx2 = j;
				else if (numbers[idx1] + numbers[idx2] < numbers[i] + numbers[j])
					idx1 = i, idx2 = j;
			}
		}
		cout<<numbers[idx1]<<" + "<<numbers[idx2]<<" = "<<numbers[idx1]+numbers[idx2];
*/

//Third Way : Faster code

/*
    int n, numbers[200];

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	// max values for first position and second position
	int max1, max2;
	if (numbers[0] >= numbers[1])
		max1 = numbers[0], max2 = numbers[1];
	else
		max1 = numbers[1], max2 = numbers[0];

	for (int i = 2; i < n; ++i)
	{
		if (max1 <= numbers[i])
			max2 = max1, max1 = numbers[i];

		else if (max2 < numbers[i])
			max2 = numbers[i];
	}
	cout << max1 << " + " << max2<<" = "<<max1+max2;
*/

//******************************************************************** 1D Array : practice 2  ********************************************************************

//Practice #1 :  Reverse in place
/*
● Read an Integer N, then read N <= 200 integers.
○ In-place: Change the current array, don’t use 2 arrays
● Simple idea: Iterate from the begin and end in same time
○ Swap the 2 positions
○ Do this tell the middle only
● Let say array is 1 2 3 4 5 6 7 8
○ Step 1: swap (1, 8) ⇒ 8 2 3 4 5 6 7 1
○ Step 2: swap (2, 7) ⇒ 8 7 3 4 5 6 2 1
○ Step 3: swap (3, 6) ⇒ 8 7 6 4 5 3 2 1
○ Step 4: swap (4, 6) ⇒ 8 7
 */
/*
	int n, numbers[200];

		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> numbers[i];

		for (int i = 0; i < n/2; ++i)
		{
			int last = n - i - 1;

			// swap positions: i and last
			int temp = numbers[i];
			numbers[i] = numbers[last];
			numbers[last] = temp;
		}

		for (int i = 0; i < n; ++i)
			cout<<numbers[i]<<" ";
*/

//======================================================================================================================================

//Practice #2 : Find most frequent number
/*
	● Read an Integer N, then read N <= 200 integers. Find the value that repeated
	the most number of times.
	○ Each integer is 0 <= integer <= 150
	● Example for array: 1 2 1 3 1 5 5
	○ 1 repeated 3 times: the largest
	○ 2 repeated 1 time
	○ 5 repeated 2 times
*/

/*
	int n, numbers[200];

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int max_value = -1, max_repeat = -1;

	for (int i = 0; i < n; ++i)
	{
		// count how many times numbers[i] exists
		int repeat = 0;
		for (int j = 0; j < n; ++j)
			repeat += numbers[i] == numbers[j];

		if (max_repeat == -1 || max_repeat < repeat)
			max_repeat = repeat, max_value = numbers[i];
	}
	cout<<max_value<<" repeated "<<max_repeat<<" times";
*/


//******************************************************************* 1D Array : HomeWork 1 **********************************************************************

//Problem #1: Is increasing array?
	/*	● Read an Integer N, then read N (<= 200) integers.
		● Print YES if the array is increasing.
		○ An array is increasing if every element is >= the previous number
		● Inputs
		○ 4  1 2 2 5 ⇒ YES
		○ 5  1 0 7 8 9 ⇒ NO [0 is < 1, the previous number]
		○ 2  -10 10 ⇒ YES
	*/
	/*
		int n, a[200];

		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
	*/

	//first way
	   //we will assume that the array is increasing at first
	/*
		 	bool increasing = 1;

		for (int i = 1; i < n; i++)
		{
			if (a[i] < a[i - 1])
			{
				increasing = 0;
				break;
			}
		}

		if (increasing)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	*/

	//second way
		//we will assume that the array is decreasing at first
	/*
		bool increasing =0;

		for (int i =1;i<n;i++)
		{
			if(a[i]<a[i-1])
				increasing =1;
			break;
		}

		if(increasing)
			cout<<"no";
		else
			cout<<"yes";
	*/
	//=======================================================================================================================================

	//Problem #2: Replace MinMax
	/*	● Read an integer N (< 200), then read N integers.
		○ Assume all values [0, 2000]

		● Print the array after doing the following operations:

		○ Find minimum number in these numbers.    <--
		○ Find maximum number in these numbers.    <--
		○ Replace each minimum number with maximum number and Vice Versa.  <--

		● Input ⇒ Output
		○ (7)  4 1 3 10 8 10 10 ⇒ 4 10 3 1 8 1 1
	*/

	/*
		int N;
		int a[200];
		int mn = 10000, mx = -1;

		cin >>N;

		for (int i=0;i<N;i++)
		{
			cin>>a[i];

		// minimizing while reading
			if (a[i] < mn)
				mn = a[i];

		// maximizing while reading
			if (a[i] > mx)
				mx = a[i];
		}

		//swapping min and max
		for (int i = 0; i < N; i++)
		{
			// if the current value equal to minimum ,change to maximum
			if (a[i] == mn)
				a[i] = mx;

			// if the current value equal to maximum ,change to minimum
			else if (a[i] == mx)
				a[i] = mn;
		}

		for (int i = 0; i < N; i++)
		{
			//putting spaces between numbers
			if (i)
				cout << " ";

			cout << a[i];
		}
	*/

	//=======================================================================================================================================

	//Problem #3: Unique Numbers of ordered list

	/*	● Read integer N ( < 1000), followed by reading N integers (0 <= value <= 500)

		● The N numbers are ordered from small to large
		● Print the unique list of the numbers, but preserve the given order

		● Input: (12)  1 1 2 2 2 5 6 6 7 8 9 9
		● Output: 1 2 5 6 7 8 9

		○ Observe: input is sorted list

		● Optional Constraints:

		○ Don’t use nested loops!
		○ Use only 1 single array
		○ Or Do it without even using arrays at all
	*/

	//First Way : Let's do it first with an array
	/*
		    // enter number of integers
			int n;   // assume n > 0
			cin >> n;



			int arr[1000];
			for (int i = 0; i < n; i++)
				cin >> arr[i];


			// As the list is sorted, it is enough to check if an element as same as the previous or not
			// if equal, then duplicate. If not, then it is the first of its value!
			// Always make use of the given information :)


			cout<<arr[0]<<" ";

			for (int i = 1; i < n; i++)
			{
				assert(arr[i] >= arr[i-1]);  // make sure input is ordered

				if (arr[i] != arr[i-1])
					cout << arr[i]<<" ";
			}
	*/

	//Second Way : Let's do it without using array
	/*
		int n;   // assume n > 0
		cin >> n;

		// As the list is sorted, it is enough to check if an element as same as the previous or not
		// if equal, then duplicate. If not, then it is the first of its value!
		// Always make use of the given information :)

		int last_value = -1;

		for (int i = 0; i < n; i++)
		{
			int value;
			cin >> value;

			if (value != last_value)
				cout << value << " ";

			last_value = value;
		}
	*/

	//=======================================================================================================================================

	//Problem #4: Is Palindrome ?

	/*	● Read integer N (< 1000), then read N integers of an array.
		● Determine if the array is palindrome or not.
		● An array is called palindrome if it reads the same backward and forward
		○ for example, arrays { 1 } and { 1,2,3,2,1 } are palindrome
		○ while arrays { 1,12 } and { 4,7,5,4 } are not.
		● Inputs ⇒ Outputs
		○ 5 1 3 2 3 1 ⇒ YES
		○ 4 1 2 3 4 ⇒ NO
	*/

	/*
		//test case : 5  1 3 2 3 1
		int n;
		cin >>n;

		// The size of the array should be larger than the maximum value of N
		int arr[1000];
		for(int i=0;i<n;i++)
			cin>>arr[i];

		// We need to compare the value at the left half to those in the right half
		// The value at index (0) should be compared to the value at index (N-1)
		// Then the value at index (1) should be compared to the value at index (N-2)
		// So, clearly we need to increment the left index and decrement the right one
		// On reaching the index N/2, we are sure that we have compared all the elements
		// of both sides so we don't need to do anything and the array is palindrome

		for (int i = 0; i < n / 2; i++)
		{
			if (arr[i] != arr[n - 1 - i])
			{
				cout << "NOT Palindrome";
				return 0;
			}
		}
		cout << "YES, Palindrome";
	*/

	//=======================================================================================================================================

	//Problem #5: Smallest pair

	/*  ● Given a number N (<= 200) and an array A of N numbers.
		● Print the smallest possible result of A[i] + A[j] + j - i , where 1 ≤ i < j ≤ N.
		● Input ⇒ Output
		○ 4 20 1 9 4 ⇒ 7
	*/

	/*
		const int N = 200;

		int n, a[N];

		cin >> n;

		for (int i = 0; i < n; i++)
			cin >> a[i];


		// let's calculate Ai+Aj+j-i for every pair (i,j) such that i < j
		// this can be done using nested for loops.


		// let's use some big value and later minimize
		int mn;
		bool first_time = true;

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				int tmp = a[i] + a[j] + j - i;
				if (first_time || tmp < mn)
				{
					mn = tmp;
					first_time = false;
				}
			}
		}
		cout << mn << endl;
	*/

	/*

	Test case:
	8
	10 12 13 14 15 16 17  11


	Output: 23

	Trying to get the 2 min value is wrong, as you need to consider
	i and j locations during minmization

	*/

	//******************************************************************* 1D Array : HomeWork 2 **********************************************************************

	//Problem #1: Find the 3 minimum values

	/*	● Read integer N (>= 3), then read N integers. Find the 3 lowest numbers.
		○ Don’t change the array content
		○ Don’t iterate on the array more than once
		● Input ⇒ Output
		○ 5  4 1 3 10 8 ⇒ 1 3 4
		○ 3  7 9 -2 ⇒ -2 7 9
	*/

//		int n, tmp, mn[3];
//
//			cin >> n;
//
//			for (int i = 0; i < n; i++)
//			{
//				int value;
//				cin >> value;
//
//				if (i < 3)
//					mn[i] = value;
//				else
//				{
//					// Find maximum position
//					int mx_pos = 0;
//					for (int j = 1; j < 3; ++j)
//					{
//						if (mn[mx_pos] < mn[j])
//							mx_pos = j;
//					}
//
//					if (value < mn[mx_pos])
//						mn[mx_pos] = value;
//				}
//			}

			// let's order the first 3 values. We can do in several ways
			// Find maximum position
//			int mx_pos = 0;
//			for (int j = 1; j < 3; ++j) {
//				if (mn[mx_pos] < mn[j])
//					mx_pos = j;
//			}
//			// swap max with last
//			tmp = mn[2];
//			mn[2] = mn[mx_pos];
//			mn[mx_pos] = tmp;
//
//			// Swap first 2 elements if needed
//			if (mn[0] > mn[1]) {
//				tmp = mn[0];
//				mn[0] = mn[1];
//				mn[1] = tmp;
//			}
//
//			for (int i = 0; i < 3; i++)
//				cout << mn[i] << " ";	// not ordered



//*************************************************************** Char Array ********************************************************************************

// Let’s refresh about characters
	/*
		    char ch1 = 'A';
			int ch_value = ch1;

			cout<<ch_value<<"\n";   // 65
			cout<<(int)'A'<<"\n";   // 65
			cout<<(int)'B'<<"\n";   // 66
			cout<<(int)'C'<<"\n";   // 67
			cout<<(int)'Z'<<"\n";   // 90
			cout<<(int)'A' + 26 - 1<<"\n"; // 65+26-1 = 90

			char ch2 = 90;
			cout<<ch2<<"\n";  // Z

			cout<<"***\n";

			cout<<(int)'a'<<"\n";  // 97
			cout<<(int)'b'<<"\n";  // 98
			cout<<(int)'c'<<"\n";  // 99
			cout<<(int)'z'<<"\n";  // 122
			cout<<(int)'a' + 26 - 1<<"\n"; // 97 +26 -1 = 122

			cout<<('A' < 'a')<<"\n"; //  true 1
	*/
	//==================================================================================================================================

	// Check and Convert Characters

		//test case : D , d , 1
	/*
		        char ch1 ;
			    cin>>ch1;

				if ('A' <= ch1 && ch1 <= 'Z')
				{
					cout << ch1 << " is an upper case\n";
					ch1 = ch1 - 'A' + 'a';
					//ch1 = ch1 + 32; --> this code also convert to apper case
					cout << ch1 << " now is a lower case\n";
				}

				else if ('a' <= ch1 && ch1 <= 'z')
				{
					cout << ch1 << " is already a lower case\n";
					ch1 = ch1 -'a'+'A';
					//ch1 = ch1 - 32;
					cout<<ch1;
				}

				else if ('0' <= ch1 && ch1 <= '9')
					cout << ch1 << " is a digit\n";

				else
					cout << ch1 << " is neither a digit nor a letter\n";
	*/
	//==================================================================================================================================

	// Accessing string array : String is sequence of characters, So actually internally an array
	/*
		string name = "Hany";

			int sz = name.size();	// called function/method
			cout << sz << "\n";	// 4

			cout << name << "\n";

			for (int i = 0; i < sz; ++i)
				cout << name[i];	// internally array
	*/

	// Let’s create char array : Usually, you will use string as easier way , Internally has char array

	/*
	         // c style
				char name1[5] = { 'H', 'a', 'n', 'i' };	// 5 not 4
				char name2[5] = "Hani";

			// c++ style
				string name3 = "Hani";

				cout << name1 << "\n";
				cout << name2 << "\n";
				cout << name3 << "\n";
	*/

	// The null char '\0' :  C++ wanna you tell when the string ends (for easy print) , We add extra char to do so called null character


	   // Wrong way on printing char array in C++ : it will print Garbage --> Haniÿa
	/*	char name1[4];
		name1[0] = 'H';
		name1[1] = 'a';
		name1[2] = 'n';
		name1[3] = 'i';

		cout << name1 << "\n";
	*/

	    // Right way on printing char array in C++ : Print stops once sees the null char Letters after it won’t be printed
	/*	char name1[5];
		name1[0] = 'H';
		name1[1] = 'a';
		name1[2] = 'n';
		name1[3] = 'i';
		name1[4] = '\0';	// Null character

		cout << name1 << "\n";
	*/

		// the use of null char : IT WILL PRINT H only because there is null char after

	/*	    char name1[5];
			name1[0] = 'H';
			name1[1] = '\0';
			name1[2] = 'n';
			name1[3] = 'i';
			name1[4] = '\0';	// Null character

			cout << name1 << "\n";
	*/
	//==================================================================================================================================

	//Reading string with spaces : Based on the data type (char or string) , you can read in 2 ways

		//c++ style
		    //string name1;
			//getline(cin, name1);
			//cout<<name1<<"\n";

		//c style
			//char name2[50];
			//cin.getline(name2, 50);
			//cout<<name2<<"\n";
	//==================================================================================================================================

	//Array of strings : Array of names - each name is sequence of characters!

		//string names[5] = {"Mostafa Saad", "Never Ever", "Hello world", "eso", "simo"};

			//for (int i = 0; i < 5; ++i)
				//cout<<names[i]<<"\n";


	   // Reading array of strings

			//string names[2];

				//for (int i = 0; i < 2; ++i)
				//{
					//cin>>names[i];   --> for text without spaces

					//getline(cin, names[i]) --> for text with spaces
				//}
	//==================================================================================================================================

	// Summary : Char Array VS Strings : you better use strings, You rarely need to use C-style char array

		//● Char Array is just array, a primitive data type   --> ○ It is more a C-Style --> ■ char arr[50] = "mostafa"

		//● String is not a primitive. It is a class  --> ○ It is a C++ style  --> ■ string name {“mostafa”};


	//*************************************************************** Quiz 11  ************************************************************************************

	//1-
		//char x =  'c' + 2 * 'b' - 2 * 'a'; // 99 + 2 * 98 - 2 * 97 = 101 ---> 'e' in the ASCII code
			//cout<<x;

	//2-
	/*		string str = "abc";

				str[0] += 'A' - 'a'; // 'a' + 'A' - 'a' = 'A'
				str[1] += 'A' - 'a'; // 'b' + 'A' - 'a' = 'A' = 98 + 65 - 97 = 66 --> 'B'
				str[2] += 'A' - 'a'; // 'C'

				cout << str << "\n"; // A B C
	*/


	//3-
	/*	char str[] { "abcdef" };

			int cnt = 0;

			for (int i = 0; i < 6; ++i)
				cnt += str[i] - 'a';

			cout << cnt << "\n";
	*/


	//4- i replace second char b with the null char , so it remove any text after

	/*	char str[] { "abcdef" };
			str[1] = 0;
			cout<<str; // a
	*/


	//5- compilation error
		    //string name;
			//cin.getline(name);
			//cout<<name<<"\n";


	//6-It is a tricky one. cin >> name1; reads word mostafa and stop before the \n in input.
		//Then getline(cin, name2); just reads nothing as nothing more left on the line

	/*	string name1, name2;
		cin >> name1;
		getline(cin, name2);
		cout << name1 << " " << name2 << "\n";
	*/


	//7- With 2 getline lines, the first finish the line and move to next line. Then the 2nd getline reads the actual line
	/*
		string name1, name2;
		cin >> name1;
		getline(cin, name2);
	    getline(cin, name2);
		cout << name1 << " " << name2 << "\n";
	*/

	//8- In legal C++, no. Array length shouldn't be variable. Based on compiler/flags this may compile. DON'T code this way

		//int n = 15;
		//char arr[n];


	//9- output : cp "c:\my dir with space" d:\data

		//cout<<"cp \"c:\\my dir with space\" d:\\data";


	//10- output : Cpp,is,challenging!,

	/*	string words[] {"Cpp", "is", "challenging!"};

		string all;
		for (int i = 0; i < 3; i++){

			all += words[i] + ",";
		}

		cout<<all;
	*/
	// first way to avoid the last comma :

	/*
		string words[] { "Cpp","is","challenging!" };
			int len = 3;
			string all;

			bool avoidcomma = false;

			for (int i = 0; i < len; ++i)
			{
				if (i == len - 1)
					avoidcomma = true;

				all += words[i];
				if (!avoidcomma)
					all+=",";
			}
			cout << all;
	*/
	/*
		string words[] { "Cpp", "is", "challenging!" };
			int len = 3;
			string all;

			string sep = "";

			for (int i = 0; i < len; ++i, sep = ",")
				all += sep + words[i];

			cout << all;
	*/



	//*************************************************************** Char Array Practice  ************************************************************************************

	//	Practice: Conc Strings
	/*	● Read two strings S and T. Print a new string that contains the following:
		○ First letter of the string S followed by the First letter of the string T.
		○ Second letter of the string S followed by the Second letter of the string T.
		○ and so on...
		● Don’t create new strings. Don’t change input content
		● Input ⇒ Output
		○ abc defghi ⇒ adbecfghi
		○ AM CICPC ⇒ ACMICPC
	*/

	/*
		    string first, second;
			cin >> first >> second;

			int mx_sz = first.size();

			if (mx_sz < second.size())
				mx_sz = second.size();

			for (int i = 0; i < mx_sz; ++i)
			{
				if (i < first.size())
					cout << first[i];

				if (i < second.size())
					cout << second[i];
			}
	*/
	//==================================================================================================================================

	//Practice: Letters Frequency
	/*
	    ● Read a string of lower/upper letters. Ignore upper letters and compute the
		frequency of lower letters. Print ones that exists as below.
		● Input: bAAAaaazz
		● Output
		○ a 3
		○ b 1
		○ z 2
	*/

	/*
		string str;
		cin >> str;

		int frequency[150] = {0};	// initailize to zeros

		for (int i = 0; i < str.size(); ++i)
				frequency[str[i]]++;	// Use char as frequency

			for (int i = 'a'; i <= 'z'; ++i)
			{
				if (frequency[i])
					cout << (char) i << " " << frequency[i] << "\n";
			}
	*/
	//==================================================================================================================================

	// Practice: Special String Mapping
	/*
		● Read a string and do the following conversions for its letters
		○ If it is an upper letter, don’t change
		○ If it is lower letter, use this map of 26 letters:
		■ abcdefghijklmnopqrstuvwxyz
		■ YZIMNESTODUAPWXHQFBRJKCGVL
		■ E.g. a ⇒ Y and z ⇒ L
		○ If it is digit, use this map of 10 letters:
		■ 0123456789
		■ !@#$%^&*()
		● Input ⇒ Output
		○ acMNmn39 ⇒ YIMNPW$)
		○ vwXYZ0123 ⇒ KCXYZ!@#$
	*/

	//test case : acMNmn39 ⇒ YIMNPW$)

//		string from = "abcdefghijklmnopqrstuvwxyz0123456789";
//		string to   = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";
//
//		char letter_map[150] = {0};
//
//		for (int i = 0; i < from.size(); ++i)
//			letter_map[from[i]] = to[i];
//
//		string str;
//		cin>>str;
//
//		for (int i = 0; i < str.size(); ++i)
//		{
//			if('A' <= str[i] && str[i] <= 'Z')
//				continue;
//
//			str[i] = letter_map[str[i]];
//		}
//		cout<<str;
//		cout<<endl;




	//******************************************************************** HomeWork 1 *************************************************************************

	//Homework 1: Is Prefix?

	/*
	    ● Read 2 strings input and str. Print YES if the given str is a prefix for the string.
		Otherwise, print NO

		● Input ⇒ Outputs
		○ ABCDEFG ABCD ⇒ YES
		○ ABCDEFG ABCDEF ⇒ YES
		○ ABCDEFG EFG ⇒ NO
		○ ABCDEFG DEFG ⇒ NO
		○ ABCDEFG BCD ⇒ NO
		○ ABCDEFG DEF ⇒ NO
		○ ABCDEFG ACEG ⇒ NO
		○ ABCDEFG DG ⇒ NO
		○ ABCDEFG GD ⇒ NO
		○ ABCDEFG ABCDEFG ⇒ YES
	*/

	// Solution #1
	/*
		string bigString;
		string smallString;
		cin>>bigString>>smallString;

		if( smallString.size() >bigString.size() )
		{
			cout<<"Not prefix";
			return 0;
		}

	//// Compare the begin of the small with the large

		for(int i=0;i<(int)smallString.size();i++)
		{
			if(smallString[i]!=bigString[i])
			{
				cout<<"Not prefix";
				return 0;
			}
		}

		cout<<"yes, Prefix";
	*/

	//Solution #2
		//test case : ABCDEFG ABCD ⇒ YES
	/*
		string input , str;
		cin>>input>>str;

		bool isPrefix = 1 ;

		for(int i=0;i<(int) str.size();i++)
		{
			if(input[i]!=str[i])
			{
				isPrefix = 0;
				break;
			}
		}

		cout<<isPrefix;  // 0 --> not prefix  ,,  1 --> prefix
	*/
	//==========================================================================================================================================

	//Homework 2: Is Suffix?
	/*
		● Read 2 strings input and str. Print YES if the given str is a suffix for the string.
		Otherwise, print NO
		● Input ⇒ Outputs
		○ ABCDEFG ABCD ⇒ NO
		○ ABCDEFG ABCDEF ⇒ NO
		○ ABCDEFG EFG ⇒ YES
		○ ABCDEFG DEFG ⇒ YES
		○ ABCDEFG BCD ⇒ NO
		○ ABCDEFG DEF ⇒ NO
		○ ABCDEFG ACEG ⇒ NO
		○ ABCDEFG DG ⇒ NO
		○ ABCDEFG GD ⇒ NO
		○ ABCDEFG ABCDEFG ⇒ YES
	*/

	//Solution #1
	/*
		string bigString;
		string smallString;
		cin>>bigString>>smallString;

		if( smallString.size() > bigString.size() )
		{
			cout<<"Not Suffix";
			return 0;
		}

		// Compare the end of the small with the large
		int big_end = (int)bigString.size()-1;
		int small_end = (int) smallString.size()-1;

		for (int i = 0; i < (int) smallString.size(); i++)
		{
			if (bigString[big_end--] != smallString[small_end--])
			{
				cout << "Not Suffix \n";
				return 0;
			}
		}

		cout<<"yes, Suffix"<<endl;
	*/

	//Solution #2
	/*
		string input , str;
		cin>>input>>str;

		bool isSuffix = 1 ;

		   int indx=0;
		    for (int i = (int)input.size()-(int)str.size() ; i<input.size() ; i++)
		    {
		        if (input[i]==str[indx])
		        {
		            indx++;
		        }
		        else if (input[i]!=str[indx])
		        {
		            isSuffix = 0;
		            break;
		        }
		    }
		cout<<isSuffix;
	*/
	//==========================================================================================================================================

	//Homework 3: Is Substring?
	/*
		● Read 2 strings input and str. Print YES if the given str is a substring for the
		string. Otherwise, print NO
		● Input ⇒ Outputs
		○ ABCDEFG ABCD ⇒ YES
		○ ABCDEFG ABCDEF ⇒ YES
		○ ABCDEFG EFG ⇒ YES
		○ ABCDEFG DEFG ⇒ YES
		○ ABCDEFG BCD ⇒ YES
		○ ABCDEFG DEF ⇒ YES
		○ ABCDEFG ACEG ⇒ NO
		○ ABCDEFG DG ⇒ NO
		○ ABCDEFG GD ⇒ NO
		○ ABCDEFG ABCDEFG ⇒ YES
	*/

	//Solution #1
	/*
		string bigString;
		string smallString;
		cin>>bigString>>smallString;

		if( smallString.size() > bigString.size() )
		{
			cout<<"Not Substring";
			return 0;
		}

		// For every possible position in big_str, try to match with the small
		for (int i = 0; i < (int) bigString.size() - (int) smallString.size() + 1; ++i)
		{
			bool is_match = true;

			for (int j = 0; j < (int) smallString.size() && is_match; ++j)
			{
				if (smallString[j] != bigString[i + j])
					is_match = false;
			}
			if (is_match)
			{
				cout << "YES\n";
				return 0;
			}
		}
		cout << "NO\n";
	*/

	//Solution #2
	/*
		string input , str;
		cin>>input>>str;

		bool isSubstring =0;
		int indx = 0;

	    for (int i=0;i<(int)input.size();i++)
	    {
	        if (input[i]==str[indx])/** characters are equal (possible match)
	        {
	            indx++; increase index

	            if (indx==(int)str.size())
	            {
	                isSubstring=1;
	                break; found a solution, no need to stay in the loop
	            }
	        }
	        else
	        {

	                if the characters are different and we have not broken
	                the loop yet (no solution so far)
	                make in=0 to look for possible match

	            indx=0;
	        }
	    }


	    if (isSubstring)
	        cout << "YES\n";
	    else
	        cout << "NO\n";
	*/
	//==========================================================================================================================================

	//Homework 4: Is Subsequence?
	/*
		● Read 2 strings input and str. Print YES if the given str is a subsequence for
		the string. Otherwise, print NO
		● Input ⇒ Outputs
		○ ABCDEFG ABCD ⇒ YES
		○ ABCDEFG ABCDEF ⇒ YES
		○ ABCDEFG EFG ⇒ YES
		○ ABCDEFG DEFG ⇒ YES
		○ ABCDEFG BCD ⇒ YES
		○ ABCDEFG DEF ⇒ YES
		○ ABCDEFG ACEG ⇒ YES
		○ ABCDEFG DG ⇒ YES
		○ ABCDEFG GD ⇒ NO
		○ ABCDEFG ABCDEFG ⇒ YES
	*/

	//Solution #1
	/*
		//test case : ABCDEFG DG ⇒ YES
		string bigString;
		string smallString;
		cin>>bigString>>smallString;

		if( smallString.size() > bigString.size() )
		{
			cout<<"Not Substring";
			return 0;
		}

		// Keep match letters in order from the big in the small
		int next_to_match = 0;

		for (int i = 0; i < (int) bigString.size(); ++i)
		 {
			if (bigString[i] == smallString[next_to_match])
			{
				++next_to_match;
				if (next_to_match == (int)smallString.size())
				{
					cout << "YES\n";
					return 0;
				}
			}
		}
		cout << "NO\n";
	*/

	//Solution #2
	/*
		string input, str;
		cin >> input >> str;

		    int indx=0;

		    for (int i=0;i<input.size();i++)
		    {
		        if (input[i]==str[indx])// if there is a match just increase the index
		        {
		            indx++;
		            if (indx==str.size())break;// reached the end of str
		        }
		    }


		    if (indx==str.size())// have we reached the end of str ? if so then it is a subsequence
		        cout << "YES\n";
		    else
		        cout << "NO\n";
	*/
	//==========================================================================================================================================

	//Homework 5: Convert string to number
	/*
		● Read a string of 6 letters maximum, convert it to int then print
		○ the number, the number multiplied by 3
		● Input ⇒ output
		○ “100” ⇒ 100 300
		○ “0200” ⇒ 200 600
	*/
	/*
		int number=0 ;

		string str;
		cin>>str;

		// How to convert digits 1 2 3 4 5 to 12345?
		// Repeat: multiply with 10 then add digit
		// 1 => 10 + 2 = 12 => 12 * 10 + 3 = 123 => 123 * 10 + 4 = 1234 => 1234 * 10 + 5 = 12345

		for (int i = 0; i < (int)str.size(); i++)
			{
				number = number * 10 + (str[i] - '0');
			}

		cout<<number <<" "<<number * 3;
	*/
	//==========================================================================================================================================

	//Homework 6: Grouping
	/*
		● Read a string, then divide it to consecutive groups of same letter. Print each
		group
		● Input ⇒ outputs.
		○ “111222aabbb” ⇒ 111 222 aa bbb
		○ HHHH ⇒ HHHH
	*/
	/*
		string str;
		cin>>str;


		for (int i = 0; i < (int) str.size(); i++)
		{
			if(i!=0 && str[i - 1]!= str[i])
				cout<<" ";

			cout<<str[i];
		}
	*/

//******************************************************************** HomeWork 2 ******************************************************************************

	//Problem #1: Compressing
	/*
		● Read a string of letters and then compress each group of same letter
		○ E.g. if the sub-string is cccc ⇒ c4
		○ Use _ between each group
		● Input ⇒ Outputs
		○ ccccDDDxxxxxxxxe ⇒ c4_D3_x8_e1
		○ xxxxxxxx ⇒ x8
	*/

	//Solution #1
	/*
		string str;
		cin>>str;

		str += "$";	// a small trick to avoid special handling for last group

		int group_sz = 1;	// for first letter
		bool is_first_group = true;	// easy mark to avoid early _

		for (int i = 1; i < (int) str.size(); i++) 	// start from 1
		{
			if (str[i - 1] != str[i]) // new group
			 {
				if (!is_first_group)
					cout << "_";	// split with previous group
				cout << str[i - 1] << group_sz;

				group_sz = 0;
				is_first_group = 0;
			}
			++group_sz;
	//	}
	*/

	//Solution #2
		//test case : ccccDDDxxxxxxxxe ⇒ c4_D3_x8_e1
	/*
	    string input;
	    cin >> input;
	    int len = input.size() , cnt = 1;
	    for(int i = 1 ; i < len ; i++)
	    {

	            if the current character is equal previous character
	            then they are in same group and we need increment count by 1

	            otherwise they are in Different groups and we need print last group
	            and start count 1

	        if(input[i-1] != input[i])
	        {
	            cout << input[i-1] << cnt << "_";
	            cnt = 1;   // to start count the next group from beggining
	        }
			else
			cnt++;
	    }

	    /// print last group
	   cout << input[len-1] << cnt << "\n";
	*/
	//==========================================================================================================================================

	//Problem #2: Compare strings
	/*
		● Read 2 strings, then output YES if the first smaller than or equal to second.
		Otherwise, output NO
		○ Don’t use < operator to compare strings. Use loops
		● Input ⇒ Output
		○ aaa aaa ⇒ YES
		○ aaaaa aa ⇒ NO
		○ abc d ⇒ YES
		○ dddddddddddddd xyz ⇒ YES
		○ azzzzzzzz za ⇒ YES
		○ za azzzzzzzz ⇒ NO
	*/
	/*
		    string a, b;
			cin >> a >> b;

			int sz = a.size();

			if (sz < b.size())
				sz = b.size();

			int smaller = -1;

			for (int i = 0; smaller == -1 && i < sz; ++i) {
				if (a[i] != b[i]) {
					if (a[i] < b[i])
						smaller = 0;
					else
						smaller = 1;
				}
			}
			if (smaller == -1) { // then the first letters are common. Small in length is smaller
				if (a.size() <= b.size())
					smaller = 0;
				else
					smaller = 1;
			}
			if (smaller == 0)
				cout << "YES\n";
			else
				cout << "NO\n";
	*/


//******************************************************************** Employee Program ************************************************************************
	/*
		Help our factory in managing his employees. Create a program that does the following:

		○ Display the following choices:

		■ Enter your choice:
		■ 1) Add new employee
		■ 2) Print all employees
		■ 3) Delete by age
		■ 4) Update Salary by name

		○ You will keep the program running forever. Display the choices and user input from 1 to 4

		● For choice 1: Allow the manager to enter information of an employee

	            ○ Ask user to input: Name, Age, Salary and Gender letter
	            ○ Add the information to your database --> which is your internal memory for now   --> later

	    ● For choice 2: Print(list) all employees. Line per employee

	    ● For choice 3: User enter two values, start age and end age

	            ○ Find all employees with: start_age <= age <= end_age and remove them

	    ● For choice 4: User enter name, then new salary

	            ○ Find the employee and update his salary
	*/


//	// we need some storage for our data i make the program can only store 1000 of names , ages , salaries , genders
//		const int Max = 1000;
//		string names[Max] ;
//		int ages[Max] ;
//		double salaries[Max];
//		char genders[Max] ;
//		int employeesAdded=0;
//
//			while (true)    // --> while loop that make the program working forever
//			{
//
//				int choice = -1 ;
//
//			    cout<<"Enter your choice :" <<endl;
//				cout<<"1) Add new employee"<<endl;
//				cout<<"2) Print all employees"<<endl;
//				cout<<"3) Delete by age"<<endl;
//				cout<<"4) Update salary by name"<<endl;
//
//				cin>>choice ;
//
//				if (cin.fail()) 	break;    //--> simple check if the user input is valid , if not stop
//
//				if( !(choice >=1 && choice <=4) )  //--> simple check if the input in the range of 1 and 4
//				{
//					cout<<"invalid choice. Try again"<<endl;
//					continue;
//				}
//
//
//		//Block: add new employee
//				if(choice == 1)
//				{
//						cout<<"Enter name :";
//						cin>>names[employeesAdded];
//
//						cout<<"Enter age :";
//						cin>>ages[employeesAdded] ;
//
//						cout<<"Enter salary :";
//						cin>>salaries[employeesAdded];
//
//						cout<<"Enter gender (m/f) :";
//						cin>>genders[employeesAdded];
//
//						employeesAdded++; // for every employee you enter , increase one to the system
//
//						cout<<"**********************************"<<endl;
//				}
//
//		//Block: list all employees
//				else if (choice == 2)
//				{
//					for(int i=0;i<employeesAdded;i++)
//					{
//						if (ages[i] != -1)   /// related to the block of Delete by age --> if age of any employee = -1 , delete him from the system
//							cout<<names[i]<<" "<<ages[i]<<" "<<salaries[i]<<" "<<genders[i]<<endl;
//					}
//
//					cout<<"**********************************"<<endl;
//				}
//
//		//Block: Delete by age
//				else if (choice ==3)
//				{
//					cout<<"Enter start and end age"<<endl;
//					int start_age,end_age;
//					cin>>start_age>>end_age;
//
//					for (int i =0; i<employeesAdded ;i++)
//					{
//						if(start_age<=ages[i] && ages[i]<=end_age)
//						{
//							cout<<names[i]<<" Deleted"<<endl;
//							ages[i] = -1;// Let's mark a removed entry with -1 (lazy delete)
//						}
//						else if( !(start_age<=ages[i] && ages[i]<=end_age) )
//						{
//							cout<<"No employees in this range"<<endl;
//						}
//					}
//					cout<<"**********************************"<<endl;
//				}
//
//		//Block: Update Salary by name
//				else if (choice == 4)
//				{
//					cout<<"Enter name and salary "<<endl;
//					string name ;
//					double new_salary;
//					cin>>name>>new_salary ;
//
//					bool is_found =0;
//					for(int i =0;i<employeesAdded ;i++)
//					{
//						if(ages[i] != -1 && names[i]==name)
//						{
//							is_found =1;
//							salaries[i]=new_salary;
//						}
//					}
//					if(!is_found)
//						cout<<"No employee with this name"<<endl;
//
//					cout<<"**********************************"<<endl;
//				}


//************************************************************************ 2D Array ******************************************************************************

	//2D Arrays
		//● C++ saves our time by using 2D arrays
		//○ 2D = Table: rows x columns
		//● Same rules as 1D Arrays
		//● We create it as
		                    //○ double grades[7][4];
		                    //■ For 7 rows and 4 columns

	//Basic Example
	/*	int arr[3][4] { {8, 16, 9, 52},
			            {3, 15, 27, 6},
						{14,25, 2, 10}  };

	           	     col.0   col.1   col.2   col.3
		 * row.0 -->   8      16      9       52
		 * row.1 -->   3      15      27      6
		 * row.2 -->   14     25      2       10



		cout<<arr[0][0]<<" "<<arr[0][1]<<" "<<arr[0][2]<<" "<<arr[0][3]<<endl;
		cout<<arr[1][0]<<" "<<arr[1][1]<<" "<<arr[1][2]<<" "<<arr[1][3]<<endl;
		cout<<arr[2][0]<<" "<<arr[2][1]<<" "<<arr[2][2]<<" "<<arr[2][3]<<endl;
	 */
	//=================================================================================================================================================

	//Real Example
	/*
		double grades [3][4]
		{
			{50, 33, 40, 30},
			{35, 50, 40, 30},
			{55, 30, 40, 16}
		};


		 *                math      science      biology     history
		 * mostafa         50          33          40          30
		 * eslam           35          50          40          30
		 * mohamed         55          30          40          16

		//mostafa grades
		cout<<grades[0][0]<<" "<<grades[0][1]<<" "<<grades[0][2]<<" "<<grades[0][3]<<endl;
		//eslam grades
		cout<<grades[1][0]<<" "<<grades[1][1]<<" "<<grades[1][2]<<" "<<grades[1][3]<<endl;
		//mohamed grades
		cout<<grades[2][0]<<" "<<grades[2][1]<<" "<<grades[2][2]<<" "<<grades[2][3]<<endl;
	*/
	//=================================================================================================================================================

	//Printing previous Example Data using for loop
	/*
		double grades [3][4]
		{
			{50, 33, 40, 30},
			{35, 50, 40, 30},
			{55, 30, 40, 16}
		};

		for(int row=0 ; row<3 ; row++)
		{
			for(int col=0 ; col<4 ; col++)
				cout<<grades[row][col]<<" ";

			cout<<endl;
		}
	*/
	//=================================================================================================================================================

	//Reading previous Example Data then print it using for loop
	/*
		double grades [3][4]
		{
			{50, 33, 40, 30},
			{35, 50, 40, 30},
			{55, 30, 40, 16}
		};

		//Reading Block
		for(int row=0 ; row<3 ; row++)
			for(int col=0 ; col<4 ; col++)
				cin>>grades[row][col];

		//printing block
		for(int row=0 ; row<3 ; row++)
		{
			for(int col=0 ; col<4 ; col++)
				cout<<grades[row][col]<<" ";

			cout<<endl;
		}
	*/
	//=================================================================================================================================================

	//compute average grade per student	for the previous example
	/*
		double grades [3][4];

		for(int row=0 ; row<3 ; row++)
			for(int col=0 ; col<4 ; col++)
				cin>>grades[row][col];

		for(int row =0 ;row<3;row++)
		{
			int sum = 0;

			for(int col=0;col<4;col++)
			{

				sum+=grades[row][col];
			}

			double avg =0;
			avg = sum/ 4.0 ;
			cout<<"Student #"<<row+1<<" has average grade "<<avg<<endl;

		}
	*/
	//=================================================================================================================================================

	//Multidimensional Arrays
	/*
		//● What if we have 5 years. For each year, we have 100 students and 20 subjects? How to represent?

		 we can do it in c++ using 3D Arrays : grades[5][100][20];

		○ also we can do it using 2D Array : 5 Arrays, each one is 2D array [100][20]  -->this way is not practical

		//○ Grade for the 3rd year, student #71, 9th subject --> 	 grades[2][70][8];  --> This is 2 * 70 * 8 double numbers each stored in the memory


		//● You can do bigger arrays with several dimensions
		//○ Int results[10][10][10][10][10][10];  --> Be careful this 1000,000 numbers stored in the memory
	*/

	//************************************************************************ Quiz 12  ******************************************************************************

	//1-
	/*
		const int ROWS = 2;
		const int COLS = 3;

			double grades[ROWS][COLS]
			{
				{ 1, 2, 3 },
				{ 6, 5, 4 }
			};

			double sum = 0;
			for (int row = 0; row <  ROWS; ++row)
				for (int col = 0; col < COLS; ++col)
					sum += grades[row][col]; // 1 , 1+2 , 1+2+3 , 1+2+3+6 , 1+2+3+6+5 , 1+2+3+4+6+5+4 , sum = 25

			cout << sum / (ROWS * COLS); // 25 / 6 = 3.5
	*/

	//2- We are recording data for a city about the name of a person per housing unit.
		  //Our entry is typically street number, building number, floor number, and apartment number.
			 //How many dimensions we need to save data in a single array in a convenient way.

			//arr[streat number][building number][floor number][apartment number]

	//3-
	/*
		const int ROWS = 2;
			const int COLS = 3;

				double grades[ROWS][COLS]
				{
					{ 1, 2, 3 },
					{ 6, 5, 4 }
				};

				cout << grades[1][1];
	*/


	//4-
		//double grades[2][3][4][10][10];  --> 2*3*4*10*10 =2400
		//How many numbers in this array?

	//5-
	/*
		double arr[2][3]
			{
				{ 1, 2, 3 },
				{ 6, 5, 4 }
			};

			int t = arr[0][0];
			arr[0][0] = arr[1][1]; //
			arr[1][1] = arr[0][2];
			arr[0][2] = arr[1][0];
			arr[1][0] = t;

			for (int j = 0; j < 3; ++j) {
				for (int i = 0; i < 2; ++i) {
					cout<<arr[i][j]<<" ";

				}
				cout<<endl;
			}
	*/

	//6-
	/*
		int arr[3][4] {
				{ 1, 2, 3, 10 },
				{ 6, 5, 4, 11 },
				{ 7, 8, 9, 12 },
			};

			int di[] {-1, 0, 1, 0};
			int dj[] {0, 1, 0, -1};

			int i = 1, j = 2;

			for (int d = 0; d < 4; ++d) {
				int ni = i + di[d];
				int nj = j + dj[d];
				cout<<arr[ni][nj]<<" ";
			}
	*/

	//7-
	/*
	 * In most of the current hardware/compiler, 2D array is just flattened row by row. Although this indexing seems out of the boundary,
	 * they actually correspond to specific positions in the array. arr[0][10] is the 10th element in the array.
	 * Don't code this way. just for educational purposes.
		int arr[3][4] {
			{0, 10, 2, 7},
			{31, 40, 5, 32},
			{11, 12, 15, 16},
		};

		cout<<arr[0][10] << " "<<arr[1][5];
	*/

	//***************************************************************** 2D Array Practice ****************************************************************************

	//Practice #1 : Max value
	/*
		● Read 2 integers for the rows and columns of a matrix ( <= 100). Then read rows x cols integer value.
		  Find the position of maximum value in the array.
		  If there are several ones, find the last occurance
		● Input:
		 3 4
		 1 5 1 10
		 2 10 3 4
		 1 10 10 7
		● Output
		○ Max value at position 2 2 with value = 10

		● Input:
		 3 4
	     1 2 3 1
	     5 6 7 4
	     1 4 5 7
	     ● Output
	    ○ Max value at position 2 3 with value = 7
	*/
	//Default Solution
	/*
		int arr[100][100];

		int rows, cols;
		cin >> rows >> cols;

		for (int row = 0; row < rows; ++row)
			for (int col = 0; col < cols; ++col)
				cin >> arr[row][col];

		int max_i = 0, max_j = 0;

		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < cols; ++j)
			{
				if (arr[i][j] >= arr[max_i][max_j])   //Using > only finds first max occurrence , but using >= finds last max occurrence
					max_i = i, max_j = j;
			}
		}
		cout << "Max value at position " << max_i << " " << max_j
				<< " with value = " << arr[max_i][max_j];
	*/

	//My Solution
	/*
		int rows ,cols;
		cin>>rows>>cols;

		int arr[100][100];

		for(int i=0;i<rows;i++)
			for(int j=0;j<cols;j++)
				cin>>arr[i][j];

		int max_row=0;
		int max_col=0;

		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
				if(arr[i][j] >= arr[max_row][max_col])
				{
					max_row=i;
					max_col=j;
				}
		}
		cout<<"max position at row "<<max_row + 1<<" and column "<<max_col + 1<< " with value "<<arr[max_row][max_col]<<endl;
	*/



	//=================================================================================================================================================

	//Practice #2 : Special print
	/*
		● Read 2 integers for the rows and columns of a matrix ( <= 100). Then read rows x cols integer value.
		● Print the following 4 values
		○ The sum of the left diagonal & The sum of the right diagonal
		○ The sum of the last row & The sum of the last column
		● Input: 3 4

		 8 16 9 52
		 3 15 27 6
		 14 25 2 10

		● Output
		○ 25 104
		○ 51 68
	*/
	//Default Solution
	/*
		int arr[100][100];

			int rows, cols;
			cin >> rows >> cols;

			for (int i = 0; i < rows; ++i)
				for (int j = 0; j < cols; ++j)
					cin >> arr[i][j];

			int i = 0, j = 0;

			int left_diagonal = 0;
			while (i < rows && j < cols)
				left_diagonal += arr[i++][j++];


			int right_diagonal = 0;
			i = 0, j = cols-1;
			while (i < rows && j >= 0)
				right_diagonal += arr[i++][j--];


			int last_row = 0;
			j = 0;
			while (j < cols)
				last_row += arr[rows-1][j++];

			int last_col = 0;
			i = 0;
			while (i < rows)
				last_col += arr[i++][cols-1];

			cout << left_diagonal << " " << right_diagonal << "\n";
			cout << last_row << " " << last_col << "\n";
	*/

	//My Solution
	/*
		int rows ,cols;
		cin>>rows>>cols;

		int arr[100][100];
		for(int i=0 ; i<rows ; i++)
			for(int j=0 ; j<cols ; j++)
				cin >> arr[i][j];

		//Sum of left Diagonal
		int left_diagonal =0;

		for(int i =0;i<rows;++i)
		{
			for(int j=0;j<cols;++j)
			{
				left_diagonal += arr[++i][++j];
			}
		}
		cout<<left_diagonal<<endl;


		//Sum of right Diagonal
		int right_diagonal =0;

		for(int i =0;i<rows;++i)
		{

			for(int j=cols-1; j>=0 ;j--)
			{
				right_diagonal += arr[i++][j--];

			}
		}
		cout<<right_diagonal<<endl;

		//The sum of the last row
	*/
	//=================================================================================================================================================

	//Practice #3 : Swap 2 columns
	/*
		● Read integers N, M, then Read matrix NxM. Then read 2 indices of columns.
		Swap the 2 columns together. Print the new matrix.
		● Input: 3 4
		 8 16 9 52
		 3 15 27 6
		 14 25 2 10
		 0 3
		● Output
		○ 52 16 9 8
		○ 6 15 27 3
		○ 10 25 2 14
	*/
	/*
		//number of test cases
		int N,M;
		cin>>N>>M;

		//values in the matrix array
		int arr [100][100];
		for(int i =0;i<N;i++)
			for(int j=0;j<M;j++)
				cin>>arr[i][j];

		// number of columns that will be swapped
		int n,m;
		cin>>n>>m;

		//swapping two columns but rows in fixed
		for(int i =0;i<N;i++)
			{
			int temp;
			temp=arr[i][n];
			arr[i][n]=arr[i][m];
			arr[i][m]=temp;
			}

		//printing the new matrix array
		for(int i =0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				cout<<arr[i][j];
				cout<<" ";
			}
			cout<<endl;

		}
	*/
	//=================================================================================================================================================

	//Practice #4 : Greedy Robot
	/*
		● Read integers N, M, then Read matrix NxM. All values are distinct.
		● A robot starts at cell (0, 0).
		● Take the value in the current cell and moves.
		● It can move only one step to either: Right, Bottom or the diagonal.
		● It always selects the cell that has maximum value.
		● Print the total values the robot collects
	*/
	/*
			int rows, cols;
			cin >> rows >> cols;

			int arr[100][100];
			for (int i = 0; i < rows; ++i)
				for (int j = 0; j < cols; ++j)
					cin >> arr[i][j];


			int i = 0, j = 0, sum = 0;

				while (i < rows && j < cols)
				{
					sum += arr[i][j];

					int next_val, best_i = -1, best_j = -1;

					// is right ok position?
					if (j + 1 < cols)
						next_val = arr[i][j + 1], best_i = i, best_j = j + 1;

					// is down ok position?
					if (i + 1 < rows) {
						if (best_i == -1 || next_val < arr[i + 1][j])
							next_val = arr[i + 1][j], best_i = i + 1, best_j = j;
					}
					// is diagonal ok position?
					if (i + 1 < rows && j + 1 < cols) {
						if (next_val < arr[i + 1][j + 1])		// best_i == -1 ||   no need
							next_val = arr[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
					}

					if (best_i == -1)
						break;
					i = best_i, j = best_j;
				}
				cout << sum << "\n";
	*/

//***************************************************************** 2D Arrays HomeWork 1 ****************************************************************************

	//Problem #1: Smaller row?
		/*
			● Read integers N, M, then Read matrix NxM. Then read Q for Q queries.
			● Each query is 2 integers: first and 2nd row indices (1-based)
			● Compare the 2 rows and print YES if first row < 2nd for all the row values
			● Input ⇒ Output

			 3 4
			 8 16 9 52
			 3 15 27 6
			 14 25 29 10
			 3
			 1 2 ⇒ NO
			 2 3 ⇒ YES
			○ 1 3 ⇒ NO
		*/
		/*
			int rows , cols ;
			cin>>rows>>cols;

			int arr[100][100];
			for(int i=0;i<rows;i++)
				for (int j =0;j<cols;j++)
					cin>>arr[i][j];

			int q;   // number of Quiries (trials)
			cin>>q;

			while (q--)
			{
				int r1, r2;
				cin >> r1 >> r2;
				r1--;
				r2--;

				bool is_smaller = true;

				for (int j = 0; j < cols; ++j)
				{
					if (arr[r1][j] >= arr[r2][j])
					{
						is_smaller = false;
						break;
					}
				}

				if (is_smaller)
					cout << "YES\n";
				else
					cout << "NO\n";
			}
		*/
		//=================================================================================================================================================

		//Problem #2: Triangular matrix
		/*
			● Read integer N, then Read Square matrix NxN. Then, print 2 values. The
			sum of the lower triangle matrix and the upper triangle.
			● Input
			○ 3
			 8 16 9
			 3 15 27
			 14 25 29
			● Output
			○ 94 (8+15+29+3+25+14)
			○ 104 (8+15+29+16+27+9)
		*/
		/*
			int n, upper = 0, lower = 0, val;
			// No need to create matrix!
			cin >> n;
			for (int row = 0; row < n; ++row)
			{
				for (int col = 0; col < n; ++col)
				{
					cin >> val;

					if (row <= col)
						lower += val;

					if (row >= col)
						upper += val;
				}
			}

			cout << lower << "\n";
			cout << upper << "\n";
		*/
		//=================================================================================================================================================

		//Problem #3: Transpose
		/*
			● Read integers N, M, then Read matrix NxM. Compute another array, the
			transpose.

			4*5 matrix --> 5*4 transpose matrix

			we got transpose of a matrix by interchanging Raws and columns of original matrix
		*/

		//Default Solution 1
		/*
			int arr1[100][100];
			int arr2[100][100];

			int n1,n2;
			cin>>n1>>n2;

			//reading integers in array 1
			for (int i=0;i<n1;i++)
				for(int j=0;j<n2;j++)
					cin>>arr1[i][j];

			//transpose array 1 to a new array 2
			for (int i=0;i<n1;i++)
				for(int j=0;j<n2;j++)
					arr2[i][j]=arr1[j][i];  // here is the solution

			//print the transposed array
			for (int i=0;i<n1;i++)
			{
				for(int j=0;j<n1;j++)
				{
					cout<<arr2[i][j]<<" ";
				}
				cout<<endl;
			}
		*/



//***************************************************************** Tic Tac Toe Game ****************************************************************************

	//Block 1 : Declaring & initializing

		int grid[100][100] {0};   // 0 empty, 1 = x, 2 = o

		int n;
		cout<<"Enter grid dimension :";
		cin>>n;


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


	return 0;
}
