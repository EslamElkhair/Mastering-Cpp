#include<iostream>

using namespace std;

// Aggregate class:
// public/No constructors/no virtual/inheritance/no in-class initializers
struct Employee {
	int id;			// Default initialization = garbage
	string name;	// Default initialization => call constructor = ""
};

int main_8_1() {

//	int n1;       //undefined value
//	int n2 = 42; // inits with 42
//	int n3(42);  // inits with 42
//	int n4 = int(); //inits with 0
//	int n5 { 42 }; //inits with 42
//	int n6 { }; //inits with 0
//	int n7 = { 42 }; // inits with 42
//	int n8 = { } //inits with 0
//	auto n9 = 42; //inits int with 42
//	auto n10 { 42 } //inits int with 42
//	auto n11 = { 42 } //inits int with 42
//	auto n12 = int { 42 };
//	int n13 = (7, 9);  //inits int with 9 -> comma operator
//	auto n14 = (7, 9); //inits int with 9 -> comma operator


//______________________________________________

/*

	Employee e1;	// Default initialization
	Employee e3 { };	// value initialization

	// temporary object with () or {} => Value initialization
	Employee();
	Employee { };

	Employee e4 { 10, "Mostafa" };			// Aggregate initialization
	char arr5[] { 'h', 'e', 'l', 'l', 'o' };	// Aggregate initialization

	char arr1[] = "hello";		// Copy initialization
	char arr2[] = { "hello" };	// Copy initialization
	char arr3[] { "hello" };		// Direct initialization (MORE efficient)
	char arr4[]("hello");

	int x0;		// Default initialization for primitives = garbage
	int x1 = 5;	// Copy initialization
	int x2(5);	// Direct initialization
	int x3 { 5 };	// Direct initialization

	int y1 { };	// value initialization for primitives = 0
	int y2();	// FUNCTION!

	double z = 10;
	int z1 = z;
	// warning: narrowing conversion of ‘z’ from ‘double’ to ‘int’ [-Wnarrowing]
	int z2 { z };	// warning or CE
*/

//_____________________________________________________

	//Summery
/*
	● Forgot to initialize ⇒ Default initialization
	○ Primitive ⇒ Garbage
	○ Struct object ⇒ Default constructor

	● Initialized with something? {blabla} (blabla)
	○ Using = ⇒ Copy initialization (ok for primitives, slow otherwise)
	○ Without = ⇒ Direct initialization (more efficient)

	● Initialized without something? {} ()
	○ Primitive ⇒ zero-initialization
	○ Struct object ⇒ Default constructor
*/

	return 0;
}
