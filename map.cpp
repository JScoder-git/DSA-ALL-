#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,string> m;
   for(int i = 0;i<n;i++){
    int s;
    string j;
    cin>>s>>j;
    m.insert({s,j});
}

    for(auto i : m){
        cout<<"\n"<<i.first<<" "<<i.second;
    }
    cout<<m.count(4);
    
    return 0;
}