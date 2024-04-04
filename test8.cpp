#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define trav(x) for(auto &i:(x))
const char nl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tt;
    cin>>tt;
    while(tt--) {
         
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c || b+c == a || a+c == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}