//Project Description

//overall perspective

/*
 ● Many libraries have a library system
 ○ Helps adding books and searching for them
 ○ Maintains information about the borrowed books
 ● We will create a simple version of this classical systems
 ● The main user for the system is an admin
 ○ Who might add a book, user or perform some relevant operation
 ○ You don’t need to provide login/logout functionalities in this console system
 ● The system starts with a menu
 ○ It shows all possible choices in a menu like

 1) add new book
 2) search books by prefix
 3) list who borrowed book by name
 4) list books by id
 5) list books by name
 6) add new user
 7) user borrow book
 8) user return book
 9) list users
 10) Exit

 ○ The admin selects a choice.
 ■ Some operation is performed
 ○ Then the main menu is listed again
 */

//_____________________________
//Book operations : adding a book
/*
 ● Every system needs data. The core data here is the book and users
 ● The admin needs to be able to add books
 ● Each book has the following information
 ○ id (integer) - name - quantity
 ○ Example: 101, CppHowToProgram, 7
 ■ We have 7 copies for book CppHowToProgram (no spaces)
 ■ The book ID is 101
 ● In real projects: our code typically generates the IDs
 */

//Books operations : searching for a book
/*
 ● Searching your database of books is a typical operation
 ● We will search the system using book name.
 ● Instead of the complete book name, we will allow a prefix
 ○ Prefix: The first letters of a word
 ● Assume we have 3 books in the system, their names:
 ○ CppHowToProgram, CppForDummies, CppForAdvancedLevels, CoreJava
 ● Query
 ○ Cpp ⇒ CppHowToProgram, CppForDummies, CppForAdvancedLevels
 ○ CppFo ⇒ CppForDummies, CppForAdvancedLevels
 ○ Core ⇒ CoreJava
 ○ Java ⇒ Nothing
 */

//Book operations : Listing books
/*
 ● Another typical operations is to just list all books in the system
 ○ But we can order data in several ways!
 ● We will allow sorted either based on IDs or Names
 ● Assume entered books were
 ○ ID: 1111, Name: Math1
 ○ ID: 5041, Name: ArabicLiterature
 ○ ID: 1011, Name: Math2
 ● Sorting by name ⇒ ArabicLiterature, Math1, Math2
 ● Sorting by ID ⇒ Math2, Math1, ArabicLiterature
 */

//Book operations : Listing users borrowed a book
/*
 ● Given that several users may borrow a book, the admins may want to know
 who borrowed what. Remember we have several copies per book.
 ● Input: Book Name
 ○ E.g. Math1
 ● Output: list of the user names who borrowed the book
 ○ E.g. Mostafa, John, Mark, Ali
 */

//_____________________________
//User operations : adding a user
/*
 ● Each user has only an Id(integer) and name
 ○ Feel free to add more
 ● We only request 2 operations
 ○ Borrowing a book
 ○ Returning a book
 ● Feel free to add more features
 ○ List the system users, ordered by name or ID
 ○ List borrowed book of a specific user
 ○ Add more info about user: email & address
 */
//_____________________________
//user operation : borrowing a book
/*
 ● Borrowing books is a repetitive scenario in libraries
 ● Each book already have a specific number of copies (the quantity)
 ● To borrow a book, this quantity must be > 0
 ○ Otherwise, this book can’t be borrowed
 ● After borrowing, the quantity must be decreased
 ● The admin enters the user name and the book name
 ○ If there is enough quantity of the book, the system does the following:
 ■ Mark that this user borrowed a copy
 ■ Decrease the quantity with 1
 ○ If there is no available copies, the system notifies the admin
 */

//User operations : returning a book
/*
 User Operation: Return a book
 ● Same logic, but this time the system do the reverse:
 ○ Mark that the user returned a copy
 ○ Increment the current quantity
 ● Note
 ○ Anytime we try to list the system books, overall data should be correct and proper
 */

#include <iostream>
#include <algorithm>
#include<assert.h>
using namespace std;

const int MAX_USERS = 10;
const int MAX_BOOKS = 10;

struct book {

	//member data
	string book_name;
	int book_id;
	int total_quantity;
	int total_borrowed;
	//member functions

	book() {
		book_name = " ";
		book_id = 000;
		total_quantity = 0;
		total_borrowed = 0;
	}

	void read_book_info() {
		cout << "\nEnter book Name: ";
		cin >> book_name;
		cout << "Enter book ID: ";
		cin >> book_id;
		cout << "Enter no.of book Copies:";
		cin >> total_quantity;
	}

	void print_book_info() {
		cout << "\n -> Book name: " << book_name << " -> ID: " << book_id
				<< " -> Quantity: " << total_quantity << " copies."
				<< " -> Total borrowed: " << total_borrowed << " copies.";
		if (total_quantity == total_borrowed)
			cout << "(not available!)";
		cout << "\n";
	}

	//searching algirithm : substring of a big string

