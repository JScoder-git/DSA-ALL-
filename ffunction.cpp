#include <iostream>

using namespace std;

class two;

class one {
	int data;
public:
	one() {
		data = 490;
	}


	void display() {
		cout << "DAta in class one is : " << data << '\n';
	}
	friend void swap(one *o, two *t);
};

class two {
	int data;
public:
	two() {
		data = 743;
	}

	void display() {
		cout << "DAta in class two is : " << data << '\n';
	}
	friend void swap(one *o, two *t);
};

void swap(one *o, two *t) {
	int temp = o -> data;
	o -> data = t -> data;
	t -> data = temp;
}

int main() {
	one o;
	two t;
	cout << "Before : \n";
	o.display();
	t.display();
	swap(&o, &t);
	cout << "after : \n";
	o.display();
	t.display();	
	return 0;
}