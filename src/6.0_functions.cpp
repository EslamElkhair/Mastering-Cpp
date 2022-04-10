/*
 * functions.cpp
 *
 *  Created on: Mar 30, 2022
 *      Author: eslamelkhair
 *      // Copyright   : @ELkhair's
 // Description : Functions and Recursive Functions in C++, Ansi-style
 */

#include <iostream>
#include<cmath>

using namespace std;

//function : sum 1_to_n
/*
 int sum1_to_n(int n)
 {
 int sum =0;

 for(int i =0;i<=n;i++)
 sum+=i;


 return sum;
 }*/
//_______________________________________________________
//function : absolute value
/*
 int absolute(int n)
 {
 if(n>=0)
 return n;
 return -n;
 }
 */

//function : maximum of 2 numbers
/*int max_of_two(int x , int y )
 {
 if(x>=y)
 return x;

 return y;
 }*/

//Function: Max of absolute 2 numbers
/*int max_of_two_abs(int x, int y)
 {
 x = absolute(x);
 y = absolute(y);

 return max_of_two(x,y);
 }*/
//_______________________________________________________
/*
 //sometimes we don't need to send parameters to the function , we want it just to return a specefic value
 int lucky_number() {
 return 13;
 }

 //we can name a function called main2 , but the compiler will execute the original main
 int main2a() {
 return 0;
 }

 //sometimes we don't need to return any values , we want to just print anything --> so we use void as a function data type
 void print_sum(int a, int b) {
 cout << a + b << "\n";
 }*/
//_______________________________________________________
/*
 //Function with default values : P has default value 3 --> Means if u did not send it, 3 will be used
 int our_pow(int n, int p = 3)
 {
 int result = 1;

 while (p--)
 result *= n;

 return result;
 }*/
//_______________________________________________________
//Function overloading : We can define several functions with SAME name BUT different parameters
/*int add(int a, int b) {
 return a + b;
 }

 //SAME number of parameters BUT different parameters data type
 double add(double a, double b) {
 return a + b;
 }

 //SAME data types BUT different parameters number
 int add(int a, int b, int c) {
 return a + b + c;
 }*/
//_______________________________________________________
//Quiz 1 : 1
/*
 int f(int n) {
 int res = 1;
 while (n--)
 res *= 2;
 return res;
 }
 */

//Quiz 1 : 2
/*
 int F(int n)  //13
 {
 int res = 0;
 for (int i = 0; i < n; ++i)
 res *= i + 3;
 return res;
 }
 */

//Quiz 1 : 3
/*int a() {
 return 10;
 }
 int b(int x = 5) {
 return 2 * x + a();
 }
 void c() {
 cout << b(3);
 }*/

//Quiz 1 : 4
/*
 * f2 doesn't know what is f1
 *
 int f2() {
 return 3 + f1();
 }
 int f1() {
 return 2 * f2();
 }
 */

//Quiz 1 : 5
//The code runs but infinity processing! Be careful from circular calls
/*
 int f1();
 int f2() {
 return 3 + f1();
 }
 int f1() {
 return 2 * f2();
 }
 */

//Quiz 1 : 6
// There is no function overloading Why ?
/*
 * Actually we can split the body this way.
 * The first is called function declaration (no body) and the second is function definition (has a body)
 */
/*int hello(int x, int y);

 int hello(int x, int y) {
 return x + y;
 }*/

//Quiz 1 : 7
/*
 * char internally is an integer . The value of 'A' is 65 ,so 65 * 2 = 130
 */
/*int ASCII(int x) {
 return 2 * x;
 }*/

//Quiz 1 : 8
//the return type is not a way to differentiate the same function name
//error
/*
 * int e() {
 return 1;
 }
 double e() {
 return 2.5;
 }
 */

//Quiz 1 : 9
/*bool test_me(string str) {
 for (int i = 0; i < (int) str.size(); ++i)
 if ('A' > str[i] || str[i] > 'Z')
 return false;
 return true;
 }

 // Quiz 1 : 10
 int g { };

 void f() {
 int l { };
 static int s { };

 l += 1, s += 2, g += 3;

 cout << l << " " << s << " " << g << " ";
 }*/

