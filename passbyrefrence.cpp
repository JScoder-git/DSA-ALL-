#include <iostream>

using namespace std;
 void swap(int &x,int &y){
 	int z = x;
 	x = y;
 	y = z;
}
int main() {
  int fnum = 10;
  int snum = 20;

	cout<<"Before Swaping"<<"\n";
	cout<<fnum<<" "<<snum<<endl;

	swap(fnum,snum);

	cout<<"After Swap"<<"\n";
	cout<<fnum<<" "<<snum<<endl;
	 
	return 0;
}