	bool is_substring(string &substring) {

		if (substring.size() > book_name.size()) // prefix name greater than book name
			return false;

		for (int i = 0; i < (int) book_name.size() - (int) substring.size() + 1;
				i++) {

			bool is_match = true;

			for (int j = 0; j < (int) substring.size() && is_match; j++) {
				if (substring[j] != book_name[i + j])
					is_match = false;
			}
			if (is_match)
				return true;
		}
		return false;
	}

	//borrow and return functionalities
	bool user_borrow_copy(int user_id) {

		if (total_quantity - total_borrowed == 0)
			return false;

		total_borrowed++; //here
		return true;
	}
	void user_return_copy() {

		assert(total_borrowed > 0); //total borrowed must be greater than zero. if not assertion failed

		total_borrowed--;
	}

};

bool compare_books_by_id(book &a, book &b) {
	return a.book_id < b.book_id;
}
bool compare_books_by_name(book &a, book &b) {
	return a.book_name < b.book_name;
}

struct user {

	string user_name;
	int user_id;
	int borrowed_books_ids[MAX_BOOKS];
	int len;

	user() {
		user_name = "";
		user_id = 000;
		len = 0;
	}

	void read_user_info() {
		cout << "\nEnter user Name:";
		cin >> user_name;
		cout << "Enter user National ID:";
		cin >> user_id;
	}

	void print_user_info() {

		sort(borrowed_books_ids, borrowed_books_ids + len);

		cout << "\n-> user name : " << user_name << " -> ID: " << user_id
				<< " -> Borrowed books IDs: ";

		for (int i = 0; i < len; i++) {

			cout << borrowed_books_ids[i] << " ";

		}
		if (len == 0)
			cout << "(No borrowed copies)";
		cout << "\n";

	}

	void borrow_copy(int book_id) {
		borrowed_books_ids[len++] = book_id;
	}
	void return_copy(int book_id) {

		bool removed = false; //first element still not removed

		for (int i = 0; i < len; i++) {

			if (borrowed_books_ids[i] == book_id)
				for (int j = i + 1; j < len; j++) //left shift to remove the first element in the borrowed books array
					borrowed_books_ids[j - 1] = borrowed_books_ids[i];
			removed = true; //first element removed sucessfully
			len--; //decrease total books by one
			break;
		}
	}

	bool is_borrowed(int book_id) {
		for (int i = 0; i < len; i++) {
			if (book_id == borrowed_books_ids[i])
				return true;
		}
		return false;
	}

};

bool compare_users_by_id(user &a, user &b) {
	return a.user_id < b.user_id;
}
bool compare_users_by_name(user &a, user &b) {
	return a.user_name < b.user_name;
}

struct library_system {

	book books[MAX_BOOKS];
	int total_books = 0; //counter

	user users[MAX_USERS];
	int total_users = 0;

	void run() {
		int main_choice = main_menu();

		if (main_choice == 3)
			return; //here

		while (main_choice == 1) {

			int admin_choice = admin_menu();

			if (admin_choice == 1)
				add_new_book();
			else if (admin_choice == 2)
				add_new_user();
			else if (admin_choice == 3)
				search_books();
			else if (admin_choice == 4)
				list_books_by_id();
			else if (admin_choice == 5)
				list_books_by_name();
			else if (admin_choice == 6)
				list_users_by_id();
			else if (admin_choice == 7)
				list_users_by_name();
			else if (admin_choice == 8)
				list_users_borrowed_specific_book();
			else if (admin_choice == 9) {
				run();
				main_choice = 3;
			} else
				break;

		}

		while (main_choice == 2) {

			int user_choice = user_menu();

			if (user_choice == 1)
				search_books();
			else if (user_choice == 2)
				borrow_book();
			else if (user_choice == 3)
				return_book();
			else if (user_choice == 4) {
				run();
				main_choice = 3;
			} else
				break;
		}
	}

	int main_menu() {

		int choice = -1;
		while (choice == -1) {
			cout << "\n1) Admin Dashboard\n"
					"2) User Dashboard\n"
					"3) Exit\n"
					"Enter your choice: ";
			cin >> choice;

			if (!(1 <= choice && choice <= 3)) {
				cout << "\ninvalid choice. Try again!\n";
				choice = -1;
			}

		}
		return choice;
	}
	int admin_menu() {
		int choice = -1;

		while (choice == -1) {
			cout << "\n1) Add new book\n"
					"2) Add new user\n"
					"3) Search books\n"
					"4) List books ordered by id\n"
					"5) List books ordered by name\n"
					"6) List users ordered by id\n"
					"7) List users ordered by name\n"
					"8) List users borrowed a specific book\n"
					"9) Back\n"
					"10)Exit\n"
					"Enter your choice:";
			cin >> choice;

			if (!(1 <= choice && choice <= 10)) {
				cout << "\nInvalid choice. Try again!\n";
				choice = -1;
			}

		}

		return choice;
	}
	int user_menu() {
		int choice = -1;

		while (choice == -1) {
			cout << "\n1) Borrow book\n"
					"2) Return book\n"
					"3) Search books\n"
					"4) Back\n"
					"5) Exit\n"

					"Enter your choice:";
			cin >> choice;

			if (!(1 <= choice && choice <= 6)) {
				cout << "\ninvalid choice. Try again!\n";
				choice=-1;
			}

		}
		return choice;
	}

//admin options

