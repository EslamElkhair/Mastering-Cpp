/*#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

const int MAX_SPEC = 20;
const int MAX_PLACES = 5;

struct hospital_queue {

	//Data Members
	string names[MAX_PLACES];
	int status[MAX_PLACES];
	int current_place; //counter
	int spec;

	hospital_queue() {
		current_place = 0;
		spec = -1;
	}
	hospital_queue(int _spec) {
		current_place = 0;
		spec = _spec;
	}

	//Member Functions

	//normal adding
	bool add_end(string patient_name, int patient_status) {
		if (current_place == MAX_PLACES)
			return false;
		names[current_place] = patient_name;
		status[current_place] = patient_status;
		current_place++;
		return true;
	}

	//right-shifted adding
	bool add_front(string patient_name, int patient_status) {

		if (current_place == MAX_PLACES)
			return 0;

		//shift right
		for (int i = current_place - 1; i >= 0; --i) {
			names[i + 1] = names[i];
			status[i + 1] = status[i];
		}
		names[0] = patient_name;
		status[0] = patient_status;
		current_place++;
		return true;
	}

	//left-shifted adding
	void remove_front() {

		if(current_place==0) {
            cout<<"\nNo patients at the moment\n";
            return;
		}

		cout << "\n" << names[0] << " ,Please go with the doctor\n";

		//shift left
		for (int i = 1; i < current_place; i++) {
			names[i - 1] = names[i];
			status[i - 1] = status[i];
		}
		current_place--;
	}

	void print() {
		if (current_place == 0)
			return;

		if (current_place == 1)
			cout << "\nThere is only " << current_place << " patients in Spectialization "
					<< spec << " :\n";
		if (current_place >= 2)
			cout << "\nThere are " << current_place << " patients in spectialization "
					<< spec << " :\n";
		for (int i = 0; i < current_place; i++) {
			cout << names[i] << " -> ";
			if (status[i] == 1)
				cout << "urgent\n";
			else
				cout << "regular\n";
		}
		cout << "\n";
	}

};

struct hospital_system {

	//Data Members
	hospital_queue queues[MAX_SPEC + 1]; //instance of type array from struct. 5-members queue for every spectialization starting from spec 1 (Hint: +1 cause array is zero based )

	hospital_system() {

		for (int i = 0; i < MAX_SPEC; ++i)
			queues[i] = hospital_queue(i);
	}

	//Member Functions

	void run() {
		while (true) {
			int choice = menu();

			if (choice == 1)
				add_patient();
			else if (choice == 2)
				list_patients();
			else if (choice == 3)
				pick_patient();
			else
				break;

		}

	}

	int menu() {

		int choice = -1;
		while (choice == -1) {

			cout << "\n1) add new patient\n"
					"2) print all patients\n"
					"3) get next patient\n"
					"4) Exit\n"
					"Enter your choice:";
			cin >> choice;

			if (cin.fail())
				break;

			if (!(1 <= choice && choice <= 4)) {
				cout << "\nInvalid choice. Try again!\n";
				choice = -1;
			}

		}

		return choice;
	}

	bool add_patient() {
		cout << "\nEnter specialization (1 : 20) : ";
		int patient_spec;
		cin >> patient_spec;

		cout << "Enter Patient Name :";
		string patient_name;
		cin >> patient_name;

		cout << "Enter patient Status (0 -> Regular , 1 -> urgent) : ";
		int patient_status;
		cin >> patient_status;

		bool status;
		if (patient_status == 0)
			status = queues[patient_spec].add_end(patient_name, patient_status);
		else
			status = queues[patient_spec].add_front(patient_name,
					patient_status);

		if (status == false) {
			cout
					<< "\nSorry we can't add more patients for this specialization\n";
			return false;
		}

		return true;
	}

	void list_patients() {
		for (int spec = 0; spec < MAX_SPEC; ++spec)
			queues[spec].print();
	}

	void pick_patient() {

		int spec;
		cout << "Enter Spectialization: ";
		cin >> spec;
		queues[spec].remove_front();
	}
};

int main_8_3() {

	struct hospital_system hospital;
	hospital.run();

	return 0;
}*/
