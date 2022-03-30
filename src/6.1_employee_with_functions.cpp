//============================================================================
// Name        : Employee.cpp
// Author      : Eslam Elkhair
// Version     : v2
// Copyright   : @Elkhair's
// Description : employee program using functions in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Global Variables
const int Max = 1000;
string names[Max] ;
int ages[Max] ;
double salaries[Max];
char genders[Max] ;
int Added=0;


int menu ()
{
	int choice = -1 ;

	while (choice == -1)
	{
	    cout<<"Enter your choice :" <<endl;
		cout<<"1) Add new employee"<<endl;
		cout<<"2) Print all employees"<<endl;
		cout<<"3) Delete by age"<<endl;
		cout<<"4) Update salary by name"<<endl;
		cout<<"5) Exit "<<endl;

		cin>>choice ;

		if( !(choice >=1 && choice <=5) )
		{
			cout<<"invalid choice. Try again"<<endl;
			continue;
		}
	}
	return choice;
}

void add_new ()
{
	cout<<"Enter name :";
	cin>>names[Added];

	cout<<"Enter age :";
	cin>>ages[Added] ;

	cout<<"Enter salary :";
	cin>>salaries[Added];

	cout<<"Enter gender (m/f) :";
	cin>>genders[Added];

	Added++;  // for every employee added to the system we increase one

	cout<<"***********************************************"<<endl;

}

void list_employees()
{
	for(int i=0;i<Added;i++)
	{
		if (ages[i] != -1)   /// related to the block of Delete by age --> if age of any employee = -1 , delete him from the system
			cout<<names[i]<<" "<<ages[i]<<" "<<salaries[i]<<" "<<genders[i]<<endl;
	}

	cout<<"***********************************************"<<endl;
}

void delete_by_age ()
{
	cout<<"Enter start and end age"<<endl;
	int start_age,end_age;
	cin>>start_age>>end_age;

	for (int i =0; i<Added ;i++)
	{
		if(start_age<=ages[i] && ages[i]<=end_age){
			cout<<names[i]<<" Deleted"<<endl;
			ages[i] = -1;// Let's mark a removed entry with -1 (lazy delete)
		}
		else
			cout<<"No employees in this range"<<endl;
	}

	cout<<"***********************************************"<<endl;
}

void update_salary()
{
	cout<<"Enter name and new salary "<<endl;
	string name ;
	double new_salary;
	cin>>name>>new_salary ;

	bool is_found =0;
	for(int i =0;i<Added ;i++)
	{
		if(ages[i] != -1 && names[i]==name)
		{
			is_found =1;
			salaries[i]=new_salary;
		}
	}
	if(!is_found)
		cout<<"No employee with this name"<<endl;

	cout<<"***********************************************"<<endl;
}

void employee_system ()
{
	while(true)
	{
		int choice  =  menu();

		if(choice == 1)
			add_new();
		else if (choice == 2)
			list_employees();
		else if (choice == 3)
			delete_by_age();
		else if (choice == 4)
			update_salary();
		else
			break;

	}

}

int main_6_1() {

//employee_system ();

	return 0;
}



