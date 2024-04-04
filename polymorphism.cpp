#include <iostream>

using namespace std;
class cat{
public:
	void sound(){
		cout<<"cat sound be like : meow meow"<<endl;
	}
};
class dog:public cat{
public:
	void sound(){
		cout<<"dog sound be like : bow bow"<<endl;
	}
};
class cow:public cat{
public:
	void sound(){
		cout<<"cow sound be like : boo boo";
	}
};

int main() {
cat obj;
dog obj1;
cow obj2;

obj1.sound();
obj.sound();
obj2.sound();
	
	return 0;
}