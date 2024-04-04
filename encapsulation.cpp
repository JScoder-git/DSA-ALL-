#include <iostream>

using namespace std;

class demo{
private:
	int salary;
public:
	void setsalry( int s){
		s = salary;}

int getsalary(){
return salary;
}
};
int main() {
	demo obj1;
	obj1.setsalry(5000);
	cout<<obj1.getsalary();
	
	return 0;
}