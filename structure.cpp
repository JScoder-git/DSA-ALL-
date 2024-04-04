#include <iostream>

using namespace std;


struct room{
		string name;
		string laptop;
		int num;
	};
	int main(){
	room information;
	information.name = "Amit";
	information.laptop = "Victus";
	information.num = 217;

	room information2;
	information2.name = "Sahil";
	information2.laptop = "Asus Tuf Gaming";
	information2.num = 217;
	
	cout<<"Name : "<<"\n"<<information.name<<"\n"<<information2.name<<"\n";
	cout<<"Name : "<<"\n"<<information2.laptop<<"\n"<<information2.laptop<<"\n";

	return 0;
}