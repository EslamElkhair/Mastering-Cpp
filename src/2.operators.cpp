//============================================================================
// Name        : Operator.cpp
// Author      : EslamElkhair
// Created on  : Feb 18, 2022
// Version     : 0.0
// Copyright   : © 2021Elkhair's
// Description : operators in C++
//============================================================================
#include <iostream>
using namespace std;

int main_2() {

//****************************************** Binary & Unary operators ******************************************

//		Binary Operator  : needs two operands ---> arithmetic operators ( + - * / % )

//		int x {6}, y {3};

//		cout << x + y << "\n";			// 9
//		cout << x + 2 * y - 1 << "\n";	// 11
//		cout << x / y << "\n";			// 2
//
//		int z1 = (x + y) / 3 / 3;		// 1
//		cout << z1 << "\n";

// Unary operators  : needs only one operand   --->  logical operators ( -x !x )

//	int x { 7 };
//	int y { -x };	// -7
//	cout<<x<<y<<endl;

//	bool male { true };
//	bool female { !male }; // False
//	cout<<male<<female<<endl;

//			 1 0
//			cout << (!0) <<" "<<(!1);

//****************************************** Prefix & Postfix operators ******************************************

//	int a, b;

	//~~~~~~~~~~~~~~~~~~~~~~Increment~~~~~~~~~~~~~~~~~~~~~~~~

//	++a: prefix increment -> increment then assign

//	a = 10;
//	b = ++a;
//	cout<<a<<" "<<b<<"\n";	// 11 11
//
//	//Now, a = 11;
//	cout<<++a<<"\n";	// 12

// a++: postfix increment: assign then increment
//	a = 10;
//	b = a++;
//	cout<<a<<" "<<b<<"\n";	// 11 10

//	a = 10;
//	cout<<a++<<"\n";	// 10

//	a = 10;
//	cout<<(a++)<<"\n";	// 10

//a = 10;
//cout<<a++ + ++a<<"\n";	// undefined behavior

//	a = 5, b = 10;
//	cout << a + 5 + b << endl;  //20
//	cout << ++a + 5 + b++ << endl; // 6 + 5 + 10

//~~~~~~~~~~~~~~~~~~~~~~Decrement~~~~~~~~~~~~~~~~~~~~~~~~

// --a: prefix decrement: decrement then assign
//a = 10;
//b = --a;
//cout<<a<<" "<<b<<"\n";	// 9 9

//a = 10;
//cout<<--a<<"\n";	// 9

// a--: postfix decrement: assign then decrement
//	a = 10;
//	b = a--;
//	cout<<a<<" "<<b<<"\n";	// 9 10

//a = 10;
//cout<<a--<<"\n";	// 10

//a = 10;
//cout<<(a--)<<"\n";	// 10

//a = 10;
//cout<<a-- + --a<<"\n";	// undefined behavior    --->  10 + 8

//****************************************** Assignment operator ******************************************

//~~~~~~~~~~~~~~~~~~~~~~Assignment~~~~~~~~~~~~~~~~~~~~~~~~
//	int x;
//	x = 2 ; //assogns 2 to x variable
//
//
////~~~~~~~~~~~~~~~~~~~~~~Compound Assignment~~~~~~~~~~~~~~~~~~~~~~~~
//
//	int num {5};
//
//	num = num + 1;
//	cout<<"num1 "<<num<<"\n";	// 6
//
//	num += 1;	// same as num = num+1
//	cout<<"num1 "<<num<<"\n";	// 7
//
//	num *= 2;	// same as num = num * 2
//	cout<<"num1 "<<num<<"\n";	// 14
//
//	num = num - (-2);
//	cout<<"num1 "<<num<<"\n";	// 16
//
//	num -= 10;	// num = num - 10
//	num /= 2;	// num = num - 2
//

	/* Quiz 5

	 //bool is_valid_file {false};
	 //cout<<!is_valid_file;                   // logical opertor not x =  true  --> !x = false

	 //int a = 0, b = 1;
	 //a = ++b;
	 //++b = a;
	 //a = b++;
	 //b++ = a;    --->  error is here

	 //	int a = 0;
	 //	cout<<(a++, ++a, a++, ++a, a++)<<"\n";     --->  4

	 //int a = 2;
	 //a *= 3;   //a=6
	 //int b = 1;
	 //b += a;   // b=7
	 //a += b;   // a=6+7=13
	 //cout << a + b; // 7+13=20

	 //int a = 2;
	 //    a *= 3;  // 6
	 //int b = 1;
	 //b -= b; //0
	 //a /= b; // 6/0
	 //cout << a + b; // 6/0 + 0

	 //	int b = 10;
	 //		int a = -2 - (-5) - --b;
	 //	cout << a;

	 //	float x = 4;
	 //	x += x * 2 + 1; //x=x+(x*2+1)
	 //cout << x /3; */

//****************************************** Relational operators *********************************************
//relational operators are mainly user for comparisons as shown below :
//relational operators on the numbers
	//cout << (3 > 5) << "\n";   // greater than
	//cout << (3 < 5) << "\n";  // less than
	//cout << (3 == 5) << "\n"; // equal
	//cout << (3 >= 5) << "\n";// greater than or equal
	//cout << (3 >= 3) << "\n";//
	//cout << (3 == 3) << "\n";//
	//cout << (3 > 1) << "\n";//
	//cout << (3 != 4) << "\n";// not equal
	//cout << (3 != 3) << "\n";//
//relational operators on variables
	//int x, y;
	//x = 3, y = 5;
	//cout << (x > y) << "\n";  //false
	//cout << (x < y) << "\n";  //true
	//cout << (x == y) << "\n"; //false
	//cout << (x >= y) << "\n"; //false
//relational operators on bool variables
	//int x, y;
	//x = 3, y = 5;
	//bool result = (x > y);
	//cout << result << "\n";
	//result = (x < y);
	//cout << result << "\n";
	//cout << !result << "\n";   // not operator !
	//cout << !(x < y) << "\n";
// relational operators used in comparing strings
	//string name1 { "ali" }, name2 { "ali mostafa" };
	//string name3 {"ziad"}, name4 {"ali"}, name5 {"ALI"};
	/*
	 - Upper letters are smaller than small letters
	 - A < a
	 - A < z
	 - Z < a
	 - loVE < love       (as V < v)
	 - loVe < long       (as V < n

	 * */
	//cout<<(name1 < name2) <<"\n";  // 1
	//cout<<(name1 > name3) <<"\n";  // 0
	//cout<<(name1 != name4) <<"\n"; // 0
	//cout<<(name1 == name4) <<"\n"; // 1
	//cout<<(name1 == name5) <<"\n";// 0
	//cout<<(name1 > name5) <<"\n"; // 1
//	relational operators used in double comparisons
//	double num1 { 3.0 / 7.0 };
//	double num2 { 1 + 3.0 / 7.0 - 1 };
////
////	//0.428571 0.428571 0 SURPRISE SOMETIMES not 1
////	cout<<num1<<" "<<num2<<" "<<(num1 == num2)<<"\n";
//
//	num1 = 5.0, num2 = 4.99999999999999999;
//
//	//5 5 1 SURPRISE SOMETIMES not 0
//	cout<<num1<<" "<<num2<<" "<<(num1 == num2)<<"\n";
	// Hint ->  Never compare doubles for equality (double == double) directly
//****************************************** Logical operators ***********************************************
// truth table
	//● All conditions are ANDed   --->  True IF all ANDed conditions are true
	//● All conditions are ORed    --->  True if any condition is true. False if all are false
	//● Mixed ORs and ANDs         --->  Find each subgroup of ANDs and evaluate first  --->  Do ORing for the remaining
// logical operators in c++  --->    AND && , OR ||
	//int age {30}, salary {7000};
	//bool result = (age > 25) && (salary < 8000);
	//cout<<result<<"\n";      // 1
	//cout<<(  (age > 25) && (salary > 9000) )<<"\n"; //0
	//cout<<(  (age > 35) || (salary < 8500) )<<"\n"; //1
	//cout<<(  (age > 35) || (salary > 9000) )<<"\n"; //0
// Mixing logical operators AND , OR
	//	int age {30}, salary {7000}, weight {110};
	//cout<<(  (age > 25) && (salary < 8000) && (weight < 150) )<<"\n"; // 1
	//cout<<(  (age > 25) && (salary < 8000) && (weight > 200) )<<"\n"; // 0
	//cout<<(  (age > 35) || (salary > 6000) || (weight > 200) )<<"\n"; // 1
	//cout<<(  (age > 35) && (salary > 6000) || (weight > 200) )<<"\n"; // 0
	//cout<<(  (age > 20) && (salary > 6000) || (weight > 200) )<<"\n"; // 1
//Short-Circuit Evaluation
	//---> The rule is simple: if some sub-expression doesn't affect the final result, it might be discarded.
	//--->   T || T && (F || (T && T)) || T ⇒ (T && T) --> T
	//	int x { 10 };
	// (x+= 50 > 10) is discarded
	//x < 100 || (x+= 50 > 10);
	// (++x > 10) is discarded
	//	x == 20 && (++x > 50);
	// (++x > 10) is discarded, but (x > 0) eval
	//		(x == 20) && (++x > 50) || (x > 0);
	// X still 10
	// All evaluated
	//			(x == 10) && ((++x > 50) || (x > 0));
	// X now 11
	/* Quiz 6
	 // #1
	 //int x = 3;
	 //int y = 4;
	 //x += (++y += 2);  // x=3+7=10
	 //cout << x;
	 //#2
	 //int x = 10;
	 //int y = 12;
	 //int w = 5;
	 //int z = 1;
	 //int r = ++x - y / (z + w--); // 11-12/6=11-2=9
	 //cout << r;
	 //#3
	 //int x = 1;
	 //int y = 2;
	 //int w = 3;
	 //int z = 4;
	 //int a = 1, b = 2, c = 3, d = 4, e = 2;
	 //int r = (a + (b - (d * e))) / (a + ++c) + ( (1+((x+y)*2)) * z); //
	 //cout<<r;
	 //#4
	 // int a { 2 }, b { 4 }, c { 6 };
	 //bool x { 3 * a == c }; // true
	 //bool y { b <= c };     // true
	 //bool z { a + b > c - 1 }; // true
	 //cout << x << y << z; // 111
	 //#5
	 // double x = 0.1;
	 //	cout << (x == 1 + x - 1); // true
	 //#6
	 //string a {"practice"};
	 //string b {"MAKES " "perfect"};
	 //cout<<(a < b); //0
	 //#7
	 //string a {"PRACTICE "};
	 //string b {"and practice"};
	 //cout<<(a < b);  // compilation error ---> i forget the paernthses ()
	 //#8
	 //int age {55}, weight {120};
	 //cout<<(  (age > 50) && (weight > 100) ); //1
	 //cout<<(  (age == 50) && (weight > 100) );//0
	 //cout<<(  (age > 35) || (weight < 153) );//1
	 //cout<<(  (age > 60) || (weight < 90) );//0
	 //#9
	 //int age {30}, salary {7000}, weight {110};
	 //cout<<(  (age > 40) && (salary < 7500) && (weight < 150) );//0
	 //cout<<(  (age > 25) && (salary < 8000) && (weight > 200) );//0
	 //cout<<(  (age > 35) || (salary > 60000) || (weight > 200) );//0
	 //cout<<(  (age > 35) && (salary > 6000) || (weight > 200) );//0
	 //cout<<(  (age > 40) && (salary > 6000) || (weight > 200) );//0
	 //#10
	 // int x { 20 };
	 //x < 100 || (x+= 50 > 10);  // In the first relational line, the second part is discarded so x is not changed
	 //cout<<x<<" ";
	 //(x > 10) && ((++x > 50) || (x < 0));
	 //cout<<x<<" ";
	 * */

//****************************************** Division Operator ************************************************
// Division operator / can separate the integer and fractional part
	//--->  21 / 2 = (20 + 1)/2 = 10+0.5 = 10.5 (integer part = 10, fraction part = 0.5)
// Division in C++
	//compiler execute numbers as integers  --> If both numbers are integers ---> only integer part is result , Fraction part  is ignored
//	cout << 25 / 5 << "\n"; //5
//	cout << 26 / 5 << "\n"; //5
//	cout << 27 / 5 << "\n"; //5
//	cout << 28 / 5 << "\n"; //5
//	cout << 29 / 5 << "\n"; //5
//	cout << 30 / 5 << "\n";//6
//	cout << 31 / 5 << "\n";//6
//	cout << "******\n";
////compiler execute numbers as floating point numbers ---> If any of numbers in double style, then normal math
//	cout << 25 / 5.0 << "\n"; //5
//	cout << 26 / 5.0 << "\n"; //5.2
//	cout << 27.0 / 5 << "\n"; //5.4
//	cout << 28.0 / 5.0 << "\n";//5.6
//	cout << 29.0 / 5.0 << "\n";//5.8
//	cout << 30.0 / 5.0 << "\n";//6
//	cout << 31.0 / 5 << "\n";//6.2
//-------------------------------------------
//Division by 10s in C++
	//if the number is integer
	// ---> Dividing by 10 removes last digit
	// ---> Dividing by 100 remove last 2 digits and so on
	//else if the number is double -> it keeps the normal maths and conserve the fractional part
	//int num { 12345 };
	//cout<<num/10<<"\n"; //1234
	//cout<<num/100<<"\n"; //123
	//cout<<num/1000<<"\n"; //12
	//cout<<num/10000<<"\n"; //1
	//cout<<num/100000<<"\n"; //0
	//cout<<num/1000000<<endl; //0
	//cout<<"*********\n";
	//cout<<num/10.0<<"\n"; //1234.5
	//cout<<num/100.0<<"\n"; //123.45
	//cout<<num/1000.0<<"\n"; //12.345
	//cout<<num/10000.0<<"\n"; //1.2345
	//cout<<num/100000.0<<"\n";//0.12345
//Division operator can differentiate between even and odd numbers
	//---> Even number is divisible by 2  ---> 8/2 = 4 ⇒ Even
	//---> Odd number is not divisible by 2  --- > 3/2 = 1.5 ⇒ odd
//-----------------------------------------------------
// data types conversions
	// converting double into int by removing fractional part
	// 8/3 = 2.6666666666666 ..... 6666
//	double num {8/3.0};
//	cout<<num<<"\n";  //2.66667
//
//	int res = (int)num;	// C casting (style)
//	cout<<res<<"\n"; //2
//--------------------------------------------------
	// converting char into int (the character integer value in the ASCII table )
//
//	char ch {'a'};
//	int ch_value { (int)ch };
//	cout<<ch_value<<"\n";
//	cout<<(int)'a'<<" "<<(int)'z'<<"\n";
//	cout<<(int)'A'<<" "<<(int)'Z'<<"\n"; //-> and that's why the uupercase letters < lowercase letters
//****************************************** Modulus Operator ************************************************
//All what you need to know :
	//---> Num % 2 ⇒ can tell us if number is even or odd
	//---> Num % 10 ⇒ gives us the last digit of num
	//---> Num % 100⇒ gives us the last two digits of num and so on
	//---> Num / 10 ⇒ removes the last digit of num (integer division)
	//---> r = n % k [r must be < k]
//********************************************************** HomeWork #1 : operators ******************************************************************
//problem #1 : Code Tracing
	//	int a = 0, b = 1;
	//cout<<a++<<"\n";  //  it prints 0   , but a = 1
	//cout<<++a<<"\n";  // since a = 1 then it prints  2
	//a += 2*b+1;       //a=a+2*b+1   = 2+2*1+1   = 5
	//b = ++a * 2;      // b = 6 * 2 = 12  , a = 6
	//cout<<a<<" "<<b<<"\n";  // a = 6 , b = 12
	//b = a;            // b=6  , a=6
	//a = 12 + a / 3 / 2 - 2 * 2;  // a = 12+6/3/2-2*2 = 12+1-4 = 9
	//cout<<a<<"\n";   // a=9
	//a = b; //a=6
	//a = ((12 + a) / 3 / 2 - 2) * 2; //a=(18/3/2-2)*2 =  2 <--
	//cout<<a<<"\n";  // 2
//===============================================================================================================
//problem #2 : Code Tracing
	//	int a = 1, b = 1, c;
	//	cout<<(c = a+b, a = b, b = c, // c = 2 , a=1 , b=2
	//	   c = a+b, a = b, b = c, // c=1+2=3 , a=2, b=3
	//   c = a+b, a = b, b = c, // c=2+3=5 , a=3, b=5
	// c = a+b, a = b, b = c) <<endl; // c3+5=8 , a=5, b=8  --> it prints 8
//===============================================================================================================
//problem #3 : Code Tracing
	//int a = 210;
	//a /= 2; // a=a/2 = 210/2 = 105
	//cout<<a<<"\n"; //105
	//cout<<(a /= 3)<<"\n"; // 105/3 = 35
	//cout<<(a /= 5)<<"\n"; // 35 /5 = 7
	//cout<<(a /= 7)<<"\n"; // 7/7 = 1
	//cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n"; // 5 * 8 / 5 / 8 = 1
	//a = 10;
	//cout<<a++ + 10<<"\n"; // 20 , a =11
	//cout<<++a + 10<<"\n"; // 12 + 10 = 22 ,  a =12
	//cout<<a-- + 10<<"\n"; // 12 + 10 = 22 , a = 11
	//cout<<--a + 10<<"\n"; // 10 + 10 = 20 , a = 10
	//int b = 20;
	//cout<<a++ + ++b<<"\n";	 // 10 + 21 = 31   --> Don't code this way
	//cout<<a<<"\n";  // 11
	//++a+=10;	    // 22                  -->  Don't code this way
	//cout<<a<<"\n";

//***************************************************** HomeWork #2 :  Logical Operators *********************************************************
//Problem #4 : code tracing
//	int a = 10, b = 20, c = 30, d = 40;
//	cout << (a + b == c) << "\n";  //  1
//	cout << (a + b + c >= 2 * d) << "\n"; // 0
//	cout << (a > 5 || d < 30) << "\n"; // 1
//	cout << (a > 5 && d < 30) << "\n"; // 0
//	cout << (a <= b && b <= c) << "\n";// 1
//	cout << (a > 5 && d < 30 || c - b == 10) << "\n"; // 1
//	cout << (a <= b && b <= c && c <= d) << "\n"; // 1
//	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n"; // 1
//	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n"; // 0
//	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n"; //1
//	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n";//0
//=============================================================================================================================
//Problem #5 : Write a program that reads 3 integers about the class room
	// Number of boys (nb), number of girls (ng), number of teachers (nt)
	// Prepare and print a boolean variable for these cases:
	// nb greater than 25
	// ng less than or equal to 30
	// nb > 20 and nt > 2 or ng > 30 and nt > 4
	// Either nb < 60 or ng < 70
	// Neither nb >= 60 nor ng >= 70
	// nb is 10 more students than ng
	// Difference between nb and ng is more than 10 or nt > 5
	// Either nb is 10 more students than ng or ng is 15 more students than nb


//	int nb{0} ,ng{0} ,nt{0};
//	cin >>nb>>ng>>nt;
////	nb greater than 25
//	cout << (nb > 25) << "\n";
////	 ng less than or equal to 30
//	cout << (ng <= 30) << "\n";
////	 nb > 20 and nt > 2 or ng > 30 and nt > 4
//	cout << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";
////	 Either nb < 60 or ng < 70
//	cout << (nb < 60 || ng < 70) << "\n";
////	 Neither nb >= 60 nor ng >= 70
//	cout << (  !(nb >= 60) && !(ng >= 70) ) << "\n";
////	 nb is 10 more students than ng
//	cout << (nb == ng + 10) << "\n";
////	 Difference between nb and ng is more than 10 or nt > 5
//	cout << (nb - ng > 10 || nt > 5) << "\n";
////	 Either nb is 10 more students than ng or ng is 15 more students than nb
//	cout << (nb == ng + 10 || ng == nb + 15) << "\n";
//=============================================================================================================================
	//problem #6 : For each expression Manually Simplify it step by step to finally be a T or F
	// T && T && F && T   ---> F
	// T && T && F && T || T && T ---> T
	// T && T && T && T || T && (T || F) ---> T
	// T && T && T || T && (F || (T && (T && T))) ---> T
	// T && T || T && F && T || T && T && F || (T && (T || F)) ---> T
	// T && T || T && F && T || (T && T && F || (T && (T || F))) ---> T
	// (T && T || T && F && T || T) && T && F || (T && (T || F)) ---> T
	// T && T || T && (F && T || T && T) && F || (T && (T || F)) ---> T

//********************************************** HomeWork #3 : Division and Modulus : easy  ***************************************************

	//problem #7 : Write a program that reads 5 numbers and print the following:
	//A) Their average
	//B) The sum of the first 3 numbers divided by the sum of the last 2 numbers
	//C) The average of the first 3 numbers divided by the average of the last 2 numbers.
	// Input 1 2 3 4 5
	//AVERAGE = 3
	//DIVISION1 = 0.666666667
	//DIVISION2 = 0.444444444

	//int n1{0},n2{0},n3{0},n4{0},n5{0};
	//cin>>n1>>n2>>n3>>n4>>n5;
	//double sum5{0},sum3{0},sum2{0};
	//double avg5{0},avg_3{0},avg_2{0};
	//My Solution
	//average of 5 numbers
	//sum5=n1+n2+n3+n4+n5;
	//avg5=sum5/5;
	//cout<<avg5<<endl;
	//division of first 3 by last 2
	//sum3=n1+n2+n3;
	//sum2=n4+n5;
	//cout<<sum3/sum2<<endl;
	//average of first 3 divided by average of last 2
	//avg_3=sum3/3;
	//avg_2=sum2/2;
	//cout<<avg_3/avg_2;
	//Default Solution
	//double avg1 = (n1+n2+n3+n4+n5) / 5.0;	// A
	//double sum1 = (n1+n2+n3) / (n4+n5);		// B
	//double first3_avg = (n1+n2+n3) / 3.0;
	//double last2_avg = (n4+n5) / 2.0;
	//double avg2 = first3_avg / last2_avg;	// C
	//cout<<avg1<<"\n";
	//cout<<sum1<<"\n";
	//cout<<avg2<<"\n";
	//What is the math relation between B and C?
	//cout<<sum1 * 2.0/3.0<<"\n";		// C = 2/3 B
//=============================================================================================================================
	//problem #8 : Write a program that reads 2 numbers a, b and divides them (a/b), but prints only the fraction part
	//---> Input: 201 25
	//---> Output: 0.04

	//Default Solution
	//float a{0},b{0};
	//cin>>a>>b;
	//double result = a/b;
	//cout<<result - (int)result;
//=============================================================================================================================
	//problem #9 : Write a program that reads 2 positive integers and print such reminder without using the modulus operator %
	//---> Input: 27 12
	//--->  Output: 3
	//Default Solution
	//int n, m;
	//cin >> n >> m;
	// let's try 13/5
	// 13/5 = 2  [2 complete units, each is 5]
	// 2*5 = 10  [total complete units]
	// Reminder is 13-10 = 3. This number generates the fractional part
	//int result = n - (n / m) * m;
	//cout << result << " " << n % m << "\n";

//********************************************** HomeWork #4 : Division and Modulus : medium  ***************************************************
	//problem #10 : The following code reads an integer and computes a boolean if the number is even in 3 different ways.
	//Fill in the is_even to solve the problem in 3 ways as following :
	// ---> Using only %2
	// ---> Using only /2
	// ---> Using only %10

	//Default Solution
	//int num {0};
	//cin>>num;
	// Is even using %2
	//bool is_even1 = (num % 2 == 0);

	// is even using /2
	//double by2 = (double) num / 2.0;// this is either X.0 or X.5     ---> (try 10, 11)
	//by2 = by2 - (int) by2;// Remove X. This is now either 0 (for even) or 0.5 (for odd)
	//bool is_even2 = (by2 == 0);

	// is even using %10
	//int last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8
	//bool is_even3 = (last_digit == 0) || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

	//choose only 1 cout of them
	//cout<<is_even1<<endl;
	//cout<<is_even2<<endl;
	//cout<<is_even3<<endl;
//=============================================================================================================================
	//problem #11 : Write a program that reads an integer and prints the sum of its last 3 digits.
	//Inputs ⇒ Outputs examples
	//----> 15 ⇒ 6
	//---> 125 ⇒ 8
	//---> 1000 ⇒ 0
	//---> 1001 ⇒ 1
	//---> 1234 ⇒ 9
	//---> 99999 ⇒ 27

	//int num{0};
	//cin>>num;
	//int last1=num%10;
	//num/=10;
	//int last2=num%10;
	//num/=10;
	//int last3=num%10;
	//num/=10;
	//cout<<last1+last2+last3;
//=============================================================================================================================
	//problem #12 : Write a program that reads an integer and print the 4th from the right side. If no such digit, print 0
	//---> Inputs => outputs
	// ---> 15 => 0
	// ---> 125 => 0
	// ---> 1000 => 1
	// ---> 5001 => 5
	// ---> 1234 => 1
	// ---> 654321 => 4
	// ---> 99999 => 9
	//My Solution
	//int num{0};
	//cin>>num;
	//12345
	//num/=1000; // 12345 / 1000 = 12.345
	//int _4th =num%10;//12.345 % 10 = 2
	//cout<<_4th<<endl;
	//Default Solution
	// /1000 => removes last 3 digits
	// %10 get next digit = 4th
	//	cout << (n / 1000) % 10 << "\n";

//********************************************** HomeWork #5 : Division and Modulus : Hard  ***************************************************
	//problem #13 : Write a program that reads an integer and print 100 if number is even or 7 if number is odd
	// for input 8 ⇒ 100
	// for input 133 ⇒ 7
	//int num{0};
	//cin>>num;
	//int is_even = num % 2 == 0;
	//int is_odd = 1 - is_even;
	// formula of 2 parts: only one of them will be activated
	//int result = is_even * 100 + is_odd * 7;
	//cout<<result<<"\n";
//=============================================================================================================================
	//Assume a year is 12 months, but each month is 30 days
	//That is a year has 12 * 30 = 360 days
	//Read an integer: whole number of days of someone age. Print 3 numbers as following Total years , total months , remaining days
	//--->Inputs ⇒ Outputs
	//--->360 1 0 0                each 360 days a year
	//--->30 0 1 0                 each 30 days a month
	//--->10 0 0 10                 just days infant!
	//--->391 1 1 1                391 = 360 + 30 + 1 = 1 year, 1 month, 1 day
	//--->61 0 2 1                  61 = 2*30 + 1
	//--->200 0 6 20                200 = 30*6 + 20
	//--->1000 2 9 10               1000 = 2*360 + 9*30 + 10

	//int days;
	//cin >> days;
	//int years = days / 360;
	//days = days % 360;	// now we remove # of complete years
	//int months = days / 30;
	//days = days % 30;
	//cout << years << " " << months << " " << days << "\n";

	return 0;
}

