#include <iostream>

using namespace std;


class demo{
public:
	int plate;
	string num;
};
int main() {
	demo obj1;
	obj1.plate = 2107;
	obj1.num = "PBO7";

	demo obj2;
	obj2.plate = 7431;
	obj2.num = "PB54";


	cout<<obj1.num<<" D "<<obj1.plate<<endl;
	cout<<obj2.num<<" B "<<obj2.plate;
	return 0;
}