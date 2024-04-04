#include <iostream>

using namespace std;

class area
{
public:
	int l,b;

	//constructor is called

    area()
    {
     l = 5;
     b = 6;
    }
	//constructor is called

	area(int x, int y)
	{
     x=l;
     y=b;    
	}
	void getdata()
	{
     cout<<"Area of rectangle : "<<l*b<<endl;
    }

	//destructor is called 

	~area()
	{
    cout<<"Destructor is called ";
	}

};

int main() {
	area a;
	a.getdata();
	return 0;

}