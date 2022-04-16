//============================================================================
// Author      : Eslam ELkhair
// Version     :
// Copyright   : @elkhair's
// Description : Structures in C++, Ansi-style
//============================================================================

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

//************************************************************** Structures 1 ******************************************************
/*// Recall the Employee System : Each Employee has Name , Age , Salary , Gender
//so We have to define 4 Arrays as below
 * const int Max = 1000;
 * string Name [Max]
 * int ages[Max]
 * double salaries [Max]
 * char gender [Max]
 *
 * int added = 0;  --> number of employees added
 *

// But using Structures we can collect all variables from different data types in one struct as Below
 struct employee
 {
	string name ;
	int age ;
	double salary;
	char gender;
};

// and also we defined only one array for all employee attributes
 const int MAX = 10000;
 employee employee_arr[MAX];
 int added = 0;	// Number of employees

void read_employee(){

	cout<<"Enter employee 4 attributes : ";
	cin>>employee_arr[added].name>>employee_arr[added].age
	   >>employee_arr[added].salary>>employee_arr[added].gender;

	added++;
}

void print_employee(){

	for(int i =0 ; i<added ;++i )
	{
		cout<<employee_arr[i].name<<endl;
		cout<<employee_arr[i].age<<endl;
		cout<<employee_arr[i].salary<<endl;
		cout<<employee_arr[i].gender<<endl;
	}
}

*/


//************************************************************** Structures 2 ******************************************************

//we can use functions inside struct

/*
struct employee {

	string name ;
	int age ;
	double salary;
	char gender;

	void read_employee()
	{
		cout<<"Enter Employee name : ";
		cin>>name;
		cout<<"Enter Employee age : ";
		cin>>age;
		cout<<"Enter Employee salary : ";
		cin>>salary;
		cout<<"Enter Employee Gender : ";
		cin>>gender;
	}

	void print_employee()
	{
		cout<<name<<" with age "<< age <<" is  ("<<gender <<") with Salary "<<salary<<endl;
	}

};

const int MAX = 10000;
employee employee_arr[MAX];
int added =0; // counter

void print_employees()
{
	cout<<"---------------------------------------"<<endl;
	for(int i =0 ;i<added;++i)
		employee_arr[i].print_employee();
	cout<<"---------------------------------------"<<endl;
}
*/

//_________________________________________________________________

/*
//We can compare functions with struct parameters
bool compare_name ( employee &a , employee &b)
{
	return a.name < b.name ;   // if first name is smaller true , else False
}
bool compare_salaries(employee &a , employee &b)
{
	return a.salary > b.salary;  // if first salary is bigger true , else false
}
bool compare_name_salary(employee &a , employee &b)
{
	//return true if the first employee has a smaller name of a smaller salary else false
	if(a.name != b.name)
		return a.name < b.name;

	return a.salary<b.salary;
}
*/


//_________________________________________________________________
//Structure of Structure of Structure ....
/*struct full_name{

	string full_name;

	void read_full_name()
	{
		cout<<"Enter full Name :";
		getline(cin, full_name);
	}

};*/

/*
struct __employee{
	full_name emp_name;
	int age ;
	double salary;

	void read()
	{
		emp_name.read_full_name();
		cout<<"Enter age :";
		cin>>age;
		cout<<"Enter salary :";
		cin>>salary;
	}

	void print()
	{
		cout<<emp_name.full_name<<" with age "<<age<<" takes salary "<<salary<<" EGP."<<endl;
	}
};

// Constructor :  a function in the struct doesn't have a return type and called only during the creation of the object (struct instance)
struct person_name{
	string first,middle,last;

	//Empty Constructor
	person_name(){
		first=middle=last="";
	}

	//initialization constructor
	person_name(string _first ="a", string _middle ="b",string _last="c"){
		first = _first;
		middle=_middle;
		last=_last;
	}

};
*/

//************************************************************** Quiz ******************************************************

//1-
//struct Employee {
//void print() {
	//cout<<"Hello\n";}
//};
//_________________________________________________

//2-
/*
struct Employee {
	string name;
};

struct Manager {
	int mgr_id;
	Employee employees[10];
	int idx = 0;

	void AddEmployee(Employee e) {
		employees[idx++] = e;
	}
};
*/
//_________________________________________________

//3-
/*
struct Employee {
	string name;
};

struct Manager {
	int mgr_id;
	Employee employees[10];
	int idx = 0;

	void AddEmployee(Employee e) {
		employees[idx++] = e;
	}
};
*/
//_________________________________________________

/*
struct Employee {
	int num = 0;
	string name;
};

struct Manager {
	int mgr_id;
	Employee employees[10];
	int idx = 0;

	void AddEmployee(Employee &e) {
		e.num++;
		employees[idx] = e;
		employees[idx].name = "mostafa";
		++idx;
	}
};
*/
//_________________________________________________

