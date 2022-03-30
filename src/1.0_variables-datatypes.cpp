
// Need more information? -->    https://github.com/EslamElkhair/Mastering-Cpp-Concepts/wiki/2.0-Variables-and-Datatypes

//============================================================================
// Author      : EslamElkhair
// Created on  : Feb 18, 2022
// Copyright   : © 2022Elkhair's
// Description : C++ Variables and datatypes
//============================================================================


#include <iostream>
using namespace std;

int main_1() {

//Datatypes : Human language vs Programming Language

//	Value              Human Language            Programming Language
//
//	52                  Number                        Integer
//	12.7                Number                        Double or Float
//	Z                   Letter                        Character
//	Computer            Word                          String
//	Male/female         status                        Boolean

//Datatypes Examples

//	double weight = -92.5;
//
//	char group = 'd';
//
//	bool is_male = true;
//	bool like_football = false;
//
//	int age = 55;
//	string name = "mostafa";
//
//	cout<<"I am "<<age<<" years old\n";
//	cout<<"My weight is "<<weight<<"\n";
//
//	cout<<"my name is "<<name
//		<<" and group "<<group<<"\n"
//		<<is_male<<" "<<like_football<<"\n";


// Datatypes has min and max values to store

//	● int: -2147483648 to 2147483647
//	● char: -128 to 127 [there was a typo]
//	● bool: 0 to 1
//	● If you tried lower value => underflow
//	● If you tried bigger value => overflow
//	○ int val = 2147483647 + 1;
//	■ We are adding 1 more than the max value!
//	■ Compiler msg: warning: integer overflow in expression


//------------------------------------------------------------------------

//Variables
	//Think of it as a box in the computer memory to store the datatype, name and value of some Data (visit the above link for more info)

//Variable Name (aka identifier)

//	● Identifier: Variable name
//	○ int sum = 10; => sum is identifier
//	● Identifier consist of: letters, digits, _
//	○ iNumber, status1, status2, mostafa_saad, _valid
//	● Can’t start with digit
//	○ 7Core [wrong]
//	● Case sensitive: sum != SUM
//	● Shouldn’t use reserved keyword
//	○ int return = 6;
//	○ Reserved words: int, float, double, return, void, if, while, break, false, bool, operator and more

//Declaring Variable

//	// int for integer
//	int age = 55;
//
//	cout<<age<<"\n";
//
//	// double used for fractions (or float)
//	double weight = 92.5;
//
//	cout<<"My weight is "<<weight<<"\n";


//Declare, Assign, Get

//	// Declare variable in memory. Garbage value
//	int number1;
//	int number2;
//
//	// Assign values (in memory(
//	number1 = 30;
//	number2 = 10;
//
//	// Get values
//	cout<<number1 + number2<<"\n";
//	cout<<number1 - number2<<"\n";
//
//	// Reassign value
//	number1 = 50;
//	cout<<"2n+1 = "<<number1 * 2 + 1<<"\n";


//Initializing Variable

//	int age1;          //uninitialized : Garbage
//	int age2 = 52;    // C-style  , popular
//	int age3 = (52);  // Constructor initialization
//	int age4 = {52};  // Modern initialization , prefered

//Reading Variables  --> cin

//	int age;
//	cout<<"Enter age: ";
//	cin>>age;
//
//	double weight;
//	cout<<"Enter weight: ";
//	cin>>weight;
//
//	char group;
//	cout<<"Enter group: ";
//	cin>>group;
//
//	string name;
//	cout<<"Enter name: ";
//	cin>>name;
//
//	cout<<"I am "<<name<<" belongs to group "<<group<<"\n";
//	cout<<"My weight "<<weight<<" and age "<<age;


//************************************************************* Variables and Datetypes problems *****************************************************************

//Problem 1 : Math operations

	// ● Write a program that reads 2 numbers and print their + - * /
	//as following
	// ○ For inputs 12 and 3
	// ● Do good testing for your code
	// ○ E.g. consider zero as first or 2nd number
	// ○ E.g. consider negative values
	// ○ E.g. even and odd values
	// ○ E.g. try the MAX of int: 2147483647

//    //input
//    double x{0},y{0};
//    cout<<"enter two numbers: ";
//    cin>>x>>y;
//
//    // output
//    cout<<x+y<<" "<<x-y<<" "<<x*y <<" "<<x/y<<"\n";

//------------------------------------------------------------------------

//Problem 2 : student grade

//	● Write a program that reads 2 students information about math exam
//	○ Read per student: name, id and grade
//	○ Then print them. See the picture
//	● Be a good software engineer
//	○ Think deeply in your selected data types
//	○ The teacher gives us this dialogue to guide us
//	○ Be careful from your assumptions?
//	■ Is exam’s grade an integer?

//	   // inputs
//	  cout << "what is student 1 name : ";
//	  string name1 = "";
//	  cin >> name1;
//	  cout << "\nhis id : ";
//	  int id1 = 0;
//	  cin >> id1;
//	  cout << "\nhis grade :";
//	  double grade1 = 0.0;
//	  cin >> grade1;
//
//	  cout << "what is student 2 name : ";
//	  string name2 = "";
//	  cin >> name2;
//	  cout << "\nhis id : ";
//	  int id2 = 0;
//	  cin >> id2;
//	  cout << "\nhis grade :";
//	  double grade2 = 0.0;
//	  cin >> grade2;
//
//	  // outputs
//	  cout << "students grades in math :\n";
//	  cout << name1 << " " << "(with id )" << id1 << " got grades: " << grade1 <<
//	    endl;
//	  cout << name2 << " " << "(with id )" << id2 << " got grades: " << grade2 <<
//	    endl;
//
//	  cout << "average grade is " << (grade1 + grade2) / 2 << endl;

//------------------------------------------------------------------------

//Problem #3: Even and Odd sum

//	Given 8 space-separated integers, find the sum of those in even places and the sum of those in odd places.
//
//	Note: Even place means the 2nd, 4th, 6th or 8th numbers, while odd places are the 1st, 3rd, 5th and 7th numbers.
//
//	Example Input:
//	11 2 7 9 12 -8 3 -1
//
//	Example Output:
//	2 33
//
//	Example Explanation:
//	2 + 9 + (-8) + (-1) = 2
//	11 + 7 + 12 + 3 = 33


//
//    int odd1 , odd2 , odd3 , odd4;
//    int even1, even2 , even3 , even4;
//
//    cin>>odd1>>even1>>odd2>>even2>>odd3>>even3>>odd4>>even4;
//
//    cout<<(odd1+odd2+odd3+odd4)<<" "<<(even1+even2+even3+even4)<<endl;

//------------------------------------------------------------------------

// Problem 4 : Trace the program and guess output:

//	int num1, num2, num3;
//
//	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n";        // 1
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";  // 2
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";  // 3
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";  // 5
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";  // 8
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 13
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 21
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 34
//	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n"; // 55

//------------------------------------------------------------------------

//Problem 5 : Swapping 2 numbers!
//	● Write a program that reads 2 variables num1 and num2
//	○ E.g. say we read num1 = 7 and num2 = 231
//	● Target: we want swap the values of Num1 and Num2?
//	○ Swap means exchange
//	○ So Num1 takes value 231 and Num2 takes value 7

//	  int num1 = 7;
//	  int num2 = 231;
//	  cout << num1 << " " << num2 << endl;
//
//	  int x;
//	  x = num2;
//	  num2 = num1;
//	  num1 = x;
//
//	  cout << num1 << " " << num2 << endl;

//------------------------------------------------------------------------

//Problem 6 : Swapping 3 numbers
//	Write a code to swap 3 numbers
//	Let say we have numbers a = 115, b = 20, c = 301
//	We wanna their final values to be: a = 20, b = 301, c = 115 a = b , b = c , c = a

//    int a = 115 , b = 20, c = 301, x;
//
//    x = a ;
//    a = b ;
//    b = c ;
//    c = x ;
//
//    cout<<a<<" "<<b <<" "<<c<<endl;

//------------------------------------------------------------------------

//Problem 7 : Print Me

//	● Write a program that reads 2 integers A, B
//	○ B is either -1 or 1
//	■ If -1, print 2*A+1
//	■ If 1, print A*A
//
//	● Hint
//	○ You need to think in a simple 1 line formula for the output

//	  int a, b;
//
//	  cin >> a >> b;
//
//	  // Let's code the 2 possible results
//	  int equ_is_1 = a * a;
//	  int equ_is_neg_1 = 2 * a + 1;
//
//	  // The trick: we want to make them in 1 equation
//	  // Where if input is: only 1 equation is computed and the second is zer0
//	  // To do so: convert -1 to 0 and 1 to 1
//	  // With simple math, we can convert [-1 1] to [0 1] range
//
//	  // value 1 for (b 1) and value 0 for (b -1)
//	  int is_1 = (b + 1) / 2;
//	  // value 1 for (b -1) and value 0 for (b 1)
//	  int is_neg_1 = 1 - is_1;
//
//	  // Either 1*something + 0*something for b = 1
//	  // Or     0*something + 1*something for b = -1
//	  cout << is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1;

//------------------------------------------------------------------------

//Problem 8 : sum numbers from 1 to N


//● Write a program that reads integer N and Print the sum from 1 to N
//○ E.g. If input N = 5, then Output is: 15
//○ Why? As 1+2+3+4+5 = 15
//○ Below table of more values
//○ 3 ⇒ 6 (1+2+3)
//○ 4 ⇒ 10 (1+2+3+4)
//○ 5 ⇒ 15 (1+2+3+4+5)
//● You need to find a simple 1 line formula to solve the problem :)
//○ Hint: Let N = 8. Write numbers from 1 to 8
//○ What is the sum of 1st and 8th number? sum of 2nd and 7th? And so on
//○ Your formula should be good for even and odd N. Be careful programmer!
//○ What is the maximum N after it overflow occurs? Recall int max is 2147483647

    // 1 2 3 4 5 6 7 8

//    int n;
//    cin>>n;
//
//    cout<<(n * (n+1) / 2 )<<endl;

	return 0;
}
