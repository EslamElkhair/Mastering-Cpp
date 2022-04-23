/*

#include <iostream>
#include<cmath>

using namespace std;

//************************************************************** Function Template *******************************************************


//What is the problem here ?
int max(int a, int b) {
	if (a > b)
		return a;
	return b;
}

double max(double a, double b) {
	if (a > b)
		return a;
	return b;
}

● These 2 functions do EXACTLY the
same logic, regardless of data type
● So very tedious copy paste!
● Also if we discovered a bug in one
function, we have to solve it in all of
the different copies?
● It will be severe if we have to make
like e.g. 6 functions, with copy paste
and just data type change


// how templates solve the problem ?


template<typename Type>  // the use of this sentence is just to say "Hey compiler this is template. Use Type"
Type MyMax(Type a, Type b) {
	if (a > b)
		return a;
	return b;
}

● Different versions of function MyMax are generated on compile time using
the template
○ Compiler generates ONLY based on the used cases
■ E.g. in previous code it generates 3 functions:
■ Int MyMax(int, int) / double MyMax(double, double) / char MyMax(char, char)


//__________________________________________________________

//Hints :

//The idea of templates is to pass data type as a parameter so that we don’t need to write the same code for different data types

//When your code is behaving the same regardless of the potential data types, a template might be a key to avoid code duplication?

//When the compiler finds something that involves templates, it generates code for the used scenarios in the codebase

//We can overload functions with templates. Think the normal way/rules.

//All template functions and classes are generated in the compilation time.

//Fun is a very generic function where T can be a wide diversity of cases (primitive, object, array). the best way to initialize is the unifor intialization
//as it works in all contexts


template <typename T>
void fun()
{
  T t {} ;
}




//**************************************************************** Class Template *******************************************************

//Class Templates

● Similar to functions, we can have struct (aka classes) to be independent of
type
● Recall our Hospital Queue
○ What if I need queue of int and another of string?
○ Same struct code copy-paste!
● Class templates
○ Compiler generates several versions of the class template based on used types




 * illustration for ho templates work
lets say we have a struct like the hospital queue and we want to make a sevral copies for int and string , etc.
thinking about code struct you just copy paste the same logic and replace only data types. the class templates come again and saves us
,so that the compiler in the compilation time is going to generate several copies of your struct as much as you use it(compiler coy paste instead of you)


// templates VS overloading


● Templates: identical syntax for different data types
● Function overloading is identical function name + different parameters +
different function behaviour



template <typename T , int SIZE>
struct Myitems {
	//array and counter for array
	T items[SIZE];
	int len =0;
	//function with template parameters
	void add(T item) {
		items[len++] =item;
	}
	//is the element of any datatype exists in the array
	bool exits(T item){
		for(int i=0;i<len;++i){
			if(items[i]==item)
				return true;
		}
		return false;
	}
};

template<typename T>
struct Mynumber{
	T item;

	bool equal (T another){
		return item == another;
	}
};

template<>
struct Mynumber <double>{
	double item;
	bool equal(double another){
		if(fabs(item-another)<0.00001)
			return true;
		return false;
	}
};

//*************************************************************** Variadic Templates *******************************************************

//in modern c++, we can use at least two mechanisms to allow a variable number of parameters and they are variadic templates and fold expressions

//Variadic
//● The word Variadic is common in different languages
//● Variadic parameter accepts zero or more values
//○ Typically: a function may have at most one variadic parameter.
//○ Typically: The right most parameter
//○ Usually 3 periods (ellipsis syntax) are used to express it: …
//● Variadic functions are functions which take a variable number of arguments
//○ void printf(const char* fmt ...) - OLD style - UNSAFE typically
//● Variadic template: A modern & safe way to solve the problem


// typename ... SomeArgs: template parameter pack NOT a type
// args is called a function parameter pack

template<typename ... SomeArgs>
void Hello(SomeArgs ... args) {
	int sz = sizeof...(args);
	cout << sz<<" "<<__PRETTY_FUNCTION__ << "\n";
}

//**************************************************************** Fold Expressions *******************************************************

//In C++17, fold expressions cames to make variadic templates easier for specefic binary operators

int main_9_0() {



	return 0;
}
*/
