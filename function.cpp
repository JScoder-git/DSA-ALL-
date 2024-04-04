#include <iostream>

using namespace std;
void function(string name = "Swastik" , int degree = 3)
{
	cout<<name<<" From C.S.E "<<degree<<" years "<<endl;
}
int main()
{
function("Sahil ",1);
function("Amit ",4);
function("debasish ",4);
function("shivam",1);

return 0;
}