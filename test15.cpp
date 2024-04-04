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
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	unordered_map<int ,int > mp;

	for (auto i : v)
	{
		mp[i]++;
	}
	
	for(auto it : mp){
		cout<<it.first<<" "<<it.second<<endl;
	}

	return 0;
}