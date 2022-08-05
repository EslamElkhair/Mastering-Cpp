#include<iostream>
#include<bits/stdc++.h>

using namespace std;

const int MAX_SPEC = 20;

struct hospital_queue {

	deque<pair<string, int>> queue;
	int spec;

	hospital_queue() {
		spec = -1;
	}
	hospital_queue(int _spec) {
		spec = _spec;
	}

	bool add_end(string name, int status) {
		if(queue.size()>=5)
			return false;
		auto item = make_pair(name, status);
		queue.push_back(item);
		return true;
	}
	bool add_front(string name, int status) {
		if(queue.size()>=5)
			return false;
		auto item = make_pair(name, status);
		queue.push_front(item);
		return true;
	}
	void remove_front() {
		if (queue.size() == 0) {
			cout << "\nNo paitents at the moment\n";
			return;
		}
		auto item = queue.front();
		queue.pop_front();
		cout << "\n" << item.first << ", Please go with the doctor\n";
	}
	void print() {
		if (queue.size() == 0)
			return;

		if (queue.size() == 1)
			cout << "\nThere is only " << queue.size()
					<< " patients in Spectialization " << spec << " :\n";

		if (queue.size() >= 2)
			cout << "\nThere are " << queue.size()
					<< " patients in spectialization " << spec << " :\n";

		for (auto item : queue) {
			cout << item.first << " -> ";  //name
			if (item.second)
				cout << "urgent\n";
			else
				cout << "regular\n";
		}
		cout << "\n";
	}

};

struct hospital_system {

	vector<hospital_queue> queues;

	hospital_system() {
		queues = vector<hospital_queue>(MAX_SPEC);

		for (int i = 0; i < MAX_SPEC; ++i)
			queues[i] = hospital_queue(i);
	}

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
				cout << "\n\nInvalid choice. try again!\n";
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
			status = queues[patient_spec].add_front(patient_name,patient_status);

		if (status == false) {
			cout<< "\nSorry we can't add more patients for this specialization\n";
			return false;
		}

		return true;
	}
	void list_patients() {
		for (int spec = 0; spec < MAX_SPEC; ++spec)
			queues[spec].print();
	}
	void pick_patient() {

		cout << "Enter Spectialization:";
		int spec;
		cin >> spec;

		queues[spec].remove_front();
	}

};

int main_8_3() {

	hospital_system hospital;
	hospital.run();

	return 0;
}

