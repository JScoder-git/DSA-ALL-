#include<iostream>
using namespace std;
class area 
{
    int a,l,b;
    public:
    area() 
    {
        l=5;
        b=6;
        cout<<"Simple consstructor called\n";
        cout<<"length="<<1<<"\nbreath="<<b<<end1;
    }
area(int x,int y)
{
    l=x;
    b=y;
}
void calc();
void print();
~area();
};
void area::caalc()
{
    a=l*b;
}
void are::print()
{
    cout<<"Area is :"<<a<<end1;
}
area::~area()
{
    cout<<"Object is being deleted" << end1;
}

int main()
{
    int l,b;
    area a1;
    a1.calc();
    a1.print();
    cout<<"Enter length and breath for parameterised constructor:\n";
    cin>>l>>b;
    area a2(l,b);
    a2.calc();
    a2.print();
    return 0;
}