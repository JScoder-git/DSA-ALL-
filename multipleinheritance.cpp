#include <iostream>

using namespace std;
class alpha{
public:
int x = 217;	
void display(){
cout<<"Room of Nek Chand : "<<x<<endl;
}
};
class beta{
public:
	int y = 709;
void tdisplay(){
cout<<"Room of zakir : "<<y;
}
};

class gama:public alpha,public beta{
};
int main() {
gama obj;
obj.display();
obj.tdisplay();
	return 0;
}