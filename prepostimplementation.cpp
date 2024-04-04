#include <bits/stdc++.h>

using namespace std;
class demo{

public:
    int x;
    demo(){
        cin>>x;
    }

    demo operator ++(){
        demo obj1;
        obj1.x=x+3;
        
        return obj1;
    }
    demo operator ++(int){
        demo obj1;
        obj1.x=x+3;
       return obj1;
    }

};
int main() {
    demo obj1;
    obj1++;
   ++obj1;
    
    return 0;
}







#include <iostream>

using namespace std;
class demo
{
    public:
    int a;
    demo()
    {
       cin>> a;
    }
    demo operator++()
    {
        demo d;
        d.a=a+3;
        cout<<d.a;
        return d;
    }
    demo operator++(int)
    {
        demo d;
       d = 
        return d;
    }
};
int main()
{
    demo d;
    // d.operator++();
    // d++;
    
    ++d;
    d++;
    
    return 0;
}