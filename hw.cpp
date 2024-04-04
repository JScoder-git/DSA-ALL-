#include <iostream>

using namespace std; 
class demo{
public:
    int ap;
    demo(){
     ap = 11;
    }
    int operator++(){
        ap = ++ap;

    } void display(){
    cout<<"display";
    }
};

int main() {

    demo obj;
   obj.operator++();
   obj.display();

    
    return 0;
}