#include <bits/stdc++.h>

using namespace std;
 
class test
{
 public:
	 int display()
	{
		cout<<"\n Baseclass";
	}
};
class child:public test{
public:
	virtual int display()
	{
		cout<<"\n Derivedclass";
	}
};

int main() {
	test *p;
	child obj;
	p = &obj;
	(*p).display();

	return 0;
}