
#include<iostream>
using namespace std;
//-------------------------------- COnstructor & Destructor ------------------------------------
class Rectangle {

private:
	double width;
	double height;

public:
// Constructor

	//using intialization list : best practise

	//Default construcutor
	Rectangle() : Rectangle(0.0 , 0.0) {
	}
	//Intialization constructor : using intialization list
	Rectangle(double width , double height) : width(width) , height(height) {

		}

//	.
//	.
//	.
//	.
//	.
//	.
//	.
//	.
//	.


//Destructor :
			//1- A destructor function is called automatically when the object goes out of scope:
					//- The function or the program ends
					//- A block containing local variables ends (e.g. braces in an if condition)
					//- Delete operator

			//2- Destructor has no parameters or retur type
	~Rectangle() {
		cout<<"class killed in memory\n";
	}


};

//-------------------------------- COnstructor & Destructor Homework ------------------------------------

/*
Homework 1: Initializer list!

- We learned that it is recommended to use the initializer list for constructor
- Assume we have a class of several variables (e.g. a, b, c in order)
- But the initializer list is b, a, c
- Will the constructor initialize based on class order or initializer-list order?
- Also, what is the order of the destructor?
- It is preferred to learn the answer by reading a book/reference
- But, implement a program that its results can help us answer the 2 questions
*/

class A {
private:
public:
	A() {
		cout<<"A Constructor\n";
	}
	~A() {
		cout<<"A Destructor\n";
	}
};

class B {
private:
public:
	B() {
		cout<<"B Constructor\n";
	}
	~B() {
		cout<<"B Destructor\n";
	}
};

class C {
private:
public:
	C() {
		cout<<"C Constructor\n";
	}
	~C() {
		cout<<"C Destructor\n";
	}
};

class D {
private:
	A aa;
	B bb;
	C cc;
public:
	D() : bb(B()), aa(A()), cc(C()) {
		cout<<"D Constructor\n";
	}
	~D() {
		cout<<"D Destructor\n";
	}
};
//Solution
/*
A Constructor
B Constructor
C Constructor
D Constructor
D Destructor
C Destructor
B Destructor
A Destructor


From results: Constructors are called based on Class data members order NOT initalizer list order
 */

//_____________________________________________________________________________________________________________________________________

/*Homework 2: Guess me!

1) What are the possible ways to finish Class C constructor?

2) How many times ClassA Constructor will be called? Why? Give a tip for the coder*/



		class ClassA {
		public:
			ClassA() {
				cout << "ClassA Constructor\n";
			}
		};

		class ClassB {
		private:
			ClassA aa;	// originally this line needs to call constructor to default in begin
			int x;
		public:
			ClassB(int x) :
					aa(ClassA()), x(x) {
				// Originally the constructor of classA called twice
					// Once to be default Initialized
					// Once inside the constructor

				// Moving to Initializer list, then we Initialize it before construction only once

				// Tip: Always use Initializer list
				// Note: If a member object is not initialized through a member initializer, the member object’s default constructor will be called "implicitly".
					// Avoid duplicate initlaization!
			}
		};

		class ClassC {
		private:
			int &y;
			ClassB bb;

		public:
			ClassC(int &y, const ClassB &bb) :
					y(y), bb(bb) {
				// 1- The only way to initialize a reference is intializer list
				// 1- The only way to initialize a class that doesn't have default constructor (e.g. Class B)  is intializer list
			}
		};

		// Tip: please use initalizer list as much as possible!
//_____________________________________________________________________________________________________________________________________
/*
		Figure out one bug in this code
		Fix it
		Provide a tip for the coder!
*/

class ourPrice {
	private:

		};

//_____________________________________________________________________________________________________________________________________


//_____________________________________________________________________________________________________________________________________


//_____________________________________________________________________________________________________________________________________



//_____________________________________________________________________________________________________________________________________

int main_OO_4() {
	D d;
	return 0;
}


