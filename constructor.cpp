#include <bits/stdc++.h>

using namespace std;

class demo
{
public:
	string block;
	string name;
	int room;
	demo(string x,string y,int z);
};

demo::demo(string x,string y,int z){
	block = x;
	name = y;
	room = z;
}


int main() {
	demo obj1("AU 4","SAHIL ",217);
	demo obj2("AU 3","ANMOL ",709);

	cout<<obj1.block<<" block's "<<obj1.name<<"got room no "<<obj1.room<<endl;	
	cout<<obj2.block<<" block's "<<obj2.name<<"got room no "<<obj2.room;
	return 0;
}