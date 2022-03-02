//============================================================================

// Need more information? -->   https://github.com/EslamElkhair/Mastering-Cpp-Concepts/wiki/0.0-Introduction

//============================================================================
// Author      : EslamElkhair
// Created on  : Feb 18, 2022
// Copyright   : © 2022Elkhair's
// Description : Introduction to C++
//============================================================================

#include<iostream>
using namespace std;
// visit the above link to know what these  ( #include<iostream> ) ( using namespace std; ) are !!!

int main_0() // the compiler start executing the program starting from main function
{
//Printing

	// output (cout --> console output or character output(<< this operator is used for print output to the console screen)

	//	cout<<"My First Program. Helllllllo."<<endl;

	// output line by line

	//	cout<<"I am Mostafa";
	//	cout<<endl;
	//	cout<<"I was born in Giza\n";
	//	cout<<"I graduated from Cairo university";
	//	cout<<endl;

//Merge print Commands

	//	cout<<"I am Mostafa"<<endl<<"I was born in Giza"<<endl<<"I graduated from Cairo university"<<endl;

// More printings

	//	cout<<"I am Mostafa"
	//		<<endl<<"I was born in Giza"
	//		<<endl<<"I graduated from Cairo university"
	//		<<endl;

// More Printings

	//	cout<<"I am Mostafa\nI was born in Giza\nI graduated from Cairo university\n";

//-----------------------------------------------------------------------------------

//Comments : there are two types of commenting code  --> compiler ignore commented lines while executing the program

	// 1- using //

	// All progress takes place outside the comfort zone.

	//2- using /* */

	/*
	 Character cannot be developed in ease and quiet. Only through
	 experience of trial and suffering can the soul be strengthened,
	 ambition inspired, and success achieved
	 */

//-----------------------------------------------------------------------------------
// Numbers
	//	cout<<1<<"\n";
	//	cout<<12<<"\n";
	//	cout<<123<<" is a number\n";
	//	cout<<"123"<<" is NOT a number\n";    //--> c++ treated it as string once u embed the qoutation marks ""
	//	cout<<endl;
	//
	//	cout<<15.7<<"\n";
	//	cout<<-12.52<<"\n";
	//	cout<<endl;
	//
	//	cout<<1234<<"\n";
	//	cout<<4321<<"\n\n";
	//
	//	cout<<43211234<<"\n";
	//	cout<<4321<<1234<<"\n";
	//
	//	cout<<"\nMy luck number is: "<<17<<"\n";

//Math on Numbers
//		cout<<1<<"\n";
//		cout<<1+2<<"\n";
//		cout<<1+2+3<<"\n";
//		cout<<1+2+3+4<<"\n";
//		cout<<"1+2+3+4"<<"\n";
//		cout<<"1+2+3+4="<<1+2+3+4<<"\n\n";
//
//		cout<<1+2+3+4-10<<"\n";
//		cout<<17-10<<"\n\n";
//
//		cout<<"2*3*4 = "<<2*3*4<<"\n";
//		cout<<"12/2 = "<<12/2<<"\n";
//		cout<<"12/2/3 = "<<12/2/3<<"\n\n";
//
//		cout<<"6/2 = "<<6/2<<"\n";
//		cout<<"7/2 = "<<7/2<<"\n";
//		cout<<"7.0/2.0 = "<<7.0/2.0<<"\n\n";
//
//		cout<<10*10*10*10*10*10*10*10*10<<"\n";
//		cout<<10*10*10*10*10*10*10*10*10*10<<"\n";    // integer overflow --> compiler consider the result is integer by default
//		cout<<(long long)10*10*10*10*10*10*10*10*10*10<<"\n";    // casting to long long that has a wider range than integer type (will be discussed in details later!)
//-----------------------------------------------------------------------------------

//Code tracing : it means passing over the code line by line and execute every line like the compiler do.
//	cout<<"If your dream only includes you, itâ€™s too small\n\n";
//
//	cout<<30+20+10-10-20-30<<endl;
//	cout<<"70/10"<<"\n";
//	cout<<80/10/2<<"\n";
//
//	cout<<"\nOpportunities don't happen. "
//		<<"You create them"
//		<<endl;
//-----------------------------------------------------------------------------------
//Errors types:
	//○ Compile error: You violated the language syntax rules!
	//○ Run time error: Good syntax, but program crashes due to error during running  (Example dividing by zero)

// common Mistakes :

//Compiler Error : missing semicolon
	//	cout<<"iam Eslam"

//Compiler Error : << operator
//	cout<<<<< "hello" < < "world\n";

//Compiler Error : misiing #include<iostream>

// Compiler Error : INT MAIN ()  --> C++ is case sensitive --> so main function must be lowercase

//Compiler Error : Printing outside the main function scope


//Compiler Warnings : its not stop the compiler from executing the program but better to solve it

//Compiler Warning : overflow --> for example integer overflow -->  2147836478 --> this overflow



//************************************************************************* Problem Solving **********************************************************************************

//Problem 0.1
/*
	Guess the run-time output

	Pass over the code line by line by yourself (Trace the code)
	Decide What is the output of this code?

	Then run it and compare against yours!
*/

//	cout<<"\n\nGuess the "
//		<<"output\n---\n";
//
//	cout<<10+20-5<<endl;
//	cout<<"14/2"<<"\n";
//	cout<<17-10<<"\n";
//	cout<<"endl";
//	cout<<"\nPractice makes perfect";
//
//	//cout<<"The way to get started is to quit talking and begin doing";

//-----------------------------------------------------------------------------------

//Problem 0.2
	/*
	 Write code to print some traingle shapes to the console screens

	*/

//Solution 1

//	cout<<"*"<<endl;
//	cout<<"* *"<<endl;
//	cout<<"* * *"<<endl;
//	cout<<"* * * *"<<endl;
//	cout<<"* * * * *"<<endl;


//	cout<<"        *        "<<endl;
//	cout<<"      * * *      "<<endl;
//	cout<<"    * * * * *    "<<endl;
//	cout<<"  * * * * * * *  "<<endl;
//	cout<<"* * * * * * * * *"<<endl;

//	cout<<"        *        "<<endl;
//	cout<<"      * * *      "<<endl;
//	cout<<"    * * * * *    "<<endl;
//	cout<<"  * * * * * * *  "<<endl;
//	cout<<"* * * * * * * * *"<<endl;
//	cout<<"  * * * * * * *  "<<endl;
//	cout<<"    * * * * *    "<<endl;
//	cout<<"      * * *      "<<endl;
//	cout<<"        *        "<<endl;


//-----------------------------------------------------------------------------------


//Problem 0.3
	/*
	 * Trace the code and fix errors
	 * */

//	// Don't print outside main
//	cout <<"work smart not hard\n";
//
//	// Add simicolon
//	cout << "Children must be taught how to think, not what to think\n";
//
//	// Be careful from double quotes in middle of string. Use \" instead of "    [later name: escape char]
//	cout << "We worry about what a child will become \"tomorrow\", yet we forget that he is someone today\n";
//
//	// << NOT <
//	cout << "Children are not things to be molded"<<", but are people to be unfolded\n";
//
//	// endl NOT end
//	cout << "Each day of our lives we make deposits in the memory banks of our children."<<endl;
//
//	// Be careful from the 2 extra "
//	cout      << "It is easier to build strong children than to repair broken men"<<"\n";
//
//	// << NOT >>
//	cout << "Children need models rather than critics\n";
//
//	// cout NOT out
//	cout<<"Children have never been very good at listening to their elders, but they have never failed to imitate them";
//
//	// << not <
//	cout << "Children are our most valuable resource\n";


	return 0; // --> The return value is the exit code of your program. The 0 exit code is a widely accepted convention for 'OK the program execution was successfull'.
			  // in C++, if u dont write the return statement, the compiler embed it in the source code automatically.

//	cout<<"\n\nDo one thing every day that scares you";   // this statement won't be executed because it's after the return statement

}

