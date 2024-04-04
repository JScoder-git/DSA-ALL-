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
	
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	
	map<int,int>mp;

	for(auto i :v){
		mp[i]++;
	}
	int count = 0;
	for(auto it :mp){
		for (int i = 0; i < it.second; ++i)
		{
			v[count] = it.first;
			count++;
		}
	}

	for(auto it:v){
		cout<<it<<" ";
	}


	return 0;
}