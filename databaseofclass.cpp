#include <iostream>
#include <string>
using namespace std;

class Database {
	// Data members
	string name;
	int rollNo;
	int height;
	int weight;
	//Constructor : special member function with same name as class.
	// Parameterized
	public:
	Database(string n, int r, int h, int w) {
		cout << "Constructor is called.\n";
		name = n;
		rollNo = r;
		height = h;
		weight = w;
	}

	// Member function.
	void display() {
		cout << "Student Details : " << '\n';
		cout << "Name : " << name << '\n';
		cout << "Roll NO : " << rollNo << '\n';
		cout << "Height : " << height << '\n';
		cout << "Weight : " << weight << '\n';
	}

	//Destructor : special member function with a toggle at the front.
	~Database(){
		cout << "Destructor is called.\n";
	}
};

int main() {
	// Creating object.
	Database ob1("sahil", 234, 6, 69);
	// Calling display member function.
	ob1.display();
	// Copy Constructor.
	Database ob2 = ob1;
	cout << "Calling ob2" << '\n';
	ob2.display() ;
	return 0;
}