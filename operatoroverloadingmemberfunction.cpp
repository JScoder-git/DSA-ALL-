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
    cout<<"complex number : "<<real<<" + "<<imaginary<<"i"<<endl;
  }
    complex operator -(complex obj)

    {
      complex temp;
      temp.real= real - obj.real;
      temp.imaginary= imaginary - obj.imaginary;
      return temp;
    }
  
};

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