#include <bits/stdc++.h>
#include <list>
using namespace std;

int main() {
    int n,s,m;
    cin>>s;
    list<int> l;
    for(int i = 0;i<s;i++){
        cin>>n;
        cin>>m;
        l.push_front(m);
        l.push_back(n);

    }

    for(int j : l){
        cout<<j<<" ";
    }
    cout<<endl;
    l.sort();
    for_each(l.begin(),l.end(),[](int x){cout<<x<<" ";});
    return 0;
}