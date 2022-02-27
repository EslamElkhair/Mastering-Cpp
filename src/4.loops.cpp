//=======================================================================================================
// Name        : Loops.cpp
// Author      : ESLamELkhair
// Created on  : Feb 21, 2022
// Copyright   : @ELkhair's
// Description : Loops in in C++,
//=======================================================================================================

#include <iostream>
using namespace std;

int main_4()
{

//******************************************************************* While Loop *******************************************************************************

// Loops :  it is a way to command the computer to REPEAT the same operations till we ask him to STOP
// While loop and if loop are like the Slection if ---> if print the code one time , while loop prints the same code several times
// While loop , for loop both have conditions like if statement



//	if(3<5)
//	{
//		cout<< "3 < 5 . printed one time ";
//	}

// Repeat while loop forever ---> its condition should be always true

//	while (3<5)  // the condition (3<5) will be always true so the complier will print ""3 < 5 . printed forever"" forever till we ask it to stop
//		         // we can force the compiler to stop printing by click the red button in the console dialog
//	{
//		cout<<"3 < 5 . printed forever\n";
//	}

//=====================================================================================================================================================

// Repeating while loop selected times ---> its condition should be false at some point

    // ---> we will change the condition (3<5) so we can stop repeating the while loop at some point

	// there is 3 important parts of the while loop ( or any other loop later )

//	int x=0;                               //1- initialization part
//
//	while (x<5)                            //2- condition part
//	{
//		cout<<x<<endl;                    // our logic -> not included in the fundamental pats of any loop
//
//		x++;                               // 3- increment part
//	}

//=====================================================================================================================================================

// Using break statement : We can use word break to stop the while and go AFTER it

//	int x, y;
//
//		while (true) //while loop codition            // condition true will repeat the while loop forever
//			                                          //---> so we use break statement to stop the loop when my condition is true
//		{
//			cin >> x >> y;
//
//			if (y == 0) // my condition to stop the loop
//			{
//				cout<<"Y is zero!!\n";
//				break;
//			}
//			cout << x / y << "\n";
//		}
//		cout<<"Bye\n";

//=====================================================================================================================================================

// Using continue statement : Continue tells computer to JUMP to the while start again and continue	from there
		                   // So statements after it inside the while body is skipped


//		int x, y;
//
//			while (true)                   // condition true will repeat the while loop forever
//                                          //---> so we use continue statement to put some conditions while the loop is repeated
//			{
//				cin >> x >> y;
//
//				if (y == 0)
//				{
//					cout<<"Y is zero. Try other 2 numbers\n";
//					continue;
//				}
//				cout << x / y << "\n";
//			}
//			cout<<"Bye\n";	// never reached


/* Quiz

//1-
	//It goes forever! x += 10 is outside the while. Be careful. Missing {}
//	int x = 0;
//
//		while(x < 50)
//			cout<<x<<" ";
//			x += 10;

//2-
	//int x = 0;

	//while(x++ < 50)
	//{
		//cout<<x++<<" ";
		//++x += 10;
	//}

//3-
	//int n = 60;

		//while (n > 5) {
			//if (n % 2 == 0)
				//n /= 2;
			//else
				//n = (n - 1) / 2;
		//}
		//cout<<n;

//4-

int n = 60;

		while (n > 5)  // 30  15  7  70  35  17
		{
			//Independent block of code
			if (n == 7)    //condition true at fourth turn
			{
				n = 70;    // fourth turn : now n = 70
				continue;  // continue after n =70
			}

			//another block of code
			if (n % 2 == 0)
				n /= 2;          // first turn : x = 30  , second turn : x = 15 , fifth turn : n = 70 / 2 = 35
			else
				n = (n - 1) / 2; // third turn : x = (15 - 1) / 2 = 7  , sixth turn : n = (35 - 1) / 2 = 17 , senventh turn = (17-1)/2 = 8

			//another block
			if (n == 8)
				break;
		}
		cout << n;
*/

//********************************************************* While loop practice *************************************************************************

//1- Read an integer X, find all numbers divisible by 3 from 1 to X.

/*
	//initialization
	//int x;
	//cin >> x;

     	//int start = 1;

		//while (start <= x)       //condition
		//{
			//if (start % 3 == 0)
				//cout << start << "\n";

			//start += 1;        // increment

	//}
*/
//=====================================================================================================================================================

//2-power function
		//Read 2 integers X and Y and compute x power y.
		//○ This means X * X * X ….. Y times
		//○ E.g = 2 power 5= 2 * 2 * 2 * 2 * 2

/*	int x,y;
	cin>>x>>y;

   // test case : 2 5
		int result = 1;

		while (y >= 1)  //5 > 1 --> true    ,, 4>1 --> true  ,, 3>1 --true ,, 2 > 1 ,, 1=1 --> true
		{
			result = result * x; // 1*2 = 2  ,,  2*2 = 4 ,, 4*2 = 8 ,, 8*2 = 16 ,, 16*2 = 32
			--y;         // y = 4  ,, y = 3 ,, y = 2 ,, y = 1
		}
		cout << result;  // the compiler print the last value of the variable ---> 32
*/

//=====================================================================================================================================================

//3- Read a C++ integer and count its number of digits
	//There are 2 bugs in this code
	//Find 3 test cases to find them!

// test case : 456

//	int num;
//	cin >> num;
//
//	int digits = 0;
//
//	while (num > 0)    // 456 > 0 --> true  ,, 45.6 > 0 --> true  ,, 4.56 > 0 --> true ,, 0.456 > 0 --> false --> stop and continue logic outside the while loop
//	{
//		digits += 1;    // digits = 1  ,, digits = 2 ,, digits = 3
//
//		num = num / 10; // num = 45.6 ,, num = 4.56  ,, num = 0.456 --> compiler consider the last value of num varialble which is 0.456
//	}
//	cout<<digits;  // digits of num = 456 are 3


//test case : 0
	/* first bug is:
 the previous code fails for input 0
○ The loop won’t be accessed as num > 0 condition
● Solution:
○ Special if condition for this special case*/

//	    int num;
//		cin >> num;  // 0
//
//		int digits = 0;
//
//		if (num == 0)    //0 == 0   --> true
//			digits = 1;  // digits = 1
//		else
//		{
//			while (num > 0) //0 > 0 --> false --> compiler skip while loop and continue executing other logic
//			{
//				digits += 1;
//
//				num = num / 10;
//			}
//		}
//		cout << digits; // digits = 1


//test case : -456
	/* second bug is
	  ● Our previous code will fail for negative numbers
      ● Simple trick: if it is negative, multiply by -1
    */

/*	int num;
	cin >> num;  // -456

	int digits = 0;

	if (num == 0)    //condition : false --> compiler skip
		digits = 1;

	else
	{
		if (num<0)   //condition : true  --> compiler execute the below logic
		num*=-1;     // num = -456 * -1 = 456

		while (num > 0) //condition : (456>0) : true : execute as the first code
		{
			digits += 1;

			num = num / 10;
		}
	}
	cout << digits; // digits = 3
*/

//test case :
	/* third bug is :
● integer limits are:
○ -2147483648 to 2147483647
● If we did num * -1 on the max number it
become: 2147483648
○ But this is > 2147483647 ⇒ Overflow
○ Solution: Special case handling
*/

/*	int num;
	cin >> num;

	int digits = 0;

	if (num == 0)
		digits = 1;

	else if (num == -2147483648)  // here
		digits = 10;

	else {
		if (num < 0)
			num = -num;

		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout <<digits;
*/

//We wanted to change output message What is wrong?

/*
	    int num;
		cin >> num;

		int digits = 0;
		int tem_num = num;   // fixing the bug

		if (num == 0)
			digits = 1;
		else if (num == -2147483648)
			digits = 10;
		else {
			if (num < 0)
				num = -num;

			while (num > 0) {
				digits += 1;
				num = num / 10;
			}
		}
		//cout << "# digits of "<<num<<" is "<<digits;   // here --> bug : it always print num variable as 0

		  cout << "# digits of "<<tem_num<<" is "<<digits; //  Num , the input, was divided till be zero So we lost its original value!
		                                                  // Solution: Make a copy --> tem_num
*/

//=====================================================================================================================================================

//4-
/*
	Write a program that reads integer T Then read T (digits)
     for each number N print sum of 1 to N
*/

// test case : 123 , 3 digits
/*
	int T;
	cin >> T;    // 123

	while (T > 0)  //(123>0) --> true
	{
		int num;
		cin >> num;  // 3

		int sum = 0;
		int start = 1;

		while (start <= num) // (1 <3)  --> true
		{
			sum += start; // sum = 0 + 1 = 1
			start++;    // 2
		}
		--T;  // 122
		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}
*/


//******************************************************************* For Loop ********************************************************************************

// While Loop vs For Loop

/*
 While loop                          ____     For loop

 initialization ;
 while ( condition )                         for (  initialization ; condition ; (increment / decrement )step;  )

 {                                            {
     logic ;                                            logic ;
     logic ;                                            logic ;
     .
     .                                        }

     (increment / decrement )step;
 }

*/

// while loop code
/*
	int x =1;     // initialization

	int sum =0;

	while (x<6)   // condition
	{
		sum+=x;   // logic

		x++;      //increment step
	}
	cout<<sum;    // logic
*/

// for loop
/*
	int sum=0; // logic

	for ( int x=1 ; x<6 ; x++ )   // initialization ; condition ; increment step
	{
		sum+=x;  //logic

	}
	cout<<sum;  // logic
*/

//=====================================================================================================================================================

//Nested for loops

  // Sum from T to num
	// read T
//	int T;
//	cin >> T;
//
//	for (int t = 0; t < T; ++t) // for outside
//	{
//		// read num
//		int num, sum = 0;
//		cin >> num;
//
//		for (int start = 1; start <= num; ++start) // for inside
//			sum += start;
//
//		cout << "Sum from 1 to " << num << " = " << sum << "\n";
//	}


//=====================================================================================================================================================

// Loop empty parts
	//● We can remove 2 elements of the for loops

//	int sum=0;
//
//	int x=1;   // initialization ;
//
//	for (  ; x<6 ;  )   //  condition ;
//	{
//		sum+=x;
//
//		x++;     // increment step;
//	}
//	cout<<sum;



//********************************************************* For Loop Practice **************************************************************************************

//Problem #1
/*
Read T for number of test cases. For each test case read integer N: number
of numbers. Then read N numbers a, b, c, ….. and compute the sum of:
○ (a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……)
○ That is the k-th number is repeated k times
● Input:
○ 2
○ 3 5 7 2
○ 4 1 2 3 4
● Output
○ 62 [as (5 + 7*7 + 2*2*2) = 62]
○ 288 [as (1+2*2+3*3*3+4*4*4*4) = 288]
*/

/*
	int N, T, value;

		cin >> T;   // T for test cases

		while (T--)
		{
			cin >> N;

			int sum = 0;
			for (int i = 0; i < N; ++i)
			{
				cin >> value;

				int result = 1;
				for (int j = 0; j < i + 1; ++j)
					result *= value;

				sum += result;
			}
			cout << sum << "\n";
		}

*/

//================================================================================================================================================
// Problem #2
/*
	Read N, M, SUM. Find all pairs that has
	A + B == SUM where
	○ 1 <= A <= N
	○ 1 <= B <= M

	Try input
      1000000 1000000 1000000
*/

// test case : 200 300 70
/*
	int n, m, sum;
	cin >> n >> m >> sum;

		int cnt = 0;

		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= m; ++j)
				if (i + j == sum)
					cnt++;

		cout << cnt << "\n";
*/

// test case : 1000000 1000000 1000000

//		int n, m, sum;
//		cin >> n >> m >> sum;
//
//			int cnt = 0;
//
//			for (int i = 1; i <= n; ++i)
//			{
//				int j =  sum - i;	// i + j == sum
//
//				if (1 <= j && j <= m)
//					cnt++;
//
//			}
//
//			cout << cnt << "\n";


//================================================================================================================================================

// Problem #3 :

/*	Read N, M, W. Find all triples that has
	A + B <= C where
	○ 1 <= A <= N
	○ A <= B <= M
	○ 1 <= C <= W
*/

// test case : 3 4 5
/*
	int n, m, w;
	cin >> n >> m >> w;

		int cnt = 0;

		for (int i = 1; i <= n; ++i)
			for (int j = i; j <= m; ++j)
				for (int k = 1; k <= w; ++k)
					if (i + j <= k)
						cnt++;

		cout << cnt << "\n";
*/


//************************************************ HomeWork 1 : 5 easy problems --> While Loop ***************************************************


	/*problem #1 : Given a starting number X and an ending number Y, print all numbers between X and Y inclusive, each on a line.
		● Input 3 7
		● Output
		○ 3
		○ 4
		○ 5
		○ 6
		○ 7
	*/

	//Default Solution

	// case test : 3  7
	/*
		int start, end;

		cin>>start>>end;

		while(start <= end)
		{
			cout<<start<<"\n";
			start++;
		}
	*/

	//======================================================================================================================

	//Problem #2 : Read an integer N followed by a single character , Print the character N times
		//Input ⇒ Output
		//○ 5 Y ⇒ YYYYY
		//○ 3 # ⇒ ###
	/*
	//test case : 3 *
		int num;
		char ch;

		cin>>num>>ch;

		while(num > 0) // 3>0 --> true ,, 2>0 --> true ,, 1>0 --> true  ,, 0>0 --> false
		{
			cout<<ch;  // * ,, ** ,, ***
			num -= 1;  // 2 ,, 1 ,, 0

			//continue ; --> if we put continue the loop will complete the 3 turns as usual and print ***
			//break;  --> if we put break the loop will stop after only one turn and print *
		}
	*/

	//======================================================================================================================

	//Read integer N, then print a left angled triangle that has N rows

		//test case : 5 *
	/*
		int N;
		cin >> N;

			int row = 1;
			while (row <= N)  // 1 < 5 --> true
			{
				int stars_count = 1;

				while (stars_count <= row) //1 = 1 --> true
				{
					cout << '*';        // *
					++stars_count;       // 2
				}
				cout << "\n";
				row++;   // 2  and so on
			}

	*/

	//======================================================================================================================

	//Read integer N, then print a face down left angled triangle that has N rows.
	/*
		int N;
		cin >> N;

			// Use doubles to: 1) allow any values 2) get average correctly
			double even_sum = 0, odd_sum = 0;
			int even_count = 0, odd_count = 0;

			int cnt = 1;
			while (cnt <= N)
			{
				double value;
				cin >> value;

				if (cnt % 2 == 0)	// even position
					even_sum += value, even_count++;
				else				// odd position
					odd_sum += value, odd_count++;

				cnt++;
			}

			cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

	*/


//************************************************ HomeWork 4 :  medium to hard problems ******************************************


	//<<<<<<<<<<<<<<<<<<<<<<<<<<< For Loop >>>>>>>>>>>>>>>>>>>>>>>>>>

	// Problem #1
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

	/*
		int n;
		cin>>n;

			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					if(i == j || n-i-1 == j)
						cout<<"*";
					else
						cout<<" ";
				}
				cout<<"\n";
			}
	*/

	//======================================================================================================================

	// Problem #2 : Find Special Pairs
	/*
		● Count How many X, Y numbers such that
		○ X in range [50-300]
		○ Y in range [70-400]
		○ X < Y
		○ (X+Y) divisible by 7
		● Output
		○ 8040
	*/

	/*
		int count = 0;

		for (int x = 50; x <= 300; ++x)
		{
			for (int y = 70; y <= 400; ++y)
			{
				if (x < y && ((x + y) % 7 == 0))
				{
					//cout<<x<<" "<<y<<" "<<x+y<<"\n";
					++count;
				}
			}
		}
		cout<<count<<"\n";
	*/

	//======================================================================================================================

	//Problem #3 :  Find all quadruples
	/*
	● Count how many (a, b, c, d) with following property:
	○ 1 <= a, b, c, d <= 200
	○ a + b = c + d
	 */

//		int count = 0;
//
//			for (int a = 1; a <= 200; ++a) {
//				for (int b = 1; b <= 200; ++b) {
//					for (int c = 1; c <= 200; ++c) {
//						for (int d = 1; d <= 200; ++d) {
//							count += (a + b == c + d);
//						}
//					}
//				}
//			}
//
//			cout << count << "\n";




return 0;
}


