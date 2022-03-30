//=======================================================================================================
// Name        : Loops.cpp
// Author      : ESLamELkhair
// Created on  : Feb 21, 2022
// Copyright   : @ELkhair's
// Description : Loops in in C++,
//=======================================================================================================

#include <iostream>
using namespace std;

int main_4() {

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

//======================================================================================================================
	//Problem #5: Special Average
	//	● Read integer N, followed by reading N numbers. Print 2 values
	//	○ The average of the numbers in odd positions (1st, 3rd, 5th, ...)
	//	○ The average of the numbers in even positions (2nd, 4th, 6th, ...)
	//	● Input
	//	○ 6 10 100 20 200 30 600
	//	● Output
	//	○ 20 300
	//	● Explantation
	//	○ (10+20+30)/3 = 20
	//	○ (100+200+600)/3 = 300
//Solution 1
//	int n, n1, n2, n3, n4, n5, n6;
//	cin >> n >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
//
//	cout << (double)(n1 + n3 + n5) / 3 << " " << (double)(n2 + n4 + n6) / 3;
//Solution 2
//	int N;
//	cin >> N;
//
//	double oddsum = 0;
//	int odd_cnt = 0;
//	double evensum = 0;
//	int even_cnt = 0;
//
//	int position_cnt = 1;
//
//	while (position_cnt <= N) {
//		double value;
//		cin >> value;
//		if (position_cnt % 2 == 0) {
//			evensum += value;
//			even_cnt++;
//		} else {
//			oddsum += value;
//			odd_cnt++;
//		}
//
//		position_cnt++;
//	}
//	cout << evensum / even_cnt << " " << oddsum / odd_cnt << endl;

//************************************************ HomeWork 2 :  while loop medium problems ******************************************

//	Problem #1: Print diamond
//	● Read an integer N, then print diamond of 2N rows as below
//	int N;
//
//	cin >> N;
	/*
	 * Let's print the upper triangle first
	 * Let's assume N = 4, how many spaces and starts we print
	 * Row 1	Spaces 3	Stars 1
	 * Row 2	Spaces 2	Stars 3
	 * Row 3	Spaces 1	Stars 5
	 * Row 4	Spaces 0	Stars 7
	 *
	 * Now we wanna develop formulas for number of spaces and number of starts
	 * For a given 'row'
	 * 	Spaces are: N - rows   	(3, 2, 1, 0)
	 * 	Starts are: 2*row -1	(1, 3, 5, 7)
	 *
	 * Now we just iterate for each row
	 * 	print spaces
	 * 	then print starts
	 */
//	int row = 1;
//	while (row <= N) {
//		int stars_count = 1;
//
//		// Print N - rows spaces
//		while (stars_count <= N-row) {
//			cout << ' ';
//			++stars_count;
//		}
//
//		// Print 2*rows-1 stars
//		stars_count = 1;
//		while (stars_count <= 2*row-1) {
//			cout << '*';
//			++stars_count;
//		}
//		cout << "\n";
//		++row;
//	}
//
//	/*
//	 * Let's print the lower triangle second
//	 * Same logic, we just switch looping from N to 1
//	 */
//	row = N;
//	while (row >= 1) {
//		int stars_count = 1;
//
//		while (stars_count <= N-row) {
//			cout << ' ';
//			++stars_count;
//		}
//
//		stars_count = 1;
//
//		while (stars_count <= 2*row-1) {
//			cout << '*';
//			++stars_count;
//		}
//		cout << "\n";
//		--row;
//	}
//======================================================================================================================
//Problem #2: Special multiples 1
//	● Read an integer N : print all numbers that satisfy the following property
//	○ Either number is divisible by 8
//	○ Or divisible by both 4 and 3
//	● Input: 100
//	● Output: 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96

//	int N;
//	cin >> N;
//
//	int count = 0;
//
//	while (count < N) {
//
//		if (count % 8 == 0 || count % 3 == 0 && count % 4 == 0) {
//			cout << count << " ";
//		}
//
//		count++;
//	}
//======================================================================================================================
// Problem #3: Special multiples 2
//	● Read an integer N (1 <= 30): Print the first N numbers that are
//	○ multiple of 3 but not multiple of 4
//	● Input: 11
//	● Output: 3 6 9 15 18 21 27 30 33 39 42
//	● Notice
//	○ 12 is divisible by both 3 and 4 ⇒ so excluded

//Solution 1
//	int N;
//	cin >> N;
//
//	int cnt = 0;
//
//	int value = 0;
//
//	while (cnt < N) {
//
//		if (value % 3 == 0 && !(value % 4 == 0)) {
//			cout << value << " ";
//			cnt++;
//
//		}
//		value++;
//	}

//Solution 2
//	int n;
//	cin >> n;
//
//	int start = 3;
//	while (n)  // n will decreases untill it assign zero n = 0  and that's means false then the compiler will  break the loop
//
//	{
//		if(start % 4 != 0)	// make sure multiple of 4 too
//			--n, cout<<start<<" ";
//		start += 3;	// increment with 3: is multiple of 3
//	}
//======================================================================================================================

//Problem #4: Minimum of values
//● Input: Read integer T for a number of test cases.
//● For each test case read integer N followed by reading N integers.
//● Output: For each test case, print the minimum of the N integers.
//● Input
//○ 2 6 10 50 20 70 30 4 3 10 5 30
//○ Notice here we have 2 test cases
//■ 6 10 50 20 70 30 4 [6 numbers to read] ⇒ min is 4
//■ 3 10 5 30
//● Output
//○ 4
//○ 5
	//number of test cases
//	int T;
//	cin >> T;
//
//	while (T > 0) {
//		// number of values
//		int N;
//		cin >> N;
//
//		int pos = 0;
//		int result;
//
//		while (pos < N) {
//			int value;
//			cin >> value;
//
//			if (pos == 0)
//				result = value;
//
//			else if (result > value)
//				result = value;
//
//			pos++;
//		}
//		cout << result << "\n";
//
//		--T;
//	}

//************************************************ HomeWork 3 :  while loop Hard problems ******************************************

//Problem #1: Find NOs

//● Read integer N, then read N strings.
//○ Print only the strings (of 2 letters).
//○ These 2 letters must be letter ‘N’ and letter ‘O’
//■ Regardless of lower or upper case
//■ Regardless of the 2 letters order
//■ E.g. print “No”, “ON”, “no” but ignore e.g. “YEs”, “Noooo”
//■ That is: a word of 2 letters only N and O
//● Input
//○ 9 Yss NO noOO oN Mostafa no nN oOOooo oO
//● Output
//○ NO oN no

//	int N;
//	cin >> N;
//
//	int cnt = 0;
//
//	while (cnt < N) {
//
//		string S;
//		cin >> S;
//
//		if (S == "no" || S == "No" || S == "nO" || S == "NO"|| S == "on" || S == "oN" || S == "On" || S == "ON")
//			cout << S << " ";
//
//		cnt++;
//	}

//======================================================================================================================

//Problem #2: Reverse number

//	● Read an integer N, then find its reverse integer R
//	○ Print R R*3
//	● input ⇒ Output
//	○ 123 ⇒ 321 963

//	int number;
//	cin >> number;
//
//	int R_number = 0;
//
//	while (number > 0) {
//
//		//123
//
//		//Last digit
//		int last_digit = number % 10;
//		number /= 10;
//
//		// reverse number
//		R_number = R_number * 10 + last_digit;
//
//
//	}
//	cout<<R_number;

//======================================================================================================================

//Problem #3: Multiplication table

	//	● Read an integer N and M, then print NxM lines for their multiplication table.
	//	● Input 3 4
	//	● Output
	//	○ 1 x 1 = 1
	//	○ 1 x 2 = 2
	//	○ 1 x 3 = 3
	//	○ 1 x 4 = 4
	//	○ 2 x 1 = 2
	//	○ 2 x 2 = 4
	//	○ 2 x 3 = 6
	//	○ 2 x 4 = 8
	//	○ 3 x 1 = 3
	//	○ 3 x 2 = 6
	//	○ 3 x 3 = 9
	//	○ 3 x 4 = 12

//	int N = 0;
//	int M = 0;
//	cin>>N>>M;
//
//	int cnt_N = 1;
//
//	while (cnt_N <= N ) {
//
//		int cnt_M = 1 ;
//
//		while (cnt_M <= M) {
//
//			cout<<cnt_N << " x " << cnt_M << " = " << cnt_N * cnt_M <<endl;
//			cnt_M ++;
//		}
//
//		cnt_N++;
//	}

//======================================================================================================================

//Problem #4: Special Sum

	//● Read integer T for number of test cases.
	//● For each test case read integer N. Then read N integers a, b, c
	//● Output: Compute the sum of the following expression:
	//○ a, b*b, c*c*c, d*d*d*d, e*e*e*e*e......
	//■ That is the k-th number is repeated k times
	//● Input:
	//○ 2
	//○ 3 5 7 2
	//○ 4 1 2 3 4
	//● Output
	//○ 62 [as (5 + 7*7 + 2*2*2) = 62]
	//○ 288 [as (1+2*2+3*3*3+4*4*4*4) = 288]


//	//loop1 over test cases
//	int T;
//	cin>>T;
//	 while (T>0) {
//
//		 // //loop2 over reading numbers
//		 int N;
//		 cin>>N;
//		int cnt_N=1; // positions of numbers
//
//		int sum = 0; // sum variable
//
//		 while (cnt_N<=N){
//
//			 int value =0 ; // values of numbers
//			 cin>>value;
//
//			 //loop3 to the numbers k times (multiplication)
//
//			 int deep_cnt = cnt_N;
//
//			 int mul =1; // multiplication variable
//
//			 while (deep_cnt > 0) {
//
//				 mul *= value , deep_cnt --; //multiplication logic ->  mul = 1 * 2 = 2
//				 	 	 	 	 	 	 	 	 	 	 	 	 //	-> mul = 1 * 5 = 5 , mul = 5 * 5 = 25
//				 	 	 	 	 	 	 	 	 	 	 	 	 // -> mul = 1 * 4 = 4 , mul = 4 * 4 , mul = 4 * 4 * 4 = 64
//			 }
//
//			 sum+=mul , cnt_N++; //sum logic  ->  sum = 0+2 = 2 -> sum = 2 + 25 = 27 , sum = 27 + 64 = 91
//		 }
//
//		 cout<<sum <<"\n";  // 91
//
//
//		 T--; // 2 -> 1 , 1 -> 0
//	 }



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

// while loop syntax
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

//Problem #1 : special Sum
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


//			 int T, N , value;
//
//			 cin >> T;   // T for test cases
//
//			 while (T--)   // T > 0 ,,,  0 -> false
//			 {
//
//			 cin >> N; // numbers
//
//			 int sum = 0; // logic
//
//			 // cnt
//			 for (int i = 0; i < N; ++i) // intializtion , condition , increment/decrement --> more clean / more intellegent
//			 {
//			 cin >> value;
//
//			 int mul = 1;  // logic
//
//			 for (int j = 0; j < i + 1; ++j)
//				 mul *= value; // multiplication logic
//
//			 sum += mul; // sum logic
//			 }
//			 cout << sum << "\n"; // printing
//			 }


//================================================================================================================================================

    // Problem #2 : pair of numbers

    	/*
    	 Read N, M, SUM. Find all pairs that has [N,M]
    	 A + B == SUM where
    	 ○ 1 <= A <= N
    	 ○ 1 <= B <= M

    	 Try input
    	 200 300 70
    	 1000000 1000000 1000000
    	 */

   // test case :

//    	int start_range, end_range, sum;
//    	cin >> start_range >> end_range >> sum;
//
//    	int cnt = 0;
//
//    	for (int i = 1; i <= start_range; ++i)   //  [n -> M]   5 -> [10 , 10]
//    		for (int j = 1; j <= end_range; ++j )
//    			if (i + j == sum) // pairs 4 1 , pairs 3 2 , pairs 2 3 , pairs 1 4
//    				cnt++; // 1 2 3 4
//
//
//    	cout << cnt << "\n";   // 4


    //test case : 1000000 1000000 1000000 : more efficient code -> execution time faster ->  more performance software


//			int start_range, end_range, sum;
//			cin >> start_range >> end_range >> sum;
//
//				int cnt = 0;
//
//				for (int i = 1; i <= start_range; ++i)
//				{
//					int j =  sum - i;	// i + j == sum   -->  4 , 3  , 2 , 1 ||| , 0 , -1 , ....
//
//					if (1 <= j && j <= end_range)
//						cnt++; // 1 2 3 4
//
//				}
//
//				cout << cnt << "\n"; // 4

//================================================================================================================================================


	// Problem #3 : Triple of numbers

	/*	Read N, M, W. Find all triples that has   i + j <= k
	 where
	 ○ 1 <= i <= N
	 ○ A <= j <= M
	 ○ 1 <= k <= W
	 */

	// test case : 3 4 5

//	int n, m, w;
//	cin >> n >> m >> w;
//
//	int cnt = 0;
//
//	for (int i = 1; i <= n; ++i)
//		for (int j = i; j <= m; ++j)
//			for (int k = 1; k <= w; ++k)
//				if (i + j <= k)
//					cnt++;
//
//	cout << cnt << "\n";


//	test case : 1000000 1000000 100000
//    	int n, m, w;
//    	cin >> n >> m >> w;
//
//    	int cnt = 0;
//
//    	for (int i =1 ;i<=n;++i)
//    		for(int j=i;j<=m;++j) {
//
//    			int k = i+j;
//
//    			if(1<=k && k<=w)
//    				cnt+=w-k+1;
//    		}
//
//    	cout<<cnt<<"\n";


//======================================================================================================================

	//Fibonacci Sequence

	//	● A popular math sequence
	//	○ First 2 numbers: 0 1
	//	○ Then each number is sum of last 2 numbers:
	//	■ 0 1 1 2 3 5 8 13 21 34
	//	● E.g. 13 = 5 + 8
	//	● E.g. 34 = 13+21
	//	● Write a code!

//Solution 1

//	int n = 10;
//
//	int a = 0, b = 1;
//
//	cout<<a<<" "<<b<<" ";
//
//	for (int cnt = 2; cnt < n; ++cnt) {
//		int c = a+b;
//		a = b;
//		b = c;
//
//		cout<<c<<" ";
//	}

//Solution 2
//	int n = 10;
//
//	for (int a = 0, b = 1, c = -1, cnt = 0; cnt < n; ++cnt, c = a + b, a = b, b = c)
//		cout << a << " ";



//************************************************ HomeWork 4 :  For Loop medium to hard problems ******************************************
//Problem 1: Printing X

//	● Read an Integer N, then print an X using * as following
//	○ N always odd

//	*   *
//	 * *
//	  *
//	 * *
//	*   *

//	int n;
//	cin>>n;
//
//	if(n%2==0)
//		cout<<"evens not allowed";
//
//	else{
//		for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			if(i == j || n-i-1==j )
//				cout<<"*";
//			else
//				cout<<" ";
//		}
//		cout<<"\n";
//	}
//
//	}

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

//	int cnt=0;
//
//	for(int x=50;x<=300;++x)
//		for(int y=70;y<=400;++y) {
//			if(x<y && (x+y)%7==0)
//				++cnt;
//		}
//	cout<<cnt;


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

