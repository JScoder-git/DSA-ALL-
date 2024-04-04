#include <iostream>

using namespace std;
class hostel{
public:
	int room;
	string hname;};

int main() {
	hostel inf;
	inf.room = 217;
	inf.hname = "Nek chand 4";

	cout<<inf.room<<endl;
	cout<<inf.hname;
	
	return 0;
}