/*
bool cmp(int x, int y) {
	if(x > y)
		return true;
	return false;
}
*/

//________________________________________________
/*
struct Address {
	string street_name;
	int building_number = -1;
	int apartment_number = -1;

	Address() {}
	Address(string street_name_, int building_number_, int apartment_number_) {
		street_name = street_name_, building_number = building_number_;
		apartment_number = apartment_number_;
	}
};

struct Stduent {
	string name;
	int id = -1;
	Address address;

	Stduent() {}
	Stduent(string name_, int id_, Address address_) {
		name = name_, id = id_, address = address_;
	}

	void print() {
		cout << name << " " << id << " " << address.street_name
				<< " " << address.building_number << " "
				<< address.apartment_number << "\n";
	}
};

bool cmp_Address(Address& first, Address& second) {
	if (first.street_name != second.street_name)
		return first.street_name < second.street_name;

	if (first.building_number != second.building_number)
		return first.building_number < second.building_number;

	return first.apartment_number < second.apartment_number;
}

bool cmp_Student(Stduent& first, Stduent& second) {
	if (first.name != second.name)
		return first.name < second.name;

	if (first.id != second.id)
		return first.id < second.id;

	return cmp_Address(first.address, second.address);
}
*/

int main_8_0() {

//Using Functions inside Structures
/*
 employee_arr[added++].read_employee();
print_employees();
cout<<"Added = "<<added<<endl;

cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

employee_arr[added++].read_employee();
print_employees();
cout<<"Added = "<<added<<endl;

cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
*/



//Compare : We can write functions that compare structs
/*
 * 	employee a ={"eso" , 20 , 1200 , 'M'};
	employee b = {"sola", 30 , 1300 , 'F'};

	cout<<compare_name(a,b)<<endl;  // true
	cout<<compare_salaries(a,b)<<endl; // false
	cout<<compare_name_salary(a,b)<<endl; //true

	employee c = {"solllooooom" } ;
	cout<<compare_name(a,c)<<endl;
 * */

// Sorting arrays
/*
 * 	int arr[5]={4,2,5,1,3};
	sort(arr, arr + 5);

	for(int i =0 ; i <5;++i)
	cout<<arr[i];
	cout<<endl;
cout<<"*************************"<<endl;

employee_arr[added++].read_employee();
employee_arr[added++].read_employee();

sort(employee_arr, employee_arr + added, compare_name);      //smaller-named employee printed first
print_employees();

sort(employee_arr, employee_arr + added, compare_salaries);  // bigger-salaried employee printed first
print_employees();

sort(employee_arr, employee_arr + added, compare_name_salary);
print_employees();
 *
 */


//Structure of Structure of Structure ....
/*
 * __employee first;
first.read();
first.print();
 *
 */

//constructor of structure
/*
 * person_name my_name("eslam","abaas","fekhair");
cout<<my_name.first<<" "<<my_name.middle<<" "<<my_name.last<<endl;
 *
 */

//************************************************************** Quiz ******************************************************

//1-
//You can define a struct without data members.
//Employee().print(); is creating a temporary object (no name) and calling a member function.
	//Employee e;
	//e.print();

	//Employee().print();

//2-
/*
	Employee e;
		e.name = "ali";

		Manager mgr;
		mgr.AddEmployee(e);
		mgr.AddEmployee(e);
		mgr.AddEmployee(e);

		cout<<mgr.idx;
*/

//3-
/*
	Employee e;
		e.name = "ali";

		Manager mgr;
		mgr.AddEmployee(e); //idx =1
		mgr.AddEmployee(e); //idx =2
		mgr.AddEmployee(e); //idx =3

		mgr.mgr_id = 10;

		Manager managers[7];

		managers[0] = mgr;
		mgr.mgr_id = 77;

		cout<<managers[0].mgr_id<<endl;
		cout<<mgr.mgr_id<<endl;
*/

//4-
/*
	Employee e;
	e.name = "belal";

	Manager mgr;
	mgr.AddEmployee(e);
	mgr.AddEmployee(e);
	mgr.AddEmployee(e);

	cout << e.name << " " << e.num;
 */

//5-
	/*
	int arr[] { 6, 1, 5, 3, 7 };

	sort(arr, arr + 5);

	for (int i = 0; i < 5; ++i)
		cout << arr[i]<<" ";
*/

//6-
/*
	int arr[] { 6, 1, 5, 3, 7 };

		sort(arr, arr + 3);

		for (int i = 0; i < 5; ++i)
			cout << arr[i]<<" ";
*/

/*
//7-
	int arr[] { 6, 1, 5, 3, 7 };

		sort(arr, arr + 5, cmp);

		for (int i = 0; i < 5; ++i)
			cout << arr[i]<<" ";
*/



	return 0;
}




