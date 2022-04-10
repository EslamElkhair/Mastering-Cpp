/*
 * 5.1_employee.cpp
 *
 *  Created on: Mar 30, 2022
 *      Author: eslamelkhair
 */

#include<iostream>
using namespace std;


int main_5_1 () {
	//******************************************************************** Homework 3 : Employee Program ************************************************************************
		/*
		 Help our factory in managing his employees. Create a program that does the following:

		 ○ Display the following choices:

		 ■ Enter your choice:
		 ■ 1) Add new employee
		 ■ 2) Print all employees
		 ■ 3) Delete by age
		 ■ 4) Update Salary by name

		 ○ You will keep the program running forever. Display the choices and user input from 1 to 4

		 ● For choice 1: Allow the manager to enter information of an employee

		 ○ Ask user to input: Name, Age, Salary and Gender letter
		 ○ Add the information to your database --> which is your internal memory for now --> later

		 ● For choice 2: Print(list) all employees. Line per employee

		 ● For choice 3: User enter two values, start age and end age

		 ○ Find all employees with: start_age <= age <= end_age and remove them

		 ● For choice 4: User enter name, then new salary

		 ○ Find the employee and update his salary
		 */

		/*
		 // we need some storage for our data i make the program can only store 1000 of names , ages , salaries , genders
		 const int Max = 1000;
		 string names[Max] ;
		 int ages[Max] ;
		 double salaries[Max];
		 char genders[Max] ;
		 int employeesAdded=0;

		 while (true)    // --> while loop that make the program working forever
		 {

		 int choice = -1 ;

		 cout<<"Enter your choice :" <<endl;
		 cout<<"1) Add new employee"<<endl;
		 cout<<"2) Print all employees"<<endl;
		 cout<<"3) Delete by age"<<endl;
		 cout<<"4) Update salary by name"<<endl;

		 cin>>choice ;

		 if (cin.fail()) 	break;    //--> simple check if the user input is valid , if not stop

		 if( !(choice >=1 && choice <=4) )  //--> simple check if the input in the range of 1 and 4
		 {
		 cout<<"invalid choice. Try again"<<endl;
		 continue;
		 }


		 //Block: add new employee
		 if(choice == 1)
		 {
		 cout<<"Enter name :";
		 cin>>names[employeesAdded];

		 cout<<"Enter age :";
		 cin>>ages[employeesAdded] ;

		 cout<<"Enter salary :";
		 cin>>salaries[employeesAdded];

		 cout<<"Enter gender (m/f) :";
		 cin>>genders[employeesAdded];

		 employeesAdded++; // for every employee you enter , increase one to the system

		 cout<<"**********************************"<<endl;
		 }

		 //Block: list all employees
		 else if (choice == 2)
		 {
		 for(int i=0;i<employeesAdded;i++)
		 {
		 if (ages[i] != -1)   /// related to the block of Delete by age --> if age of any employee = -1 , delete him from the system
		 cout<<names[i]<<" "<<ages[i]<<" "<<salaries[i]<<" "<<genders[i]<<endl;
		 }

		 cout<<"**********************************"<<endl;
		 }

		 //Block: Delete by age
		 else if (choice ==3)
		 {
		 cout<<"Enter start and end age"<<endl;
		 int start_age,end_age;
		 cin>>start_age>>end_age;

		 for (int i =0; i<employeesAdded ;i++)
		 {
		 if(start_age<=ages[i] && ages[i]<=end_age)
		 {
		 cout<<names[i]<<" Deleted"<<endl;
		 ages[i] = -1;// Let's mark a removed entry with -1 (lazy delete)
		 }
		 else if( !(start_age<=ages[i] && ages[i]<=end_age) )
		 {
		 cout<<"No employees in this range"<<endl;
		 }
		 }
		 cout<<"**********************************"<<endl;
		 }

		 //Block: Update Salary by name
		 else if (choice == 4)
		 {
		 cout<<"Enter name and salary "<<endl;
		 string name ;
		 double new_salary;
		 cin>>name>>new_salary ;

		 bool is_found =0;
		 for(int i =0;i<employeesAdded ;i++)
		 {
		 if(ages[i] != -1 && names[i]==name)
		 {
		 is_found =1;
		 salaries[i]=new_salary;
		 }
		 }
		 if(!is_found)
		 cout<<"No employee with this name"<<endl;

		 cout<<"**********************************"<<endl;
		 }*/
		/*
		 const int max_employees { 1000 };
		 string name[max_employees] { "eso" };
		 int age[max_employees] { 0 };
		 double salary[max_employees] { 0.0 };
		 char gender[max_employees] { 'm' };
		 int added { 0 };
		 while (1) {
		 int choice = -1;

		 cout << "\n1) Add new employee\n"
		 "2) Print all employees\n"
		 "3) Delete by age\n"
		 "4) Update Salary by name\n"
		 "Enter your choice: ";
		 cin >> choice;

		 if (cin.fail()) {
		 cout << "Program failed. close and Restart";
		 break;
		 }

		 if (choice < 1 || choice > 4) {
		 cout << "Invalid choice. Try again\n";
		 continue;
		 }

		 if (choice == 1) {
		 cout << "Enter name: ";
		 cin >> name[added];

		 cout << "Enter age: ";
		 cin >> age[added];

		 cout << "Enter salary: ";
		 cin >> salary[added];

		 cout << "Enter gender (M/F): ";
		 cin >> gender[added];
		 added++;

		 }

		 if (choice == 2) {

		 for (int i = 0; i < added; i++) {
		 if (age[i] != -1) {
		 cout << "-> name: " << name[i] << "| age: " << age[i]
		 << "| salary: " << salary[i] << "| gender: "
		 << gender[i] << "\n";
		 }

		 }

		 }

		 if (choice == 3) {
		 int start_age, end_age;
		 cout << "\nEnter start and end age: ";
		 cin >> start_age >> end_age;

		 for (int i = 0; i < added; i++)
		 if (age[i] > start_age && age[i] < end_age)
		 age[i] = -1;
		 }

		 if (choice == 4) {

		 cout << "\nEnter name and salary: ";
		 int updated_salary;
		 string employee_name;
		 cin >> employee_name >> updated_salary;

		 bool is_found = 0;
		 for (int i = 0; i < added; i++)
		 if (name[i] == employee_name && age[i] != -1) {
		 is_found = 1;
		 salary[i] = updated_salary;
		 }
		 if(is_found==0)
		 cout<<"No employee with such name!\a";

		 }

		 }*/



	return 0;
}


