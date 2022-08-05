/*
Homework (1): Date & Time
● The usage of Date information is very common in development. As a junior
software engineer, your team lead asked you to think in date struct.
○ What are the possible data members?
○ What are the possible member functions? No requirements. Be flexible, as this is an
infrastructure struct
○ Printing Concern: Users may want to a string representation in different ways
■ Year, Month, Day - Month, Year - Day-Month
● What about a Time class (hour, minute, seconds):
○ Describe 2 different ways to be potential member variables
■ Assume you recognized one of them and your college another one
■ Both of you debate a lot which one to use
■ Defend the 2 choices. How to make a final decision instead of debating for hours?
*/

//_________________________________________________________________________________________



/*
Homework (2) - Design Review
● Your college designed and
implemented DateTime Class
○ Jointly supports the Date & Time
● The code passed all unit testings
● Think in a critical design tip
○ Provide your feedback!


struct DateTime {
	int day;
	int month;
	int year;
	int hours;
	int minutes;
	int seconds;

	// Constructor
	DateTime(int day, int month, int year,
			int hours, int minutes, int seconds) {
	}



	// A bunch of Time functions
	// ...
};

*/


// Solution (2)

// The problem with above class it is responsible for 2 things
// Date and all its complications
// Time and all its complications
// Always focus a struct on a specific functionality (single responsibility)
// Then, each struct is easier to code
// Easy to give different developers different tasks

/*

class Date {

private:
	int day;
	int month;
	int year;

public:

	//punch of date functions
};

class Time{

private:
	int hour, minutes, seconds;

public:
	// punch of time functionalities
};

class DateTime {
private:
	Date date;
	Time time;

public:

	//constructor
	DateTime(Date date ,  Time time);

};*/
//_________________________________________________________________________________________


/*
Homework (3) - Design Review
● Your team is developing a banking application. Provide useful feedback to your teammate.
○ Think in the current data members?
■ All of them are relevant for a person?
■ All of them are relevant for a bank customer application?
■ Convenient datatype?
○ Think in 2+ missing critical data members

struct BankCustomer {
	string name;
	string address;
	string mobile;
	string birth_of_date;
	int rectangle_width;
	string favourite_movie;
	string favourite_color;
	string favourite_actor;
	string favourite_car_model;
	string favourite_food;


	// Potential several functions related to birth date
};

*/

//Solution
/*

//code Review comments from eslam to dear teammate :
 *
 * 1- rectangular_width
 *    i can't think of a reason why this attribute is used. probably copy/paste mistake
 *
 *
 * 2- String favourite_*
 * what is the value of all of these favourite attributes. In oop only 'relevant' attributes are used
 * these favourite attributes aren't relevant to our context(banking app)
 *
 *
 *
 *3- string birth_of_date
 * as u know, we may have several functions that related to birth date.
 * this string data type will be painful. every time we have to extract day/month/year format
 * u better add 3 integers for them
 * Even better, use a new struct date with our struct bankCustomer
 * think in more COMPOSITION of other objects( BankCustomer has a Date , where Date is another object)
 *
 *
 * this will reduce RESPOSIBILITY in our class. REUSABILITY is another concern in OOD.
*/
//_________________________________________________________________________________________

/*
Homework (4) - Shapes
● Think in Rectangle, Triangle, Circle in a Drawing application
○ What are common things between them? What is special in each of them?
○ Think in terms of data members, member function names & functions behaviour
*/

//Solution
/*//we have different shapes to draw Rectangle, Circle, Traingle

Common:

Data : color
Functions : -> Draw ()
			-> Compute Area ()
commons but in different manners

Specials:

traingle needs 3 sides , rectanle need 4 sides , circle needs center and radius */


//_________________________________________________________________________________________

/*

Homework (5): Queues
● This code is working properly
● What is the problem in these
code?
● What if we want to add Employee
Queue
● Do u remember how STL did
magical thing to solve that?


struct QueueInt {
	int arr[100];

	// some functionalities using type integer
};

struct QueueDouble {
	double arr[100];

	// exactly same as above, but replace integer with double
};

struct QueueString {
	string arr[100];

	// exactly same as above, but replace integer with string
};

*/


//Solution


/*
The clear problem is the code duplication. DRY (Don’t Repeat Yourself)

In Stl we used something called template, a C++ mechanism
queue<int>
queue<double>
queue<string>

we write the queue one, but somehow we work on general type instead of a specific type
*/


//Homework (7): What vs How


/*
● 1) Task:
○ What: Sum from 1 to N in 2 ways
○ How: Explain 2 approaches to implement above task
*/


//Solution
/*
1) we can sum from 1 to N in 2 ways

		--> loop to sum from 1 to N. Easy to code but slow (e.g. for N = 10^10)

		--> user formula (N * (N=1))/2. now this is very efficient


summery :

In many cases, the same task can be done in several ways:

	- some are clearly written and some are not
	- fast or slow
	- memory management
	- heavy computations (ur mobile might be hot) or more efficient techniques
	- consume ur mobile data pacakge or save it
*/
//________________________________________

/*
2) Snapseed is an app for Image Manipulation (e.g. crop, rotate, draw, etc)
○ It is available for Android, IOS, IPAD
○ In terms of what & how: provide some insights
■ E.g. function to fill color in rectangle?
■ E.g. function to read image from device?
○ Imagine we found a bug in some function
■ Or faster way to do it
■ How to structure our app code base
to do the minimum code changes?
*/


//Solution

/*
2) - like most of the provided systems, we know what the service provided to us not how it works
		e.g. u use messanger to chat. u care what the possible things to do
			u don't care about how its done or scaled to support Bollions of users

	- As we provide support for Andriod, IOS , IPAD, we should be careful from code duplication.

		- most of the system will be actually common code e,g, fill rectangle color method
		- some functionalitiy will be more system dependancy, e.g. laoding an image from the storage

	- DRY (Dont repeat ur self)
		- whatever common design the system to reuse it
*/


//_________________________________________________________________________________________





