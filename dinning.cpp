#include <iostream>

using namespace std;


//Guest class
class Guest {
public:
	string name;
	int seatNo;
};


class dinningHall {
public:
	// static data members.
	static int current;
	static Guest guest[50];


	// static member function.
	static void allocate(string name) {
		if (current == 50) {
			cout << "NO seats avaliable." << '\n';
			return;
		}
		guest[current].name = name;
		guest[current].seatNo = current + 1;
		current++;
	}

	static void display() {
		cout << "Displaying Data:" << '\n';
		for (int i = 0; i < current; i++) {
			cout << "Seat NO : " << guest[i].seatNo << ' ' << "Name : " << guest[i].name << '\n';
		}
	}
};


//initialization of static members of dinningHall class..
int dinningHall::current = 0;
Guest dinningHall::guest[50] = {};

int main() {
	dinningHall::allocate("Sahil");
	dinningHall::allocate("Amit");
	dinningHall::allocate("Swastik");
	dinningHall::allocate("Debashish");
	dinningHall::allocate("Ravi");
	dinningHall::allocate("Parul");

	dinningHall::display();

	return 0;
}

