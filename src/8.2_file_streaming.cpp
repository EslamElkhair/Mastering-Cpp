#include<iostream>
#include<fstream> // for ifstream and ofstream
#include<sstream> // for istring stream ostring stream

using namespace std;

int main_file_streaming() {

//Hints
	// -> ofstream: Stream class to write on files
	// -> ifstream: Stream class to read from files
	// -> fstream: Stream class to both read and write from/to files
	// -> stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin).

/*
	//The typical cycle of dealing with a file is:

	- Open it

	- Check if opened

	- Read or write

	- Close it
*/

/*	It is a bad practice, but most of the basic usage for files will be ok if you even forgot to close a file?
 *
 * File will be closed automatically (later learn about destructors).
 * However, still some scenarios will make a problem (terminating the program with exit() or opening many files without a close on some operating systems)
 *
 * */



//Console (Read/Write)
/*
	● So far we read & write to console (the black screen / IDL screen)
	○ IO stream from keyboard using cin & cout (objects)
	● In practice, we want to save data in disk not memory
	● So we need to learn reading & writing to files
*/

//Files (Read/Write)
	//I/O Redirection informally: your stream was reading/writing from/to source, and you change its source/destination

//The easy way: freopen
/*
	● You can convert any C++ project from cin/cout reading to read from files using
	1 line for reading and another line for writing
	● E.g. put freopen in main in any project. Now code reads from file
	○ See 16_17_library_v2.cpp: Notice a commented freopen line to read from c.in
*/

/*
	freopen("read_file.txt", "rt", stdin);

	int x, y;
	cin >> x >> y;
	cout << x + y;
*/


//The profisional way : fstream

/*
	// ifstream : Read from files
	ifstream fin("read_file.txt");

	if(fin.fail()) {
		cout<<"can't open the input file\n";
		return 0;
	}

	int x,y;
	fin>>x>>y;

	cout<<x+y; // write to the console

	fin.close();
*/

//ofstream : write to the file

/*
	ifstream fin("read_file.txt");

	if(fin.fail()) {

		cout<<"can't open the output file\n";
		return 0;
	}


	int n1 ,n2;
	fin>>n1>>n2;

	fin.close();

	ofstream fout("output_file.txt");

	if(fout.fail()){
		cout<<"can't open the output file\n";
	}


	fout<<n1+n2;

	fout.close();
*/

//________________________________________________________________________________________________

// Read and Write (appending)
	// a way to make the object read and write in the same time
	// in professional practice : Don't read and write at the same time. Don't mix reading and writing

/*
	bool append =true;

	auto status = ios::in | ios::out | ios::app; // add a new empty line after finishing writing in the file

	if(!append)
		status=ios::in | ios::out | ios::trunc; // don't add a new empty line after finishing writing in the file

	string path="read_file.txt";

	fstream file_handler(path.c_str(),status);

	if(file_handler.fail()) {
		cout<<"can't open the file\n";
		return 0;
	}

	string first,second;
	file_handler>>first>>second;

	cout<<first<<" "<<second<<"\n";

	file_handler.clear();  // if any internal errors, before writing

	file_handler.close();
*/
//________________________________________________________________________________________________

// Reading and Writing (more imporved)

/*
	string path ="input_file.txt";

	fstream file_handler(path.c_str());

	if(file_handler.fail()) {
		cout<<"can't open the file\n";
		return 0;
	}

	string line;

	while(getline(file_handler,line))
		cout<<line;

	file_handler.close();
*/
//________________________________________________________________________________________________

// Reading and writing (strings only)
	//Among stream classes, string stream is for in-memory processing?
	    // We don't read/write to files. Just string in the memory
/*

	//Reading
	// the idea -> it just reading the string provided word by word separated by space
	string str = "eslam 22 years";

	istringstream iss(str);

	string name;
	int age;
	iss>>name>>age;


	cout<<name<<age<<"\n";

	//Writing

	ostringstream oss;

	oss<<"eslam ";
	oss<<22;
	oss<<" years old\n";

	cout<<oss.str();
*/

	return 0;
}

