#include <bits/stdc++.h>

using namespace std;

int main() {
	long int s,n;
	cin>>s>>n;
	pair<int,int>a[1000];

		for(int i = 0;i<n;i++){
			cin>>a[i].first>>a[i].second;
		}
		sort(a,a+n);
		for(int i = 0;i<n;i++){
			cout<<a[i].first<<" "<<a[i].second<<endl;
			}
	
	return 0;
}