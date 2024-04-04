#include <iostream>

using namespace std;

int main() {

	string amit = "Coder";
	string* sahil = &amit;
	string** dev =&sahil;
	string*** swastik =&dev;

	cout<<amit<<endl;
	cout<<sahil<<endl;
	cout<<*sahil<<endl;
	cout<<**dev<<endl;//double pointer
	cout<<***swastik<<endl;//triple pointer


	*sahil = "beginner";
	cout <<*sahil<<endl;
	cout<<amit<<endl;
	cout<<**dev<<endl;
	
	return 0;
}

