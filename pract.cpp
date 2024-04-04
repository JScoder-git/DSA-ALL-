#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	int t;
	cin>>t;
	while(t--){
	   
	    int n,k,l;
	    cin>>n>>k>>l;
	     vector<int>v(n);
	    for(int i=0; i<n; i++){
	       cin>>v[i];
	    }
	   sort(v.rbegin(),v.rend());
	   long long ans=0;
	   for(int i=l-1 ;i<n;i+=k){
	       //cout<<v[i]<<" ";
	   ans+=v[i];
	   }
	   
	   cout<<ans<<endl;
	   
	    
	}
	return 0;
}