#include <bits/stdc++.h>

using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    int ans =0;
   for(int i = 0 ; i < x;i++){
    int t;
    cin>>t;
    if(t % y == 0){
        ans++;
    }
}

cout<<ans<<endl;
    return 0;
}