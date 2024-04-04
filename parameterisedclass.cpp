#include <iostream>

using namespace std;

class demo{
public:
	int speed(int maxspeed);
};

int demo::speed(int maxspeed){
return maxspeed;
}
int main() {
	demo obj1;
	cout<<obj1.speed(200);
	
	return 0;
}