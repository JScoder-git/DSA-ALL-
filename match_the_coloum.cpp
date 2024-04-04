#include <bits/stdc++.h>

using namespace std;

int main() {
int n;
int count(0);
cin>>n;
	vector<int> s(n),j(n);
	for(int i = 0;i<n;i++)
	{
		cin>>s[i]>>j[i];
		for(int k = 0;k<n;k++)
		{
			if(s[i]==j[k])
			{
				count += 1;
			}
			if(j[i]==s[k]){
				count += 1;
			}
		}
	}
	cout<<count;
	return 0;
}