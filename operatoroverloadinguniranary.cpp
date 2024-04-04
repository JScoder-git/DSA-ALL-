#include <iostream>

using namespace std;
class demo
{
    public:
    int a;
    demo()
    {
        a=3;
    }
    
    
    
    demo operator++()
    {
        demo d;
        a=a+3;
        return d;
    }
    demo operator++(int)
    {
        demo d;
        a=a+3;
        return d;
    }
    void display(){
        cout<<a<<" ";
    }
};
int main()
{
    demo d;
    ++d;
   d.display();
    d++;
    d.display();
    return 0;
}