//_______________________________________________________
//Parameter VS Argument
//A parameter is the variable which is part of  declaration
//a, b are parameters. 10 is default argument for b
/*void print(int a, int b = 10) {
 cout << a << " " << b << "\n";
 }*/
//_______________________________________________________
//Pass by value VS Pass by reference
//If you want the function change memory content of your variable, use &
// Otherwise it is copied
/*
 void change(int a, int &b) {
 a++;
 b++;
 }
 */
/*
 void read(int x, int &y, string &str) {
 cin >> x >> y >> str;
 }
 */
//_______________________________________________________
// array Pass by Reference by Default
/*int sum_array(int arr[], int len) {
 int sum = 0;
 for (int i = 0; i < len; ++i)
 sum += arr[i];
 return sum;
 }*/
//_______________________________________________________
//Function: Is lower string?
/*bool is_lower(string str) {
 for (int i = 0; i < (int) str.size(); ++i) {
 bool lower = 'a' <= str[i] && str[i] <= 'z';

 if (!lower)
 return false;
 }
 return true;
 }*/
//_______________________________________________________
//Function: Is lower string? using Built-in function
/*bool is_loweR(const string &str) {
 for (int i = 0; i < (int) str.size(); ++i)
 if (!islower(str[i]))
 return false;

 return true;

 }*/
//_______________________________________________________
//Global Variables: are defined and declared outside of all functions and we can use it inside main and any other function
int global_var { 9 };

int g2;		// global : initialized to 0 by default
int g3 { };	// global : initialized to 0 by default

int g4 = ++global_var;

int global() {
	return global_var;
}

//Local Variable :
void fun() {
	int i1 { 0 };			// local variable
	int i2;					// local: garbage

	static int si { 0 };	// static variable

	++i1, ++si;

	cout << i2 << " " << si << "\n";
}

//*************************************************************** Functions Homework ***********************************************************

//Homework 1: Max of 6 numbers
/*
 ● Write a function that reads 6 numbers and compute their maximum. Create
 the following functions
 ○ max(int a, int b, int c)
 ○ max(int a, int b, int c, int d)
 ○ max(int a, int b, int c, int d, int e)
 ○ max(int a, int b, int c, int d, int e, int f)
 */

/*int max(int a, int b, int c) {
 return max(max(a, b), c);
 }

 int max(int a, int b, int c, int d) {
 return max(max(a, b, c), d);
 }

 int max(int a, int b, int c, int d, int e) {
 return max(max(a, b, c, d), e);
 }

 int max(int a, int b, int c, int d, int e, int f) {
 return max(max(a, b, c, d, e), f);
 }*/
//__________________________________________________________________________________________________
//Problem 2: Reverse a string
/*
 ● Develop a function that do reverse for the string. Function is:
 ● string reverse_str(const string & str);
 ○ Don’t try to change str content or you will get compilation error
 */

/*string reverse_str(const string & str)
 {
 string ret = str;
 int start = 0, end = (int)str.size()-1;
 while(start < end) {
 // swap
 char tmp = ret[end];
 ret[end] = ret[start];
 ret[start] = tmp;

 start++, end--;
 }
 */
//__________________________________________________________________________________________________
//Problem 3: Calculator
/*
 ● Develop a function that allows user to do the following (menu options):
 ○ Add 2 numbers
 ○ Subtract 2 numbers
 ○ Multiply 2 numbers
 ○ Divide 2 numbers
 ○ End the program
 ● Consider the following functions:
 ○ Function to read 2 double numbers - by reference
 ○ 4 functions, one for each operation. Don’t divide by zero!
 ○ Function to display the menu of the 5 options - read number and return it.
 ■ User should enter number from 1 to 5. If not, display error message
 ■ If exit, end the program by printing how many operations were done
 */
