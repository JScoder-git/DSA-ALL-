#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    deque<string> d;
string n,m;
cin>>n>>m;
    d.push_back(n);
    d.push_front(m);

    for(string i : d){
        cout<<i<<" ";
    }

    d.pop_back();
     for(string i : d){
        cout<<i<<" "<<endl;
    }
    d.push_back(n);
    for(string i :d){
        cout<<i<<endl;
    }

    cout<<"size : "<<d.size()<<endl;
    for(string i : d){
        cout<<i<<" ";
    }


    d.erase(d.end(),d.end()+1);

    cout<<"\nsize : "<<d.size()<<endl;
    for(string i:d){
        cout<<i<<" ";
    
   
    }
    return 0;
}