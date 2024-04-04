#include <iostream>

using namespace std;
class inf{

public:
string nme = "Amit";
};

class name : public inf{
public:
	string surname = "Kuamr";
};

class caste : public name{
public:
string category = "ray";
};

int main() {
caste obj;
cout<<obj.nme<<" "<<obj.surname<<" "<<obj.category; 	
	return 0;
}