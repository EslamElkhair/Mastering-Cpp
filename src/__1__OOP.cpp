#include<iostream>
#include<string>

using namespace std;

//Data Hiding
class Qoute {

private:
	int internal;

	string getQoute() {
		return "this is qoute\n";
	}

public:
	int external;

	Qoute() {
		internal = 3;
		external = 7;
	}

	void print() {
		cout << getQoute();
	}

};
//_______________________________________________

//Abstraction

// object as a struct
struct _Rectangle {

	double width;
	double height;

	_Rectangle() {
		width = height = 0;
	}
	_Rectangle(double width_, double height_) {
		width = width_;
		height = height_;
	}
	double computeArea() {
		return width * height;
	}
	double computePerimeter() {
		return 2 * (width + height);
	}
};

// object as a class
class rectangle {
private:
	double width;
	double height;
public:
	rectangle() {
		width = height = 0;
	}
	rectangle(double width_, double height_) {
		width = width_, height = height_;
	}
	double computeArea() {
		return width * height;
	}
	double computePerimeter() {
		return 2 * (width + height);
	}

	//Setters and Getters
	double getWidth() {
		return width;
	}
	void setWidth(double width_) {
		width = width_;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double height_) {
		height = height_;
	}
};

// Applying Abstraction

class Rectangle {
private:
	double width;
	double height;
public:
	//what -> interface
	Rectangle ();
	Rectangle(double width_,double height_);
	double computeArea();
	double computePerimeter();
	double getHeight() const;
	void setHeight(double height);
	double getWidth() const;
	void setWidth(double width);
};

//how  -> implementation
Rectangle::Rectangle(){
	width=height=0;
}
Rectangle::Rectangle(double width_,double height_) {
	width=width_, height=height_;
}
double Rectangle::computeArea () {
	return width * height;
}
double Rectangle::computePerimeter() {
	return 2 * (width + height);
}

double Rectangle::getHeight() const{
	return height;
}
void Rectangle::setHeight(double height) {
	this->height = height;
}
double Rectangle::getWidth() const {
	return width;
}
void Rectangle::setWidth(double width) {
	this->width = width;
}
//_______________________________________________
int main__OO() {

//Data Hiding
	/*
	 Qoute q;

	 cout<<q.external<<"\n";
	 q.print();

	 //cout<<getQoute();   --> can't call
	 //cout<<internal;     --> can't access
	 */

//Abstraction
/*	Rectangle r;
	r.setHeight(5);
	r.setWidth(5);

	cout<<r.computeArea();*/


	return 0;
}

