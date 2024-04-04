#include <iostream>

using namespace std;
class complex{
public:
  int real,imaginary;
  void input(){
    cout<<"enter real and imaginary"<<endl;
    cin>>real>>imaginary;
  }
  void display(){
    cout<<"complex number : "<<real<<" - "<<imaginary<<"i"<<endl;}
   friend complex operator -(complex obj,complex obj1);
};

complex operator -(complex obj,complex obj1)
{
complex temp;
temp.real=obj.real-obj1.real;
temp.imaginary=obj.imaginary-obj1.imaginary;
}
int main() {
  complex obj1,obj2,obj3;
  obj1.input();
  obj1.display();
  obj2.input();
  obj2.display();
  obj3=obj1-obj2;
  obj3.display();
  return 0;
}