/*

int menu() {
	int choice = -1;
	while (choice == -1) {

		cout << "○ Add 2 numbers\n"
				"○ Subtract 2 numbers\n"
				"○ Multiply 2 numbers\n"
				"○ Divide 2 numbers\n"
				"○ End the program\n"
				"  Enter choice from [1:5] :";

		cin >> choice;

		if (!(choice >= 1 && choice <= 5)) {
			cout << "invalid choice. try again\n\n";
			return menu();
		}
	}

	return choice;

}

void read(double &a, double &b) {
	cout << "Enter two numbers:";
	cin >> a >> b;
}

void add(double a, double b) {
	cout<< a+b<<"\n";
}
void sub(double a, double b) {
	cout<< a-b<<"\n";
}
void mul(double a, double b) {
	cout<< a*b<<"\n";
}
void div(double a, double b) {

	if (b != 0)
		cout<<a/b<<"\n";
	else {
		cout << "dividing by zero not allowed!\n";
	}
}

void calculator() {

	double a = 0, b = 0;
	int total_operations = 0;

	while (true) {
		int choice = menu();

		if (choice == 5)
			break;

		read(a, b);

		if (choice == 1)
			add(a, b);
		else if (choice == 2)
			sub(a, b);
		else if (choice == 3)
		mul(a, b);
		else if (choice == 4)
			div(a, b);

		total_operations++;

	}
	cout << "total operations = " << total_operations << "\n";

}
*/

//__________________________________________________________________________________________________

//Problem 4: Is Palindrome Array
//Read N, then N integers for an Array. Call a function with the array to check if the array is palindrome or not

//int read_array(int arr[]) {
//	int len;
//	cin >> len;
//
//	for (int i = 0; i < len; i++)
//		cin >> arr[i];
//
//	return len;
//}

//int is_palindrome(int arr[] ,int n)
//{
//	// We need to compare the value at the left half to those in the right half
//	// The value at index (0) should be compared to the value at index (N-1)
//	// Then the value at index (1) should be compared to the value at index (N-2)
//	// So, clearly we need to increment the left index and decrement the right one
//	// On reaching the index N/2, we are sure that we have compared all the elements
//	// of both sides so we don't need to do anything and the array is palindrome
//
//	for (int i = 0; i < n/ 2; i++)
//	{
//		if (arr[i] != arr[n - 1 - i])
//			return false;
//
//		return true;
//	}
//}

//__________________________________________________________________________________________________

//Problem 5: Set powers
/*
● Implement this function
● void set_powers(int arr[], int len = 5, int m = 2)
● This function will fill the array of len as following:
○ The i-th position: m^i, e.g. m * m * m … i times
○ E.g. for len = 6, m = 2 ⇒ 1 2 4 8 16 32
○ E.g. for len = 4, m = 3 ⇒ 1 3 9 27
● After a return from call: print the array
○ Try it with different default value scenarios
*/

/*
void set_powers(int arr[], int len = 5, int m = 2) {
	arr[0] = 1;

	for (int i = 1; i < len; i++)
		arr[i] = arr[i - 1] * m;
}
*/
//__________________________________________________________________________________________________

//Homework 6: Get nth-prime
/*

● Implement the following 2 functions:
● bool is_prime(int num);
○ Return true if number is prime
● Int nth_prime(int n);
○ Return the n-th prime number. It should use is_prime function
○ E.g nth_prime(6) = 13
■ Recall: 2, 3, 5, 7, 11, 13, 17, 19
Homework 6: Get nth-prime
*/

/*

bool is_prime(int num) {

	if (num <= 1)
		return false;

	for (int i = 2; i < num; i++)
		if (num % 2 == 0)
			return false;

	return true;

}

int nth_prime(int n) {

	int i = 2;

	while (is_prime(i)) {
		n--;
		if (n == 0)
			return i;
		i++;
	}

	return -1;
}
*/
//__________________________________________________________________________________________________



//************************************************** Recursive Functions *****************************************************

//Recursion
//● A recursive function: Function that calls itself with smaller input (supproblem) till reaches baseline. What is that mean ?


// Problem and subproblems
//● Sometimes we can concore a problem to set of sub-problems
//● E.g. Print all prime numbers that are palindrome and < 1000000
//● We have 2 sub-problems
//○ bool is_prime(int n)
//○ bool is_palindrome(int n)
//● Now we iterate from 1 to 1000000
//○ If number satisfy the 2 conditions: count it
//● What if the sub-problem is same type as the problem? Then we use Recursion!

