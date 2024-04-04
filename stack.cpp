#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() {
    int n;
    cin>>n;
    stack<int> s;
for(int i = 0;i<n;i++){
    int m;;
    cin>>m;
    s.push(m);
}

 

for(int i = 0;i<7;i++){
    cout<<s.top()<<endl;
    s.pop();

}
    return 0;

}