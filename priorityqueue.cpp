#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
    // max heap
    int n;
    cin>>n;
    priority_queue<int> maxi;
    for(int i = 0; i<n ;i++){
        int j;
        cin>>j;
        maxi.push(j);
    }

for(int s = 0 ;s<n;s++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}
cout<<endl;
    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    for(int k= 0 ; k<n ;k++){
        int l;
        cin>>l;
        mini.push(l);
    }

    for(int s = 0 ;s<n;s++){
    cout<<mini.top()<<" ";
    mini.pop();
}
    return 0;
}