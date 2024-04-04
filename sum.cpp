#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int t,sum=0;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        while(n>0)
        {
            m = n % 10;
            sum = sum + m;
            n = n/10;
        }
            
    }
    cout<<sum<<endl;
    
    return 0;
}