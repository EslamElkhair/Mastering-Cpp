
//Hospital System
/*
 Implement the following system for a hospital :

 ● There are 20 different specialization (e.g. Children, Surgery, etc)

 ● For each specialization, there are only 5 available spots [queue]

 ● Adding a patient
 ○ Read the requested specialization [1-20].
 ○ Read his name and status (0 = regular, 1 urgent)
 ○ If 5 patients exist, apologize and don’t accept.
 ○ If the user is regular, add in end of queue. Otherwise, add in Begin

 ● Print patients, for the specializations that have waiting patients

 ● Dr pickup a patient
 ○ Read the requested specialization. If no patients, inform the doctor
 ○ Otherwise, ask the patient to go with the Dr. Then Remove from the queue
 */

//#include<iostream>
//using namespace std;
//
//const int max_spectializations = 20;
//const int max_places = 5;
//
//string names[max_spectializations + 1][max_places + 1]; //+1 -> because the array is zero based
//int status[max_spectializations + 1][max_places + 1];
//int available_places[max_spectializations + 1]; //counter
//
//int menu() {
//	int choice = -1;
//
//	while (choice == -1) {
//		cout << "\n1) add new patient\n"
//				"2) print all patients\n"
//				"3) get next patient\n"
//				"4) Exit\n"
//				"Enter your choice:";
//		cin >> choice;
////
////		if (cin.fail())
////			break;
//
//		if (!(1 <= choice && choice <= 4)) {
//			cout << "\ninvalid choice.Try again\n";
//			choice=-1;
//		}
//
//	}
//	return choice;
//}
//
//// // Move each patient to the left ->  Help in removing patient that doctor has ckecke them from the queue.
//void shift_left(int spec, string patient_name[], int patient_status[]) {
//	int positions = available_places[spec];
//	for (int i = 1; i < positions; i++) {
//		patient_name[i - 1] = patient_name[i];
//		patient_status[i - 1] = patient_status[i];
//	}
//	available_places[spec]--;
//}
//
//// Move each patient to the right -> Help in adding urgent patient in the first place in the queue.
//void shift_right(int spec, string patient_name[], int patient_status[]) {
//
//	int positions = available_places[spec];
//	for (int i = positions - 1; i >= 0; i--) {
//		patient_name[i + 1] = patient_name[i];
//		patient_status[i + 1] = patient_status[i];
//	}
//	available_places[spec]++;
//}
//
//bool add_patients() {
//
//	cout << "Enter specialization (1 : 20) : ";
//	int patient_spec;
//	cin >> patient_spec;
//
//	cout << "Enter Patient Name :";
//	string patient_name;
//	cin >> patient_name;
//
//	cout << "Enter patient Status (0 -> Regular , 1 -> urgent) : ";
//	int patient_status;
//	cin >> patient_status;
//
//	int position = available_places[patient_spec];
//	//check if places are full
//	if (position >= max_places) {
//		cout << "Sorry we can't add more patients in spectialization "<<patient_spec<<"\n";
//		return false;
//	}
//
//	if (patient_status == 0)	// regular, add to end
//	{
//		names[patient_spec][position] = patient_name;
//		status[patient_spec][position] = patient_status;
//		available_places[patient_spec]++;
//	}
//	else {
//		// urgent, add to begin. Shift, then add
//		shift_right(patient_spec, names[patient_spec], status[patient_spec]);
//		names[patient_spec][0] = patient_name;
//		status[patient_spec][0] = patient_status;
//	}
//
//	return true;
//}
//
////print patients in specefic spectializations
//void print_patient(int spec, string names_sp[], int status_sp[]) {
//	int positions = available_places[spec];
//	if (positions == 0)
//		return;
//	if (positions == 1)
//		cout << "There is only " << positions << " Patient in specialization " << spec << "\n";
//
//	if (positions >= 2)
//		cout << "There are " << positions << " patients in specialization " << spec << "\n";
//	for (int i = 0; i < positions; ++i) {
//		cout << names_sp[i] << " -> ";
//		if (status_sp[i])
//			cout << "urgent\n";
//		else
//			cout << "regular\n";
//	}
//	cout << "\n";
//}
//
////list patients in all spectializations
//void list_patients() {
//	cout << "****************************\n";
//	for (int spec = 0; spec < max_spectializations; ++spec) {
//		print_patient(spec, names[spec], status[spec]);
//	}
//}
//
//void pick_patients() {
//
//	cout << "\nEnter spectialization:";
//	int patient_spec;
//	cin >> patient_spec;
//
//	int positions = available_places[patient_spec];
//
//	if (positions == 0) {
//		cout << "No patients at the moment\n";
//		return;
//	}
//
//	// turn for Patient in position 0
//	cout << names[patient_spec][0] << ", please go with the doctor\n";
//
//	shift_left(patient_spec,names[patient_spec],status[patient_spec]); // delete the patient in position 0
//}
//
//void hospital_system() {
//
//	while (true) {
//		int choice = menu();
//
//		if (choice == 1)
//			add_patients();
//		else if (choice == 2)
//			list_patients();
//		else if (choice == 3)
//			pick_patients();
//		else
//			break;
//
//	}
//}

int main_7_0() {

//	hospital_system();

	return 0;
}