// Example of Recursion : Factorial

/*
int factorial(int n) {
	int res = 1;

	for (int i = 2; i <= n; ++i)
		res *= i;

	return res;
}
*/

//Recall the factorial
/*
● factorial(6) = 1 * 2 * 3 * 4 * 5 * 6
● factorial(5) = 1 * 2 * 3 * 4 * 5
● factorial(4) = 1 * 2 * 3 * 4
● factorial(3) = 1 * 2 * 3
● factorial(2) = 1 * 2
● factorial(1) = 1
● Think for a few minutes:
○ What is relation between factorial(6) and factorial(5)?
○ Can you know factorial(6) if you know factorial(5)?*/

//Factorial: Problem and subproblem
/*
● Let say we want to solve factorial(6)
○ This is our problem
○ We can solve it directly with 1*2*3*4*5*6
● Another thinking is: can we think of it is
○ What is factorial(5)? A simpler subproblem
○ Would it help if u know its answer? Yes: 6 * factorial(5) = factorial 6
○ Same logic for factorial(5). It is 5 * factorial(4).
● Going for ever in smaller sub-problems? No
○ There must be a case where no more subproblems. We call it basecase
○ Factorial 1 = 1
*/

/*int factorial1() {
	return 1;	// base case. No subproblems
}

int factorial2() {
	return factorial1() * 2;
}

int factorial3() {
	return factorial2() * 3;
}

int factorial4() {
	return factorial3() * 4;
}

int factorial5() {
	return factorial4() * 5;
}

int factorial6() {
	return factorial5() * 6;
}*/

//○ Can you know make one function to get factorial(6)?

//Factorial: A recursive function
/*

int factorial(int n) {
	cout<<"Function Call: factorial: n="<<n<<"\n";

	if (n == 1)
		return 1;
	return factorial(n-1) * n;
}
*/

//Lets trace the above code
/*
● Call Factorial(6)
○ If 6 == 1? False
○ Call Factorial (5) and multiply results with 6
■ If 5 == 1? False
■ Call Factorial (4) and multiply results with 5
● If 4 == 1? False
● Call Factorial (3) and multiply results with 4
○ If 3 == 1? False
○ Call Factorial (2) and multiply results with 3
■ If 2 == 1? False
■ Call Factorial (1) and multiply results with 2
● If 1 == 1? True
○ Return 1
*/


//************************************************** Recursive Functions Practice *****************************************************

//Practice 1 : print triangle
/*
 *****
 ****
 ***
 **
 *
 */

/*
void print_traingle(int levels) {
	if (levels == 0)
		return;

	for (int i = 0; i < levels; i++)
		cout << "*";

	cout << endl;

	print_traingle(levels - 1);
}
*/

//___________________________________________________________________

//Practice 2 : print triangle v2
/*
 *
 **
 ***
 ****
 *****
 */

/*
void print_traingle_reversed(int levels) {
	if (levels == 0)
		return;

	print_traingle_reversed(levels - 1);

	for (int i = 0; i < levels; i++)
		cout << "*";

	cout << endl;
}
*/

//___________________________________________________________________

//Practice 3 : Print 3n+1 Sequence
/*
 * ● A 3n+1 goes as following
 ● Start from a number n
 ● If this number is even, next number in sequence is n / 2
 ● If this number is odd, next number in sequence is 3 * n + 1
 ● If this number is 1 = end of sequence
 ● E.g. Start from 5: 5 16 8 4 2 1
 ● E.g. Start from 6: 6 3 10 5 16 8 4 2 1
 ● E.g. Start from 9: 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
 ● Write a recursive function to print it
 *
 */

/*
void print_3n_plus_1(int n) {

	cout << n << " ";

	if (n == 1)
		return;

	if (n % 2 == 0)
		print_3n_plus_1(n / 2);
	else
		print_3n_plus_1(3 * n + 1);

}
*/

//************************************************** Recursive Functions Homework 1 *****************************************************