	void add_new_book() {
		books[total_books++].read_book_info();
	}

	void search_books() {

		//test case: algorithms -> prefix :algo
		cout << "\nEnter book name :";
		string substring;
		cin >> substring;

		int cnt = 0; // if counter doesn't increase then there is no book with such name
		for (int i = 0; i < total_books; i++) {
			if (books[i].is_substring(substring)) {
				cout << "\n" << books[i].book_name << "\n";
				cnt++;
			}

		}

		if (!cnt)
			cout << "\nNo book with such name\n";

	}

	void list_books_by_id() {

		sort(books, books + total_books, compare_books_by_id); //descending order according to IDs : 101 < 202

		if (total_books == 0)
			cout << "\nNo books yet. Add some!\n";
		if (total_books == 1)
			cout << "\nThere is only one book in the library\n";

		if (total_books >= 2) //here --> max books number
			cout << "\nThere are " << total_books << " books in the library\n";

		for (int i = 0; i < total_books; i++)
			books[i].print_book_info();
		cout << "\n";
	}

	void list_books_by_name() {

		sort(books, books + total_books, compare_books_by_name); //descending order according to names : a < b , b < c(ASCII)

		if (total_books == 0)
			cout << "\nNo books yet. Add some!\n";
		if (total_books == 1)
			cout << "\nThere is only one book in the library\n";

		if (total_books >= 2) //here --> max books number
			cout << "\nThere are " << total_books << " books in the library\n";

		for (int i = 0; i < total_books; i++)
			books[i].print_book_info();
		cout << "\n";
	}

	void add_new_user() {
		users[total_users++].read_user_info();
	}

	void list_users_by_id() {

		sort(users, users + total_users, compare_users_by_id);

		for (int i = 0; i < total_users; i++)
			users[i].print_user_info();
		cout << "\n";
	}
	void list_users_by_name() {

		sort(users, users + total_users, compare_users_by_name);

		for (int i = 0; i < total_users; i++)
			users[i].print_user_info();
		cout << "\n";
	}

	void list_users_borrowed_specific_book() {

		string book_name;
		cout << "\nEnter book name: ";
		cin >> book_name;

		//check if book name valid or not
		int book_idx = find_book_id_by_book_name(book_name);
		if (book_idx == -1) {
			cout << "\ninvalid book name. try again!\n";
			return;
		}
		//check if there is borrowed copies from a specific book
		if (books[book_idx].total_borrowed == 0) {
			cout << "\nNo borrowed copies yet!\n";
			return;
		}

		//print users borrowed a specific book
		int book_id = books[book_idx].book_id;

		if (book_id >= 0)
			cout << "\nBook has been borrowed by:\n";

		for (int i = 0; i < total_users; i++)
			if (users[i].is_borrowed(book_id))
				cout << "User Name: " << users[i].user_name << " User ID: "
						<< users[i].user_id << "\n";
	}

//user options

	//borrow and return functionalities

	int find_user_id_by_user_name(string user_name) {

		for (int i = 0; i < total_users; i++)
			if (users[i].user_name == user_name)
				return i;

		return -1;
	}
	int find_book_id_by_book_name(string book_name) {

		for (int i = 0; i < total_books; i++)
			if (books[i].book_name == book_name)
				return i;

		return -1;
	}

	bool read_user_name_and_book_name(int &user_id, int &book_id,
			int trails = 3) {

		string user_name, book_name;

		while (trails--) {

			cout << "\nEnter user name and book name: ";
			cin >> user_name >> book_name;

			user_id = find_user_id_by_user_name(user_name);

			if (user_id == -1) {
				cout << "\ninvalid_user_name. try again!\n";
				continue;
			}

			book_id = find_book_id_by_book_name(book_name);

			if (book_id == -1) {
				cout << "\ninvalid book name. try again!\n";
				continue;
			}
			return true;

		}
		cout << "\nyou do several trails. try again later!\n";
		return false;
	}

	void borrow_book() {

		int user_idx, book_idx;

		if (!read_user_name_and_book_name(user_idx, book_idx))
			return;

		int user_id = users[user_idx].user_id;
		int book_id = books[book_idx].book_id;

		if (!books[book_idx].user_borrow_copy(user_id)) //increase total borrowed books by 1
				{
			cout << "\nNo more available copies from book with name "
					<< books[book_idx].book_name
					<< ". you can search for another one!\n";

		} else {
			users[user_idx].borrow_copy(book_id);
			cout << "\nBook borrowed sucessfully\n";
		}
	}

	void return_book() {
		int user_idx, book_idx;

		read_user_name_and_book_name(user_idx, book_idx);

		int book_id = books[book_idx].book_id;

		books[book_idx].user_return_copy(); // decrease total borrowed books by 1
		users[user_idx].return_copy(book_id);
		cout << "\n Book returned sucessfully\n";
	}

};

int main() {
	library_system library;
	library.run();

	return 0;

}

