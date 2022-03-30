//=======================================================================================================
// Name        : Selection.cpp
// Author      : ESlamELkhair
// Created on  : Feb 19, 2022
// Version     : 0.0
// Copyright   : @ELKhair's
// Description : Flow Control in C++ : Selection : IF , IF .. Else , IF .. Else IF , IF With Initializer
//=======================================================================================================

#include <iostream>
using namespace std;

int main_3() {

//************************************************ Selection 1 : if statement ********************************************************

// if with one statement (one logic)

//	int salary = 0;
//	cin >> salary;
//
//	if (salary < 1000)  // if condition is true print the below statement
//		cout << "you are poor\n";
//
//	cout << "Salam";

   //===============================================================================================================================

	//if with several statements ---> Use { } if want to do more logic You can write whatever
	//                           ---> Be careful What inside {} not visible outside it
	//                           ---> variables inside {} are local variables can't be used outside the parentheses

//	int num;
//	cin>>num;
//
//	if (num == 10)
//	{
//	int x = 3;
//	cout<<"10 is lucky number\n";
//	cout<<"also "<<2*num + x<<"\n";
//	}
//
//	cout<<x;	# not visible here!

//************************************************ Selection 2 : If else , If else If , Nested If *********************************************

	// if with several conditions ---> if .. else if chain

	//int salary {0};
	//cin>>salary;

	//if(salary < 1000)
	//cout<<"you are poor"<<endl;
	//else if (salary>1000 && salary <20000)
	//cout<<"you are good "<<endl;
	//else if (salary >=20000)
	//cout<<"you are rich"<<endl;

	//===============================================================================================================================

	//If .. else if .. else chain ---> Read an integer and print if it has 1, 2, 3, 4 or 5+ digits
	// For example if input is 556
	// Then print: 3 digits

	//int num{0};
	//cin>>num;

	//if (num < 10)
	//cout<<"1 digit\n";
	//else if (num < 100)
	//cout<<"2 digits\n";
	//else if (num < 1000)
	//cout<<"3 digits\n";
	//else if (num < 10000)
	//cout<<"4 digits\n";
	//else
	//cout<<"5 or more digits\n";

	//===============================================================================================================================

	// nested if : Inside the body scope we can put another if --->  if { if {if .. else } }
	//                                                         --->  if .. else { if .. else {if .. else } }
	//cout<<"Enter salary: ";
	//int salary;
	//cin>>salary;

	//if (salary < 1000)
	//{
	//cout<<"Enter age: ";
	//int age;
	//cin>>age;

	//if (age < 22)
	//cout<<"You are still young.";

	//else
	//cout<<"now you are idiot! ";
	//}
	//else
	//cout<<"you are rich\n";

	//cout<<age; 	---> NOT visible outside scope

	//===============================================================================================================================

	// Summary #1 : if statement is responsible for making decisions and it has 3 styles

	/*

	 1- if(condition)
	 statement ;

	 2- if (condition)
	 {
	 statement 1 ;
	 statement 2 ;
	 .
	 .
	 .
	 statement n;
	 }

	 3- if(condition)
	 { Body }
	 else if
	 { Body }
	 .
	 .
	 .
	 else
	 { Body }

	 4- if (condition)
	 {

	 Nested If

	 }



	 * */

	// Summary #2 : If statement with initializer : New C++17 syntax change

	// ---> if(condition) to  ---> if(initialize ; condition)

	//	int x = 11;

	// if without initializer
	//if (x % 2 == 1)
	//cout << x << " is odd\n";
	//else if (x % 2 == 0)
	//cout << x << " is even\n";
	//cout << x << " is visible here but no need\n";  // we can use x outside the if else block

	// if with initializer
	//if (int y = 10; y % 2 == 1)
	//cout << y << " is odd\n";
	//else if (y % 2 == 0)
	//cout << y << " is even\n";
	//cout<<y;   --->  error!  ---> here we can't use y because y visible only in if-else block


	/*Quiz 7

	 //1-

	 //2 conditions will be valid
	 //int val { 5 };

	 //if (val < 10)
	 //cout<<1;           // ---> prints 1
	 //if (val < 20)
	 //cout << 2;         // ---> prints 2
	 //else
	 //cout << 3;

	 //2-
	 //int val { 25 };

	 //if (val < 10);  //  ---> there is a semicolon ; so one
	 //cout << 1;
	 //if (val < 20)
	 //cout << 2;
	 //else
	 //cout << 3;

	 //3-
	 //int val { 5 };

	 //if (val < 10)
	 //cout << 1;
	 //cout << 2;    //---> this line is not under the if statements so we need to put them in {}

	 //4-

	 //in this part of code any value you will assign to variable val the condition will be true and prints 1bye
	 //int val { -5 };
	 //cin>>val;

	 //if (val)
	 //cout << 1;

	 //cout<<"bye\n";

	 //in this part of code you must assign 5 to variable val so that the condition be true and prints 1bye
	 //int val { -5 };
	 //cin>>val;

	 //if (val == 5)   //---> if any other value assigned the condition is false and prints only bye
	 //cout << 1;

	 //cout<<"bye\n";

	 //5-
	 //if (true)
	 //{
	 //{
	 //int x  = 0;
	 //scope of x
	 //}

	 //x++; ---> x can't be used in this scope. You can use it inside {} not outside it

	 //}
	 //cout<<"bye\n";

	 //6-
	 //int t = 2*3 - 6;

	 //		//if (t = 0)  //--->t = 0 is assignment. One need to use t ==0 for comparison. As t assigned to 0, it became if(false)
	 //cout<<"Yes\n";
	 //else
	 //cout<<"Ooh\n";

	 //7-
	 //int salary = 500;

	 //if (salary < 1000)


	 //salary += 5000;  // now salary = 5500   ---> and the compiler continue from this value of salary variable

	 //if (salary >= 1000 && salary < 20000)  // (5500 > 1000 && 5500 < 20000) ---> ( true && true ) ---> if (true)
	 //salary += 6000;   // salary = 5500+6000 = 11500

	 //else
	 //salary -= 10000;  //Discard

	 //cout<<salary;*/

//************************************************************ Selection Practice ************************************************************
	//Simple Calculator
	//Given two numbers and a sign between them which will indicate if the user
	//want the addition, subtraction, division or multiplication of these two numbers, find the value of the answer.
	// Inputs ⇒ outputs
	// 7 + 55 ⇒ 62
	// 7 * 10 ⇒ 70
	//double num1 ,num2;
	//char operation ;
	//cin>>num1>>operation>>num2;
	//if(operation=='+')
	//cout<<num1+num2;
	//else if(operation=='-')
	//cout<<num1-num2;
	//else if(operation=='*')
	//cout<<num1*num2;
	//else if(operation=='/')
	//cout<<num1/num2;
	//else
	//cout<<"this operation isn't included in the program!"<<endl;
	//===============================================================================================================================
	//Read 2 integers and print the minimum one of them
	//Inputs ⇒ outputs
	//10 20 ⇒ 10
	//70 5 ⇒ 5
	//int x,y;
	//cin>>x>>y;
	//if(x<y)
	//cout<<x;
	//else
	//cout<<y;
	//===============================================================================================================================
	//Read 3 integers and print the minimum one of them
	// Inputs
	// 10 20 30 ⇒ 10
	// 70 5 15 ⇒ 5
	//int x,y,z;
	//cin>>x>>y>>z;
	// first solution
	//if(x<y && x<z)
	//cout<<x;
	//else if(y<x && y<z)
	//cout<<y;
	//else
	//cout<<z;
	//Default Solution 1
	//if (x < y)
	//{
	// Then either num1 or num3 is the answer
	//	if (x < z)
	//	cout << x << "\n";
	//else
	//cout << z << "\n";
	//}
	//else	// Then either num2 or num3 is the answer
	//{
	//if (y <z )
	//cout << y << "\n";
	//else
	//cout << z << "\n";
	//}
	// Default Solution 2
	//int temp =x ;
	//if(temp>y)
	//temp=y;
	//if(temp>z)
	//temp=z;
	//cout<<temp;
	//===============================================================================================================================
	//Read an integer N, then do the following
	//If the number is even: print last digit of it
	//If the number is odd: do following:
	// If number < 1000, print last 2 digits
	// If number > 1000 and number < 1000000, print last 4 digits
	// Otherwise, print its negative value
	// 234 ⇒ even ⇒ 4
	// 157 ⇒ 57
	// 567169 ⇒ 7169
	//1000001 ⇒ -1000001
	//	int num;
	//cin>>num;
	//if(num % 2 == 0)
	//cout<<num % 10;
	//else if (num % 2 != 0)
//	{
	//  if(num<1000)
	//   cout<<num%100;
	//else if(num>1000 && num <1000000)
	//  cout<<num % 10000;
	//else
	//  cout<<-num;
	//}
	//===============================================================================================================================
	//read an integer and do the following:
	// If number < 10000, say this is a small number
	// Otherwise Sum the last 3 digits of the number
	// If the sum is odd, say this is a great number
	// Otherwise, If sum is even:
	// If any digit of the last 3 is odd, say this is a good number
	// Otherwise, say this is a bad number
	//Test cases:
	//○ 100
	//○ 10111
	//○ 10330
	//○ 10303
	//○ 10033
	//○ 10000
	//int n;
	//cin>>n;
	//Default Solution
	//test cases :
	//○ 100     ---> output : this a small number
	//○ 10111   ---> output : this a great number
	//○ 10330   ---> output : this a good number
	//○ 10303   ---> output : this a good number
	//○ 10033   ---> output : this a good number
	//○ 10000   ---> output : this a bad number
	/* if (n < 10000)
	 cout<<"this is a small number\n";
	 else
	 {
	 int digit1 = n%10;
	 n = n/10;
	 int digit2 = n%10;
	 n = n/10;
	 int digit3 = n%10;	// old value of n gone

	 int sum = digit1+digit2+digit3;

	 if ((sum%2) != 0)	// odd
	 cout<<"this is a great number\n";
	 else
	 {
	 bool is_digit1_odd = (digit1 % 2 == 1);
	 bool is_digit2_odd = (digit2 % 2 == 1);
	 bool is_digit3_odd = (digit3 % 2 == 1);

	 if (is_digit1_odd || is_digit2_odd || is_digit3_odd)
	 cout<<"this is a good number\n";
	 else
	 cout<<"this is a bad number\n";
	 }
	 }
	 */

	//My Solution
	//test cases :
	//○ 100     ---> output : this a small number
	//○ 10111   ---> output : this a great number
	//○ 10330   ---> output : this a good number
	//○ 10303   ---> output : this a good number
	//○ 10033   ---> output : this a good number
	//○ 10000   ---> output : this a bad number
	/*	if(n<10000)
	 cout<<"this is a small number";
	 else
	 {
	 int firstDigit = n%10;
	 n/=10;
	 int secondDigit = n%100;
	 n/=10;
	 int lastDigit = n%1000;

	 int sum = firstDigit + secondDigit + lastDigit ;

	 if(sum % 2 != 0)
	 cout<<"this is a great number";

	 else if (sum % 2 == 0)
	 {

	 if(firstDigit % 2 !=0 || secondDigit % 2 !=0 || lastDigit % 2 != 0)
	 cout<<"this a good number";

	 else
	 cout<<"this is a bad number";
	 }

	 }
	 * 	if(n<10000)
	 cout<<"this is a small number";
	 else
	 {
	 int firstDigit = n%10;
	 n/=10;
	 int secondDigit = n%100;
	 n/=10;
	 int lastDigit = n%1000;

	 int sum = firstDigit + secondDigit + lastDigit ;

	 if(sum % 2 != 0)
	 cout<<"this is a great number";

	 else if (sum % 2 == 0)
	 {

	 if(firstDigit % 2 !=0 || secondDigit % 2 !=0 || lastDigit % 2 != 0)
	 cout<<"this a good number";

	 else
	 cout<<"this is a bad number";
	 }

	 }
	 * */


//***************************************************** Homework 1 : 4 easy problems ************************************************************

	/* problem #1 : Read 2 integers A, B and print based on following cases:
		○ if both are odd print their product A*B
		○ if both are even print their division A/B (assume B != 0)
		○ if the first is odd and the second is even then find their sum A+B
		○ if the first is even and the second is odd then find their subtraction A-B
	     Inputs ⇒ outputs
		  ○ 5 7 => 35
		  ○ 12 2 => 6
		  ○ 5 6 => 11
		  ○ 12 3 => 9
	 */

	//My Solution

		/*	int x ,y;
		cin>>x>>y;

		if(x%2!=0 && y%2!=0) // both odd
			cout<<x*y;
		else if (x%2==0 && y%2==0) //both even
		{
			if(y!=0)
				cout<<x/y;
		}
		else if(x%2!=0 && y%2==0) // x odd , y even
			cout<<x+y;
		else if (x%2==0 && y%2!=0) // x even , y odd
			cout<<x-y;
		else
			cout<<"not included";
		 * */

	//Default Solution

		/*	int a,b;
		cin>>a>>b;

		bool is_a_even = (a % 2 == 0);
		bool is_b_even = (b % 2 == 0);

		if (!is_a_even && !is_b_even)
			cout << a * b << "\n";
		else if (is_a_even && is_b_even)
			cout << a / b << "\n";
		else if (!is_a_even && is_b_even)
			cout << a + b << "\n";
		else
			cout << a - b << "\n";
		 * */

	//=================================================================================================================

	/* Problem #2 : Given 3 integers, sort (order) them in ascending order and print them .
	● Inputs ⇒ outputs
	○ 1 2 3 ⇒ 1 2 3
	○ 1 3 2 ⇒ 1 2 3
	○ 2 1 3 ⇒ 1 2 3
	○ 2 3 1 ⇒ 1 2 3
	○ 3 1 2 ⇒ 1 2 3
	○ 3 2 1 ⇒ 1 2 3
	*/

	//My Solution

	/*	int a,b,c ,tmp;
		cin>>a>>b>>c;

		//3 2 1
		if(b<a)
		{
			//swap a , b
			tmp =a; //  tmp=3
			a=b;    //  a=2
			b=tmp;  // b=3
		}

		// 2 3 1
		if(c<b)
		{
			//swap b , c
			tmp=b; //tmp=3
			b=c;   //b=1
			c=tmp; //c=3
		}

		 // 2 1 3
		if(b<a)
		{
			//swap b , a
			tmp=a; // tmp=2
			a=b;   // a=1
			b=tmp; //b=2
		}

		// print : 1 2 3
		cout << a<<" "<<b<<" "<<c;
	 * */

	//=================================================================================================================

	/* Problem #3 : Given 3 integers, you have to find the biggest one of them which is < 100.
	○ Print -1 if no such number
	● Inputs
	○ 22 90 115 ⇒ 90
	■ Here [20 90] are only < 100. Maximum (20, 90) = 90
	○ 200 300 400 ⇒ -1
	■ All of them are > 100, so no answer
	○ 50 100 150 ⇒ 50
	■ Only 50 is < 100.
	○ 10 30 20 ⇒ 30
	■ The 3 numbers < 100, so their max is 30*/

	//Default Solution 1 : // Assume all integers are >= 0 ---> this code is not valid for negative values ---> because result = -1
		/*
		int a{0},b{0},c{0} ,result{-1};
		cin>>a>>b>>c;

		if(a<100 && a>result)
			result=a;

		if(b<100 && b>result)
			result=b;

		if(c<100 && c>result)
			result=c;

		cout<<result;
		*/

	//Default Solution2 : preffered ---> this code is valid for negative values ---> test case : -20 -10 -30
		/*
		int a, b, c;
			cin >> a >> b >> c;

			int res = -1;

			// The next 3 if conditions: let's try to initalize res correctly
			if (a < 100)
				res = a;

			if (b < 100)
				res = b;

			if (c < 100)
				res = c;

			// The next 3 if conditions: let's get the valid max
			if (a < 100 && a > res)
				res = a;

			if (b < 100 && b > res)
				res = b;

			if (c < 100 && c > res)
				res = c;

			cout<<res<<"\n";
		*/

	//=================================================================================================================

	/* Problem#4 : Write a program that reads number X, then other 5 numbers. Print 2 values:
	○ How many numbers <= X
	○ How many numbers > X
	○ Any relation between these 2 outputs?
	● Inputs
	○ 10 300 1 5 100 200
	○ Output: 2 3
	○ Explanation
	○ 2 numbers (1, 5) are <= 10
	○ 3 numbers (100, 200, 300) are > 10
	*/

	/*
	//Default Solution  : little tricky
		// 10 300 1 5 100 200

		int x, a1, a2, a3, a4, a5;

			cin >> x >> a1 >> a2 >> a3 >> a4 >> a5;

			int count = 0;

			count += (a1 <= x);   // a1=300 ---> (a1 <= 10) = 0 ---> count = 0+0=0
			count += (a2 <= x);   // a1=1 ---> (a1 <= 10) = 1 ---> count = 0+1=1
			count += (a3 <= x);   // a1=5 ---> (a1 <= 10) = 1 ---> count = 1+1=2
			count += (a4 <= x);   // a1=100 ---> (a1 <= 10) = 0 ---> count = 0+0=0
			count += (a5 <= x);   // a1=200 ---> (a1 <= 10) = 0 ---> count = 0+0=0

			cout << count << " " << 5 - count << "\n";  // 2  3
	*/


//***************************************************** Homework 2 : 2 medium problems ************************************************************

	/*Read 10 integers, find which of them has the biggest value and print it.
		● Inputs
		○ 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
	*/

	//My Solution : negative numbers not allowed in this code
		/*
		int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
		cin>>n1>>n2>>n3>>n4>>n5>>n6>>n7>>n8>>n9>>n10;

		int tmp;

		if(n1>tmp)
			tmp=n1;
		if(n2>tmp)
			tmp=n2;
		if(n3>tmp)
			tmp=n3;
		if(n4>tmp)
			tmp=n4;
		if(n5>tmp)
			tmp=n5;
		if(n6>tmp)
			tmp=n6;
		if(n7>tmp)
			tmp=n7;
		if(n8>tmp)
			tmp=n8;
		if(n9>tmp)
			tmp=n9;
		if(n10>tmp)
			tmp=n10;

		cout<<tmp;
	*/

//		int cnt, result, num;
//			cin>>cnt;
//			cin>>result;	// First number
//			cnt -= 1;
//
//			// Read  times and maximize
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
//			if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

//			cout<<result;


//***************************************************** Homework 3 : 3 hard problems ************************************************************



	return 0;
}
