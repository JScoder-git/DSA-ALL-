#include <iostream>

using namespace std;

int marks(int x , int y , int z)
{
	return x + y + z;
}

string friends(string beginers, string pro , string ultra)
{
   ;
  return beginers+pro+ultra ;
}
int main() {

	int num = marks(12,23,34);
	string boy = friends("Sahil ","Swastik ","Amit");
	cout << num <<endl;
	cout << boy;
	
	return 0;
}