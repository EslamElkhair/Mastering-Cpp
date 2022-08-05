//#include<bits/stdc++.h> // Covers all you need typically - but not so stadard
#include <iostream>
#include<fstream>
#include<sstream>
#include<queue>
#include<deque>
#include<stack>
#include<tuple>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<unordered_set>
#include<map>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~ Deque ~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//what does it support ?

void print_deque_back(deque<int> q) {
	cout << "Queue elements (back): ";
	while (!q.empty()) {
		cout << q.back() << " ";
		q.pop_back();
	}
	cout << "\n";
}
void print_deque_front(deque<int> &q) {
	cout << "Queue elements (front): ";
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop_front();
	}
	cout << "\n";
}

//Example
bool is_palindrome(string str = "abba") {

	deque<char> dq;

	for (char c : str)
		dq.push_back(c);  // add characters of the string

	while (!dq.empty()) {

		char f = dq.front();
		dq.pop_front();

		char b = dq.back();
		dq.pop_back();

		if (f != b)
			return false;
	}
	return true;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~ iterators ~~~~~~~~~~~~~~~~~~~~~~~~

// iterators has solved the problem of deque. How ?

//Recall printing Deque
/*
 ● We can print forward or backward: e.g. .front, .pop_front
 ● But I don’t want it to be freed?
 ○ Ok Don’t use &. Make a copy
 ○ But this is waste of time and memory?
 ○ Ok Use iterators!
 */

void print_deque_iterated_front(deque<int> &dq) {
	cout << "Queue elements (front): ";

	deque<int>::iterator it = dq.begin();

	while (it != dq.end()) {
		cout << *it << " ";
		++it;
	}
	cout << "\n";
}

void print_deque_iterated_back(deque<int> &dq) {
	cout << "Queue elements (back) : ";

	deque<int>::reverse_iterator it = dq.rbegin();

	while (it != dq.rend()) {
		cout << *it << " ";
		++it; // you can think of it the content of the queue has been reversed and you are iterating from the reversed begin
	}
	cout << "\n";
}

//another structure for iterating on queue elements
void print_deque_iterated_back2(deque<int> &dq) {

	cout << "Queue elements (back) : ";

	for (auto it = dq.rbegin(); it != dq.rend(); ++it)
		cout << *it << " ";
	cout << "\n";

}

void iterators_arithmatic() {
	deque<int> q { 1, 2, 3, 4, 5 };

	auto it = q.begin() + 3;	// FORTH element position
	cout << *it << "\n";		// 4

	cout << *(it--) << "\n";	// 4 then move to 3rd position
	cout << *it << "\n";		// 3

	cout << *(--it) << "\n";	// 2
	cout << *it << "\n";		// 2 Now on 2nd

	cout << *(it + 3) << "\n";	// 5th position
	it += 3;
	cout << *it << "\n";		// 2 Now on 5th position

	// reset all to 10
	for (auto it = q.begin(); it != q.end(); ++it)
		*it = 10;
	cout << *it << "\n";

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~ set ~~~~~~~~~~~~~~~~~~~~~~~~

//compare two integers and one string using set
struct employee {

	int num1, num2;
	string str;

	//constructor
	employee(int a, int b, string name) {
		num1 = a;
		num2 = b;
		str = name;
	}

	//operator overloading
	bool operator <(const employee &rhs) const {

		//compare as we did before
		if (false) {

			if (num1 != rhs.num1)
				return num1 < rhs.num1; // return true if the

			if (str != rhs.str)
				return str < rhs.str;

			return num2 < rhs.num2;

		}

		//or use pair
		if (false) {
			return make_pair(num1, make_pair(str, num2))
					< make_pair(rhs.num1, make_pair(rhs.str, rhs.num2));
		}

		// or use tie : standard way
		return std::tie(num1, str, num2) < std::tie(rhs.num1, rhs.str, rhs.num2);
	}

};

int main_8_3(int argc, char **argv) {

//*************************************************************** Introduction ****************************************************

//every strong programming like c++, java, c# have something that allow you to make use of available datastructrutures and algorithms

//STL Example : Recall Queue Data Structure
	/*
	 ● It has internally an array and support following
	 operations
	 ○ void add_end(int value): add to the end of current
	 array
	 ○ void add_front(int value): add to the front of this array
	 ○ int remove_front(): remove the front value and
	 remove it.
	 ■ Return the value
	 ○ void print(): print the array
	 */

//General Procedure : Using Data Structures via C++ STL
	/*
	 ● In many cases, you will need to organize, process and retrieve data in some
	 specific way, similar to our queue
	 ● You typically define a class, inside it data (e.g. array) and operations on data
	 ● We call this class a data structure
	 ● In practice, same data structure needs repeat.
	 ○ This is what a data structure course teaches
	 ■ Basic structures: queue, dequeue, stack, vector, linked list, binary search tree
	 ■ Advanced: Has table, balanced binary search tree, trie, segment tree
	 */

// After All : STL
	/*
	 ● STL: Implemented very efficient data structures to directly use
	 ○ They are called containers
	 ○ Learning them = makes studying data structures course easier
	 ○ Using templates: Generic containers
	 ● STL also provides set of algorithms to act on these containers


	 Algorithms
	 |
	 |
	 ------- --------
	 |				 |
	 Templates          iterators
	 |				 |
	 Datatypes         Containers


	 1- Algorithms : make containers independant of Data types -> generic tcontainers
	 2- Iterators  : make algorithms independant of Containers
	 */

//***************************************************************  STL Queue ******************************************************
	/*
	 ● Recall the Queue Structure we built
	 ○ First in first out strategy (FIFO)

	 ● But we need queue for several data types: Integer, Double, Employees?
	 ○ Use C++ templates
	 ○ queue<int> q_int;
	 ○ queue<employee> q_empl;

	 ● What does it support?

	 ○ Push()  -> to add element
	 ○ Front() -> to get top element
	 ○ Empty() -> to know if empty()
	 ○ Size()  -> How many elements?
	 */

// Typical use of Queue
	/*
	 queue<int> q;

	 q.push(10);
	 q.push(20);
	 q.push(30);
	 q.push(40);

	 cout<<"Queue size : "<<q.size()<<"\n";

	 cout << "Queue elements : ";
	 while (!q.empty()) {
	 cout << q.front() << " ";
	 q.pop();
	 }

	 cout << "\nLast element in the Queue : " << q.back();

	 cout<<"\nQueue size : "<<q.size()<<"\n";  // size = 0 -> cause queue has been empty
	 */

//Queue strings example
	/*
	 queue<string> qs;
	 qs.push("eslam");
	 qs.push("sama");
	 qs.push("ahmd");
	 qs.push("mhmd");

	 cout << "Queue elements : ";
	 while (!qs.empty()) {
	 string name=qs.front();

	 cout << name << " ";
	 qs.pop();
	 }
	 */
//*************************************************************** STL priority Queue **********************************************
//Priority queue is a queue that involves some priority that it will order the numbers from big to the small
	//adding elements in the  priority queue : By Default it ordered from large to small --> 7 5 3 1 0
	/*
	 * 	priority_queue<int> pq;

	 pq.push(3);
	 pq.push(5);
	 pq.push(7);
	 pq.push(1);
	 pq.push(0);

	 cout << "Priority Queue Elements (Descending) : ";
	 while (!pq.empty()) {
	 cout << pq.top() << " ";
	 pq.pop();
	 }
	 cout << "\n_________________________\n\n";
	 */

	// adding elements in the priority queue from small to large --> 0 1 3 5 7
	/*
	 pq.push(-3);
	 pq.push(-5);
	 pq.push(-7);
	 pq.push(-1);
	 pq.push(0);

	 cout << "Priority Queue Elements (Ascending) : ";
	 while (!pq.empty()) {
	 cout << pq.top() * -1 << " ";
	 pq.pop();
	 }
	 cout << "\n_________________________\n\n";
	 */

//*************************************************************** STL Deque *******************************************************
// Deque allow us to add in the frond and add in the back and also remove from the front and remove from the back
// What does it support ?
	/*
	 ○ Add front = push_front()
	 ○ Add end = push_back()
	 ○ Get front = front()
	 ○ Remove front = pop_front()
	 ○ Get back = back()
	 ○ Remove back = pop_back()
	 ○ size() = How many elements?
	 ○ empty() = any more elements
	 ○ you can deal it as an array and reach every element by index
	 */

	/*
	 deque<int> dq;
	 dq.push_back(20);	// q: 20
	 dq.push_back(30);	// q: 20 30
	 dq.push_back(40);	// q: 20 30 40
	 dq.push_front(10);	// q: 10 20 30 40
	 dq.push_back(50);	// q: 10 20 30 40 50
	 dq.push_front(0);	// q: 0 10 20 30 40 50

	 deque<int> copy_dq =dq; // it just take a copy of the dq elements before it's empty

	 //print back
	 print_deque_back(dq);
	 print_deque_back(dq); // will print data as it is -> cause the call function argument is a copy of the native function parameter (call by value)

	 cout << "\n_________________________\n\n";

	 //print front


	 print_deque_front(dq);
	 print_deque_front(dq); // will print nothing -> cause the call function arguement and native function parameter refer to the same place in the memory (call by refernce)


	 //other functionalities
	 cout<<copy_dq.size()<<"\n";
	 cout << copy_dq[1] << "\n";		// 10 -> you can treat it as array -> call every element by its index (zero-based indexed like arrays)
	 cout << copy_dq.at(1) << "\n"; // the same as above
	 //	cout<<copy_dq.at(6)<<"\n";	// throws out_of_range exception
	 */

// Deque example
	/*
	 cout << boolalpha;   // print true as true
	 cout << is_palindrome("abba") << "\n";	// true
	 cout << is_palindrome("abcba") << "\n"; // true
	 cout << is_palindrome("xyy") << "\n";   // false
	 */

//*************************************************************** STL Stack *******************************************************
//Stack is completely the reverse of the queue.How?
	/*
	 you can think of stack like a box that have some books. you put book no.1, book no.2, till book no.10.
	 if you would like to have a book now from the stack, you have to get from the top of the box.
	 so this means that the last one is the first one to get out (Last in first out)
	 */

	// stack VS Queue in terms of code
	/*
	 stack<string> ss ;

	 ss.push("fekhair");
	 ss.push("abass");
	 ss.push("islam");

	 cout<<"stack Elements: ";
	 while(!ss.empty()) {
	 cout<<ss.top()<<" ";
	 ss.pop();
	 }
	 cout<<"\n";

	 queue<string> sq ;

	 sq.push("islam");
	 sq.push("abass");
	 sq.push("fekhair");

	 cout<<"stack Elements: ";
	 while(!sq.empty()) {
	 cout<<sq.front()<<" ";
	 sq.pop();
	 }
	 cout<<"\n";
	 */

//*************************************************************** STL Pair *****************************************************
// pair and tuple can be considered as datastructures of different datatypes
// the pair can be any two data types
	/*
	 pair<int, string> p = make_pair(10, "eslam");
	 cout << p.first << " " << p.second << "\n";

	 //use pair for more than two datatypes
	 pair<int, pair<int, string> > my_p = make_pair(10, make_pair(20, "ali"));
	 my_p = make_pair(10, p);
	 */

	//Pair: Comparison
	/*
	 ● Let’s say we have pair<int, pair<string, int> >
	 ○ P1 = (10, (mostafa, 35))
	 ○ P2 = (7, (ali, 15))
	 ○ P3 = (10, (ziad, 17))
	 ○ P4 = (10, (mostafa, 20))
	 ● Comparing pair order on first element, then on second element
	 */

//*************************************************************** STL Tuple ****************************************************
// Tuple is more of generization of pair. How?
	//in pair, you are allowed to have a pair of specefic items, but in tuple you can have items as much as you code
	/*
	 tuple<char , int , string> t;
	 t = make_tuple('a' , 10 ,"simo");

	 //in tuple, we get elements by its <position> like an array

	 cout<<get<0> (t)<<" "<< get<1> (t)<<" "<< get<2> (t)<<"\n";

	 //we can also set a specefic position with a new value

	 get<0> (t) = 'b';
	 cout<<get<0> (t)<<"\n";


	 //Tuple : comparison

	 cout<< (t <= t) <<"\n";	// we can compare tuples

	 // tie: it unpack the tuple values into separate variables
	 //	tie(ch, val, name) = t;
	 //	cout<<name<<"\n";

	 // Concatenating 2 tuples to return a new tuple
	 auto t2 = tuple_cat(t1, make_tuple(10.6));


	 // C++17 some nicer syntax. Don't try unless C++17 compilation
	 int c, d;
	 //auto  [c, d] = std::make_tuple(4, 5);
	 */

//*************************************************************** STL Iterators ************************************************
//Iterators
	/*
	 begin()    --    pos*   ++       end()
	 <--------------         --------------->
	 ● Iterator is an object, but think of it like a position in an array
	 ○ begin() = first element
	 ○ end() = AFTER last element
	 ● Moving forward/backward: use ++pos, --pos
	 ● Want the current value? *pos
	 ○ You can print / change
	 */

	/*
	 deque <int> dq {1,2,3,4,5};

	 //Using iterators in code : iterate forward

	 print_deque_iterated_front(dq);
	 print_deque_iterated_front(dq);

	 // Using iterators in code : iterate backward

	 print_deque_iterated_back(dq);
	 print_deque_iterated_back(dq);
	 print_deque_iterated_back(dq);
	 print_deque_iterated_back2(dq);
	 print_deque_iterated_back2(dq);


	 iterators_arithmatic();
	 */

// Iterating style : STL with  range-based for loop
	// there is an iterating style use for loop to iterate above data structures e.g. array, queue,etc element by element.
	/*
	 //range-based for loop to iterate on an arary
	 int arr[] {1,2,3};

	 for(auto val:arr)
	 cout<<val<<" ";
	 cout<<"\n";

	 //range-based for loop to iterate on a queue
	 deque<int> q {1,2,3,4,5};
	 for(const auto &val : q)
	 cout<<val<<" ";
	 cout<<"\n";

	 //repeat on intialization list
	 for (auto val : { 1, 2, 3, 4, 5 })
	 cout << val << " ";		// 1 2 3 4 5
	 cout << "\n";

	 //repeat on string char by char
	 for (auto val : "hello")
	 cout << val;		// hello
	 cout << "\n";
	 */

//*************************************************************** STL Vector ***************************************************
// vector is a dynamic array datastructure.How?
// the idea of the vector is to act like an array, but the point it's more dynamic, typically an array is fixed
//	(if you defined an array of hundred elements just 100 elements it will not be expanded)
//	but the idea behind a vector it acts like an array by it can epand in a very good way
//How vector is actually works ?
	/*

	 inside the vector there is an array of initial size, so let's call it int capacity

	 initial capacity = 200

	 let's say you push back 10 elements
	 now the size of the vector is 10, but the actual size of the vector in the memory is 200

	 let's say you push another 190 elemets
	 now the size of vector = capacity =200

	 let's add a new 20 elemets

	 the vector creates a new internal array with a greater size -> capacity = 400 , then the vector copy the old 200 elements and add the new 20 elemets
	 now the size is 220 and capacity is 400
	 */

	// some performance tips : you will only need these tips if you have really a hundred thound of data
	//1- if you know the actual size of the vector (e.g. you know you will need 1000000 number vector)
//	-> then create vector<int> (1000000) from the beginning
	//2- if you don't know what is the capacity you need -> call the function reserve
	//vector<int> v ; v.reserve(50000)
	// 1- How to push elements in a vector ?
	// print vector like printing an array : iterating on it element by element by its index
	/*
	 vector<int> v1;

	 v1.push_back(30);
	 v1.push_back(10);
	 v1.push_back(20);


	 for(int i=0;i<(int) v1.size(); ++i) {
	 cout<<v1[i]<<" ";
	 }
	 cout<<"\n";

	 //printing vector like an array with 5 numbers all intialized with 7

	 vector<int> v2(5,7);

	 //recomended way to iterate on a vector
	 for(auto &val:v2)
	 cout<<val<<" ";
	 cout<<"\n";

	 //printint a specefic element in a vector
	 cout<<v2.at(4);
	 */

//________________________________________________________________
	// How to erase elements from a vector ?
	/*
	 //it's better to avoid removing something from a datastructure like vector while iterating on it. why?

	 //let's try this : intialize a vector with intialization list and remove negative values from it

	 vector<int> v {3,-4,7,-2,-1,3,-5,10,3};


	 //let's remove negative values

	 //iterating while removing
	 for(auto it =v.begin() ; it!=v.end();) {

	 if(*it<0)
	 it=v.erase(it); // it points to the next element. don't increment it -> if the erase function return an iterator, u have to use it -> it actually retun the next element

	 else
	 ++it; // update only if the current element not removed
	 }

	 //iterating after removing
	 for(auto &val : v)
	 cout<<val<<" ";
	 */

//________________________________________________________________
	//How to insert elements into a vector
	/*
	 vector<int> v {3,-4,7,-2,-1,3,-5,10,3};

	 //iterate over the vector using iterators style

	 auto it = find(v.begin() , v.end() , -2);

	 if(it !=v.end()) {
	 vector<int> v2 {8,9,10};
	 v.insert(it,v2.begin(),v2.end());
	 }

	 for(auto &val : v)
	 cout<<val<<" ";
	 */

//________________________________________________________________
	//2D vector
//*************************************************************** STL Strings **************************************************
	//String datastructure functionalities
	/*

	 string test {"hi abc abc abc abc"};
	 cout << test.substr(3) << "\n";			// abc abc abc abc
	 cout << test.substr(3, 5) << "\n";		// abc a   // Fix (start_pos, length) NOT (start_pos, end_pos)

	 cout << test.find("abc") << "\n";		// 3

	 // starting the search at 6th character
	 cout << test.find("abc", 5) << "\n";	// 7

	 cout << "Mostafa at: " << test.find("Mostafa") << "\n";	// 18446744073709551615
	 cout << "Mostafa at: " << (int) test.find("Mostafa") << "\n";	// -1

	 //Functions that searches for a CHARACTER from a given string
	 cout << test.find_last_of("cab") << "\n";			// 17
	 cout << test.find_first_of("aic") << "\n";			// 1
	 cout << test.find_first_of("aic", 4) << "\n";		// 5
	 cout << test.find_first_not_of("aic") << "\n";		// 0

	 // replace from 4, 3 chars with x
	 test.replace(4, 3, "x");
	 cout<<test<<"\n";			// hi axabc abc abc
	 */

//*************************************************************** STL Algorithms ***********************************************
	// we discussed data structure , it's something that provides you a datamembers and member functions that help you to achieve some task like queue,vector, stack
	//there is also soemthing very intersting in STl named algorithms
	//algorithms is actually is a step by step procedure to achieve a specefic task
	//one of the important algorithms : Sorting
	/*
	 vector<int> v(5);

	 for (int i = 0; i < (int)v.size(); ++i)
	 v[i] = 10 - i;

	 for(auto x : v)
	 cout<<x<<" ";   // 10 9 8 7 6
	 cout<<"\n";

	 sort(v.begin()+1,v.end());

	 for(auto x : v)
	 cout<<x<<" ";   //10 6 7 8 9
	 cout<<"\n";

	 sort(v.begin(), v.end());	// sort from v[0] to v[size-1]
	 for(auto x : v)
	 cout<<x<<" ";   //10 6 7 8 9
	 cout<<"\n";

	 sort(v.rbegin(), v.rend());	// sort from v[0] to v[size-1]
	 for(auto x : v)
	 cout<<x<<" ";   //10 6 7 8 9
	 cout<<"\n";
	 */

	//one of the important algorithms : Reverse
	/*
	 vector<int> v(5);

	 for (int i = 0; i < (int)v.size(); ++i)
	 v[i] = 10 - i;

	 for(auto x : v)
	 cout<<x<<" ";	// 10 9 8 7 6

	 reverse(v.begin(), v.end());
	 for(auto x : v)
	 cout<<x<<" ";	// 6 7 8 9 10

	 v.clear();
	 for(auto x : v)
	 cout<<x<<" ";
	 */

//*************************************************************** STL Set ******************************************************
	// the set help us to maintain the objects sorted, the set is very similar to priority queue but it also provides much more stronger functionalities
//Set : ordered by default
	/*

	 //printing in a set
	 set<string> strset;
	 strset.insert("ziad");
	 strset.insert("mostafa");
	 strset.insert("mostafa");
	 strset.insert("mostafa");
	 strset.insert("mostafa");
	 strset.insert("ali");

	 for (string x : strset)
	 cout << x << " ";   // ali mostafa ziad ->  here it print only one "mostafa" -> in multiset it allows printing tripple mostafa as it is
	 cout << "\n";

	 //search for an element in  a set : slower
	 if(strset.count("mostafa"))
	 cout<<"yes\n";

	 //search for an element in a set and remove it : faster

	 set<string>::iterator it=strset.find("mostafa");
	 //	auto it = strset.find("mostafa";)

	 if(it != strset.end())
	 strset.erase(it);

	 for(string x:strset)
	 cout<<x<<" ";
	 */

//________________________________________________________________
//Multiset : the multiset is same as set but it allows duplicates
	/*
	 //printing in a set
	 multiset<string> strset;
	 strset.insert("ziad");
	 strset.insert("mostafa");
	 strset.insert("mostafa");
	 strset.insert("mostafa");
	 strset.insert("mostafa");
	 strset.insert("ali");

	 for (string x : strset)
	 cout << x << " ";   // ali mostafa ziad ->  here it print only one "mostafa" -> in multiset it allows printing tripple mostafa as it is
	 cout << "\n";

	 //search for an element in  a set : slower
	 if(strset.count("mostafa"))
	 cout<<"yes\n";

	 //search for an element in a set : faster

	 multiset<string>::iterator it=strset.find("mostafa");
	 //	auto it = strset.find("mostafa";)

	 if(it != strset.end())
	 strset.erase(it);

	 for(string x:strset)
	 cout<<x<<" ";
	 */

//________________________________________________________________
// compare srtuct data members using set
	/*
	 set<employee> s;

	 s.insert(employee(10,35,"mostafa"));
	 s.insert(employee(7,15,"ali"));
	 s.insert(employee(10,17,"ziad"));
	 s.insert(employee(10,20,"mostafa"));

	 for(auto emp : s)
	 cout<<emp.num1<<" "<<emp.str<<" "<<emp.num2<<"\n";
	 */

//*************************************************************** STL Unordered Set ********************************************
	// Unordered set : is very similar to the set but it doen't order elements for us
	/*
	 //printing

	 unordered_set<int> s1 {20,10,20,5,30};

	 s1.insert(7);
	 s1.insert(0);

	 for(auto v:s1)
	 cout<<v<<" ";
	 cout<<"\n";




	 // search

	 // If container has a method use it,
	 // 		as it considers the internal representation
	 auto it1 = s1.find(20);	// FAST
	 cout << *it1 << "\n";
	 //*it = 20;		// CAN'T change

	 // generic algorithms iterate in generic/same way.
	 // 		No idea about internal representation
	 auto it2 = find(s1.begin(), s1.end(), 20);	// SLOW
	 cout << *it2 << "\n";


	 //swap
	 int arr[] {20, 10, 20, 5, 30, 7, 0};
	 unordered_set<int> s2(arr, arr+3);

	 s1.swap(s2); // swapping operation: 0 7 30 5 10 20

	 //other functionalities

	 cout<<s1.size()<<"\n";	// 6
	 s1.erase(s1.begin());
	 cout<<s1.size()<<"\n";	// 5

	 //Hints
	 // No reverse iterator
	 // unordered_multiset: same but allows duplicates
	 // In general most operations are fast in an unordered set
	 // cause it Based on HashTable.
	 // In datastructures course you learn how to use efficiently

	 */

//*************************************************************** STL Map ******************************************************
	//remember when we like to access an array we access it with an index (int) .
	//what if i like to access with something more complex (double ,string) this where a map is come to help. you can think of map like a generiztion of array
/*
	map<string, int> mp; // array with index (not int)
	mp["mostafa"] = 10;
	mp["saad"] = 20;
	mp["mostafa"] = 30;
	mp["mostafa"] = 40;

	for (const pair<string, int> &item : mp)
		cout << item.first << "-" << item.second << " | ";
	cout << "\n";
*/


//*************************************************************** STL Notes *************************************************

	// 1- STL i just provide us with a very efficient data structures that are very common in use which we call them containers

	//2- Templates makes algorithms independant of the containers datatypes -> you don't care if the containers are strings or bunch of numbers
	//or user defined datatypes like employees. in very simple manner using templates, you can create a vector container of string , int , employee, etc...

	//3- the itterators are very generic interface -> they allow us to itterate on containers
	//(you don't care how these itterators happens behind the scenes actually its different from data structure to another)
	//	itterators make the algorithms independant of the the containers -> so, when using algorithms over the containers all what we need
	//is to move to the next and and next and next (itterating). how this moving done we don't care

	//Hint : there is something in algorithms named Complexity : it's all about how fast the algorithms is in different data structures like array, vector,...

	//4- Speed is different between datastructures. How?

	//-> Vector , Queue , Deque are very fast by their default implementations
	// -> unordered set is also fast but not like them.

	//any erase or find operation is typically slow in data structures
	//---> unordered set is the fastest when it comes to erase and find operations


	//Set < Multiset , Map are very slow data structures if they are comparable with Vector for exaple. Don't use them unless good reason

	//5- In Practice :

	//Vector is one of the most used datastructures
	   //-> initialize with capacity if possible. push back is slow

	//Set / Map are coming in use after Vector

	//Set can do what priority queue done but opposite is not


//*************************************************************** STL Homework ******************************************************
// STL Homework 1 : easy to medium
// STL Homework 2 : Hard
	return 0;
}

