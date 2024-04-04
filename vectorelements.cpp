#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v1 {1,2,3,4,5,6,7,8};

	for(const int& i :  v1)
	{
		cout<<i<<" ";
	}

	v1.at(5)=9;
	v1.pop_back();
	v1.push_back(5);
cout<<"\n";
	for(const int& i : v1)
	{
		cout<<i<<" ";
	}

	return 0;
}