//Homework 1: Length of 3n+1
/*
 ● Implement 3n+1 function to compute the length of the sequence
 ● int length_3n_plus_1(int n)
 ● E.g. length_3n_plus_1(6) ⇒ 9
 */
int print_3n_plus_1_Lenght(int n) {

	if (n == 1)
		return 1;

	if (n % 2 == 0)
		return 1 + print_3n_plus_1_Lenght(n / 2);
	else
		return 1 + print_3n_plus_1_Lenght(3 * n + 1);
}
//___________________________________________________________________

//Homework 2: Power function
/*
 ● int my_pow(int value, int p = 2)
 ● Return value * value ….. * value p times
 ● E.g. my_pow(7, 3) = 7 * 7 * 7 = 343
 ● Note: if p = 0, answer is 1
 */
int my_pow(int value, int p = 2) {
	if (p == 0)
		return 1;

	return value * my_pow(value, p - 1);
}
//___________________________________________________________________

//Homework 3: Array maximum
/*
 ● int arr_max(int arr[], int len);
 ● Write a function that computes array maximum
 ● Input 1, 8, 2, 10, 3 ⇒ 10
 */

/*
 int arr_max(int arr[], int len) {
 if (len == 1)
 return arr[0];

 int sub_result = arr_max(arr, len - 1);

 return max(sub_result, arr[len - 1]);
 }
 */

