#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int d = a-b;
try{   
    if(d == 0){
        throw d;
    }
    else{
        cout<<"division = "<<a/d;
    }
}

catch(int i){
    cout<<"cannot divide by "<<i;}
    return 0;
}
