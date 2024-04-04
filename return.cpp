#include <iostream>

using namespace std;
string friends( string room ,string hostel){
	string f = hostel + room;
	return f;
}
int main() {
	cout<<friends(" amit "," sahil ");
	
	return 0;
}