int main_6() {

//*************************************************************** Functions ***********************************************************

//Sum 1_to_n
	/*
	 int n;
	 cin>>n;

	 int sum =0;

	 for(int i=1;i<=n;i++)
	 sum+= i;

	 cout << sum<<endl;
	 */

//function : sum 1_to_n
	/*
	 int n;
	 cin>>n;

	 int result = sum1_to_n(n);

	 cout<<result <<endl;
	 */
//==================================================================================================================
//function : absolute
	/*
	 int num;
	 cin>>num;

	 cout<<absolute (num)<<endl;
	 */

//function : max of two numbers
	/*
	 int x =0,y =0;
	 cin>>x>>y;

	 cout<< max_of_two(x,y);
	 */

//function : max of two absolute numbers
	/*
	 int a=0,b=0;
	 cin>>a>>b;

	 cout<<max_of_two_abs(a,b)<<endl;
	 */
//==================================================================================================================
//Functions with no parameter
	//cout << lucky_number() << "\n";  // it returns 13
//Functions with no return Type
	//print_sum(2, -5);
// Functions with default values
	//cout << our_pow(2) << "\n";  // it will consider the second parameter as 3
	//cout << our_pow(2, 3) << "\n";
	//cout << our_pow(2, 4) << "\n";
//Function Overloading
	//cout << add(2, 3) << "\n";
	//cout << add(2.0, 3.5) << "\n";
	//cout << add(2, 3, 4) <<endl;
//==================================================================================================================
//Parameter vs Argument
	// argument is an expression used when calling the method.
	//int x = 2;
	// x, 5, 3*2+1 are arguments PASSED to print function
	//print(x, 5);
	//print(3*2+1, x);
//Pass by value VS Pass by reference
	/*
	 int a = 1, b = 1;
	 change(a, b);
	 cout << a << " " << b << "\n";

	 string name;
	 read(a, b, name);
	 cout << a << " " << b << " " << name << "\n";
	 */
//==================================================================================================================
// array pass by reference by default
	//int arr[6] = {1, 2, 3, 4, 5, 6};
	//cout << sum_array(arr, 3) << "\n";
	//cout << sum_array(arr, 6) << "\n";
//==================================================================================================================
//Built-in Functions
	/*
	 // u should first include the cmath library to access these built-in functions
	 cout<<abs(-2)<<"\n";				// 2
	 cout<<fabs(-2.4)<<"\n";				// 2.4
	 cout<<ceil(2.4)<<"\n";				// 3   --> the smallest number that not less that 2.4
	 cout<<floor(2.4)<<"\n";				// 2   --> the largest number that not greater than 2.4
	 cout<<round(2.4)<<"\n";				// 2
	 cout<<round(2.5)<<"\n";				// 3
	 cout<<round(2.6)<<"\n";				// 3
	 cout<<round(-2.6)<<"\n";			// -3
	 cout<<round(-2.4)<<"\n";			// -2
	 cout<<ceil(-2.4)<<"\n";				// -2	** TRICKY
	 cout<<floor(-2.4)<<"\n";			// -3	** TRICKY
	 cout<<sqrt(16)<<"\n";				// 4

	 cout<<isalpha('A')<<"\n";			// 1024 = true
	 cout<<isalpha('#')<<"\n";			// 0
	 cout<<isdigit('3')<<"\n";			// 1 = true
	 cout<<isdigit('A')<<"\n";			// 0
	 cout<<isupper('A')<<"\n";			// 256 = true
	 cout<<isupper('a')<<"\n";			// 0
	 cout<<(char)tolower('X')<<"\n";		// x
	 cout<<(char)toupper('x')<<"\n";		// X

	 cout<<max(5, 9)<<"\n";				// 9
	 cout<<pow(2, 4)<<"\n";				// 16
	 cout<<pow(2, 4.1)<<"\n";			// 17.1484
	 cout<<log2(16)<<"\n";				// 4
	 cout<<log10(1000)<<"\n";			// 3

	 //return random value
	 cout<<(double)rand() / RAND_MAX<<"\n";	// 0.840188
	 */

	//Function: Is lower string?
	//cout << is_lower("abc") << "\n";
	//cout << is_lower("aBC") << "\n";
	//Function: Is lower string? Using Built-in Function
	//cout << is_loweR("abc") << "\n";
	//cout << is_loweR("aBC") << "\n";
//==================================================================================================================
//Global vs Local vs Static Variables
	//cout << global_var << endl;
	//cout << g4 <<endl;
	//cout << g2 <<endl;
	//cout << g3 <<endl;
	//cout<<global()<<endl;
//The space for the static variable is allocated only	one time and this is used for the entirety of the program.
	//fun(), fun(), fun();
//*************************************************************** Quiz 1 ***********************************************************
//1-
	//cout<<f(5)<<endl;
//2-
	//cout<<F(13)<<endl;
//3-
	//c();
//5-
	//cout << f1();
//7-
	//cout<<ASCII('A')<<endl;
//8-
//double x = e();
//cout<<x;
//9-
	//cout << test_me("abc");
	//cout << test_me("ABC");
	//cout << test_me("0123");
//10-
//	for (int i = 0; i < 3; ++i, f());
//		cout<<g;
//*************************************************************** Functions Homework ***********************************************************
	//Problem 1
	//cout<<max(1,2,3,4,5,6);

	//Problem 2
	//cout<<reverse_str("abcd")<<endl;
	//cout<<reverse_str("abcde")<<endl;
	//Problem 3
	/*
	 double a,b;


	 int total_operations=0;

	 while (true)
	 {
	 int choice = menu();

	 if(choice == 5)
	 break;

	 total_operations++;

	 read(a,b);

	 if(choice == 1)
	 add(a,b);
	 else if(choice == 2)
	 subtract(a,b);
	 else if (choice == 3)
	 multiply(a,b);
	 else if(choice == 4)
	 divide(a,b);
	 }
	 cout<<"total operations done "<<total_operations<<endl;
	 */

	//Problem 4
	/*		int test[100];
	 int len ;

	 len = read_array (test);

	 is_palindrome(test , len);*/

	//Problem 5

	//input
/*
 * 	int arr[100];
	int len,m;
	cin>>len>>m;

	//logic
	set_powers(arr,len,m);

	//output
	for(int i=0;i<len;i++)
		cout<<arr[i]<<" ";
*/

//*************************************************************** Recursive Functions ***********************************************************
	//cout<<factorial(3);
	//print_traingle(5);
	//print_traingle_reversed(5);
	//print_3n_plus_1(6);
	//cout<<endl;
	//cout<<print_3n_plus_1_Lenght(6);
	//cout<<my_pow(4,3)<<endl;
	//int arr[]={1,2,3,4,10,11,12};
	//cout<<arr_max(arr,7);
	return 0;
}
