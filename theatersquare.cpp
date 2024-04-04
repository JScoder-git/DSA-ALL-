#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n,m,a,len,brath;
    cin>>n>>m>>a;
    len = n/a;
    if(n%a!=0){
        len++;
    }
    brath = m/a;
    if(m%a!=0){
        brath++;
    }
    cout<<len*brath<<endl;
    return 0;
}