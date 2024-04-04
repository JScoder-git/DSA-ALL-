#include <iostream>

using namespace std;

class car{
public:
string brand = "Ford";
void display(){
cout<<"tunk tunk !";
}
};

class child:public car{
public:
	string model ="Mustang";
};

int main() {
	child obj1;
	obj1.display();
	cout<<obj1.brand<<" "<<obj1.model; 
	return 0;
}